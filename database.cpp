#include "database.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QString>
#include <qwindowdefs.h>


Database::Database() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(main_dbname + ".db");
    if(!db.open() ){
        qDebug()<<db.lastError().text();
        return;
    }
    this->database = db;
    QSqlQuery query(db);
    this->query = query;
    if (!(this->createMovieDB( DBType::mainDb, DBName[static_cast<int>(DBType::mainDb)]) &&
        this -> createMovieDB(DBType::favouriteDb, DBName[static_cast<int>(DBType::favouriteDb)]) &&
        this -> createMovieDB(DBType::willWatchDb, DBName[static_cast<int>(DBType::willWatchDb)]) &&
        this->createMovieDB(DBType::watchedDb, DBName[static_cast<int>(DBType::watchedDb)]))){
        qDebug()<<"Error occured";
}

}

QString Database::writeCreateQuery(DBType type,const QString dbname ){
    if( type == DBType::mainDb){
        return         QString("CREATE TABLE IF NOT EXISTS %1("
                       "id INTEGER PRIMARY KEY,"
                       "name TEXT NOT NULL,"
                       "year INTEGER NOT NULL,"
                       "duration INTEGER NOT NULL,"
                       "rating REAL NOT NULL,"
                       "genre TEXT NOT NULL,"
                       "original_language TEXT NOT NULL,"
                       "description TEXT NOT NULL    );").arg(dbname);
    }
    else if(type == DBType::watchedDb){
        return QString("CREATE TABLE IF NOT EXISTS %1("
                       "id INTEGER PRIMARY KEY,"
                       "main_id INTEGER NOT NULL,"
                       "rating INTEGER NOT NULL);").arg(dbname);
    }
    else{
        return QString("CREATE TABLE IF NOT EXISTS %1("
                       "id INTEGER PRIMARY KEY,"
                       "main_id INTEGER NOT NULL);").arg(dbname);
    }
}

bool Database::createMovieDB(DBType type, const QString dbname){
    QString createTableQuery =
        writeCreateQuery(type, dbname);
    if(!this->query.exec(createTableQuery)){
        qDebug()<<this->query.lastError().text();
        return false;
    }
    return true;
}


bool Database::addQuery( const QString dbname, struct Movie& newMovie){
    QString addQuery = QString("INSERT INTO %1 (name, year, duration, rating, genre, original_language, description) "
                               "VALUES (:name, :year, :duration, :rating, :genre, :original_language, :description);").arg(dbname);

    this->query.prepare(addQuery);
    this->query.bindValue(":name", newMovie.name);
    this->query.bindValue(":year", newMovie.year);
    this->query.bindValue(":duration", newMovie.duration);
    this->query.bindValue(":rating", newMovie.rating);
    this->query.bindValue(":genre", newMovie.genre);
    this->query.bindValue(":original_language", newMovie.original_language);
    this->query.bindValue(":description", newMovie.description);

    if(!this->query.exec()){
        qDebug()<<this->query.lastError().text();
        return false;
    }
    return true;
}

//перегруженная add для favourite и willWatch
bool Database::addQuery( const QString dbname, int movieId){
    QString addQueryString = QString("INSERT INTO %1 (main_id) "
                               "VALUES (:main_id);").arg(dbname);
    this->query.prepare(addQueryString);
    this->query.bindValue(":main_id", movieId);
    if(!this->query.exec()){
        qDebug()<<this->query.lastError().text();
        return false;
    }
    return true;
}

//для watched
bool Database::addQuery( const QString dbname, int movieId, int rating){
    QString addQueryString = QString("INSERT INTO %1 (main_id, rating) "
                                     "VALUES (:main_id, :rating);").arg(dbname);
    this->query.prepare(addQueryString);
    this->query.bindValue(":main_id", movieId);
    this->query.bindValue(":rating", rating);
    if(!this->query.exec()){
        qDebug()<<this->query.lastError().text();
        return false;
    }
    return true;
}



bool Database::delQuery(QString dbname, int delId){
    QString deleteQuery = QString("DELETE FROM %1 WHERE main_id = :delValue;").arg(dbname);
    this->query.prepare(deleteQuery);
    this->query.bindValue(":delValue", delId);
    if(!this->query.exec()){
        qDebug()<<this->query.lastError().text();
        return false;
    }
    return true;

}



bool Database::isExists( QString dbname, int movie_id){
    QString existsQuery = QString("SELECT COUNT(*) FROM %1 WHERE main_id = %2 ;").arg(dbname, QString::number(movie_id));
    this->query.prepare(existsQuery);
    if (this->query.exec() && this->query.next()){
        if(query.value(0).toInt() == 0){
            return false;
        }else{
            return true;
        }
    }
    qDebug() << "Query failed:" << query.lastError().text();
    return true;

}

bool Database::isExists( QString dbname, QString movie_name){
    QString existsQuery = QString("SELECT COUNT(*) FROM %1 WHERE name = :name ;").arg(dbname);
    this->query.prepare(existsQuery);
    this->query.bindValue(":name", movie_name);
    if (this->query.exec() && this->query.next()){
        if(query.value(0).toInt() == 0){
            return false;
        }else{
            return true;
        }
    }
    qDebug() << "Query failed:" << query.lastError().text();
    return true;

}

int Database::getRating(const QString &dbname, int movieId) {
    QString queryString = QString("SELECT rating FROM watched WHERE main_id = :main_id").arg(dbname);

    this->query.prepare(queryString);
    this->query.bindValue(":main_id", QString::number(movieId));

    if (this->query.exec()  && this->query.next()) {
        return query.value(0).toInt();
    } else {
        qDebug() << "Error fetching rating:" << query.lastError().text();
        return -1;
    }
}


void Database::closeDatabase(QSqlDatabase &db) {  //надо подумать
    if (db.isOpen()) {
        db.close();
        qDebug() << "Database closed.";
    }
}













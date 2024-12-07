#ifndef DATABASE_H
#define DATABASE_H

#include<QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
struct Movie{
    int id;
    QString name;
    int year;
    int duration;
    double rating;
    QString genre;
    QString original_language;
    QString description;

};




const QString main_dbname = "movies";


const QString DBName[] = {
    "movies",
    "favourite",
    "willwatch",
    "watched",
};

enum class DBType{
    mainDb,
    favouriteDb,
    willWatchDb,
    watchedDb,
};



class Database
{
public:
    Database();

    QSqlDatabase database;

    struct MovieField{
        const QString Name = "name";
        const QString Year = "year";
        const QString Duration = "duration";
        const QString Rating = "rating";
        const QString Genre = "genre";
        const QString Original_language = "original_language";
        const QString Description = "description";
    };


    QString writeCreateQuery(DBType type,const QString dbname );
    bool createMovieDB(DBType type, const QString dbname);
    //bool createDatabase(DBType type,QString &dbname);
    bool addQuery( const QString dbname, struct Movie& newMovie);
    bool addQuery( const QString dbname, int movieId);
    bool addQuery( const QString dbname, int movieId, int rating);
    void addMovie( const QString dbname);
    bool delQuery( QString dbname, QString delValue);
    bool delQuery( QString dbname, int delId);
    void showMainDatabase( QString dbname);
    void closeDatabase(QSqlDatabase &db);
    bool isExists( QString dbname, int movie_id);
    bool isExists( QString dbname, QString movie_name);
    int getRating(const QString &dbname, int movieId);


private:
    QSqlQuery query;



};




#endif // DATABASE_H



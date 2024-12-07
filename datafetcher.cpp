#include "datafetcher.h"
#include "database.h"

DataFetcher::DataFetcher(Database *db, QObject *parent ) : QObject(parent), my_db(*db)  {
    QNetworkAccessManager *manager = new QNetworkAccessManager();
    fetchData();


}

void DataFetcher::fetchData(){
    QNetworkAccessManager *manager = new QNetworkAccessManager();
    int pagesCount = 50;
    for(int page = 1;page < pagesCount;page++){
        QString url = QString("https://api.themoviedb.org/3/movie/popular?api_key=%1&page=%2").arg(apiKey, QString::number(page));
        QNetworkRequest request(url);
        QEventLoop loop;
        QNetworkReply *reply = manager->get(request);
        connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
        loop.exec();
        if(reply->error() == QNetworkReply::NoError){
            QString response = reply->readAll();
            parseMovies(response);
        }else{
            qDebug()<<reply->errorString();
        }
    }
}


void DataFetcher::parseMovies(QString response){
    QJsonDocument jsonDoc = QJsonDocument::fromJson(response.toUtf8());//содержит разобранный json(парсит response как json)
    QJsonObject jsonObj = jsonDoc.object();//объект в виде пар ключ-значение
    QJsonArray results = jsonObj["results"].toArray();
    for(QJsonValue value: results){
        QJsonObject jsonMovie = value.toObject();
        struct Movie movie;
        int movie_id = jsonMovie["id"].toInt();
        movie.name = jsonMovie["title"].toString();
        movie.year = QDate::fromString(jsonMovie["release_date"].toString(), "yyyy-MM-dd").year();
        movie.rating = jsonMovie["vote_average"].toDouble();

        movie.original_language =jsonMovie["original_language"].toString();
        movie.description = jsonMovie["overview"].toString();
        movie.genre = getGenresString(jsonMovie["genre_ids"].toArray());

        movie.duration = getMovieDuration(movie_id);
        if(!my_db.isExists(main_dbname, movie.name)){
            my_db.addQuery(main_dbname, movie);
        }
    }

}

int DataFetcher::getMovieDuration(int movieId) {
    QNetworkAccessManager manager;
    QString url = QString("https://api.themoviedb.org/3/movie/%1?api_key=%2&language=ru-RU").arg(QString::number(movieId), apiKey);
    QNetworkRequest request(url);
    QNetworkReply *reply = manager.get(request);
    QEventLoop loop;
    connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();
    if (reply->error() == QNetworkReply::NoError) {
        QString response = reply->readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(response.toUtf8());
        QJsonObject jsonObj = jsonDoc.object();
        return jsonObj["runtime"].toInt();
    } else {
        qDebug() << "Error fetching movie details:" << reply->errorString();
        return 0;
    }
}

QString DataFetcher::getGenresString(QJsonArray genre_ids){
    QString genreIds_string = "";
    QVector<int> genreIds_int;
    for(int i = 0; i < genre_ids.size();i++){
        genreIds_int.append(genre_ids[i].toInt());
        genreIds_string += QString::number(genre_ids[i].toInt());
        if(i != genre_ids.size() - 1){
            genreIds_string += ", ";
        }
    }
    QNetworkAccessManager *manager = new QNetworkAccessManager();
    QString genresString = "";
    QString url = QString("https://api.themoviedb.org/3/genre/movie/list?api_key=%1&with_genres=%2").arg(apiKey, genreIds_string);
    QNetworkRequest request(url);
    QEventLoop loop;
    QNetworkReply *reply = manager->get(request);
    connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();
    if(reply->error() == QNetworkReply::NoError){
        QString response = reply->readAll();

        QJsonDocument jsonDoc = QJsonDocument::fromJson(response.toUtf8());
        QJsonObject jsonObj = jsonDoc.object();
        QJsonArray genresList = jsonObj["genres"].toArray();
        for(int id: genreIds_int){
            for(QJsonValue genre: genresList){
                if (id ==  genre["id"].toInt()){
                    genresString += genre["name"].toString();
                    genresString+= ", ";
                }
            }
        }
        genresString.chop(2);
    }
    else{
        qDebug()<<reply->errorString();
    }

    return genresString;


}











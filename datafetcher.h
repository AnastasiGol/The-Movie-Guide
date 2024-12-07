#ifndef DATAFETCHER_H
#define DATAFETCHER_H
#include "database.h"
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QJsonDocument>
#include <QJsonObject>
#include<QtNetwork>
#include<QtGui>
#include<QtCore>


class DataFetcher : public QObject
{
    Q_OBJECT;

public:
     DataFetcher(Database *db, QObject *parent = nullptr);
     void createRequest();
     void extracted(QJsonArray &results);
     void parseMovies(QString response);
     QString getGenresString(QJsonArray genre_ids);
     QMap<int, QString> getGenresMap(QJsonArray genre_ids);
     void fetchData();
     int getMovieDuration(int movieId);

    QString apiKey = "ceafa5ea7ecb806ab0b329bd08bb475a";

 private:
    Database my_db;
     QNetworkAccessManager *manager;

};



#endif // DATAFETCHER_H

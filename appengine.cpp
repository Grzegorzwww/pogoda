#include "appengine.h"

appengine::appengine(QObject *parent) : QObject(parent)
{


     url_downlaod = new URLDownload(this);

     url_downlaod->download_data_from_url("http://dataservice.accuweather.com/forecasts/v1/hourly/12hour/2674397?apikey=ghLf1l3u7vHCgejz0VaB35wsxFmwOcJH");

      connect(url_downlaod, SIGNAL(data_recieved(QByteArray)), this, SLOT(on_received_url_data(QByteArray)));

}


void appengine::on_received_url_data(QByteArray data){


    qDebug() << QString::fromStdString(data.toStdString());
}




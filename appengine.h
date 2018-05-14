#ifndef APPENGINE_H
#define APPENGINE_H

#include <QObject>
#include "urldownload.h"

class appengine : public QObject
{
    Q_OBJECT
public:
    explicit appengine(QObject *parent = nullptr);



private:

        URLDownload *url_downlaod;

signals:

public slots:

        void on_received_url_data(QByteArray data);
};

#endif // APPENGINE_H

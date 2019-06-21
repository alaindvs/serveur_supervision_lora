#ifndef UDPRECEIVER_H
#define UDPRECEIVER_H

#include <QDialog>
#include <QHostAddress>
#include <QUdpSocket>

class QLabel;

class UdpReceiver : public QDialog
{
    Q_OBJECT

public:
    explicit UdpReceiver(QWidget *parent = nullptr);

signals:
    void newDataReceived(QByteArray data);

private slots:
    void processPendingDatagrams();

private:
    QLabel *statusLabel = nullptr;
    QUdpSocket udpSocket4;
  //  QUdpSocket udpSocket6;
    QHostAddress groupAddress4;
   // QHostAddress groupAddress6;
    int packetreceived;


};

#endif

#ifndef NETWORKCOMMUNICATE_H
#define NETWORKCOMMUNICATE_H

#include <QObject>
#include <QTcpServer>
#include <QFile>
#include <QTextStream>
#include "allfilepathindir.h"

class NetworkCommunicate: public QObject
{
    Q_OBJECT
    friend class CommandHandle;
public:
    explicit NetworkCommunicate(QObject *parent = 0);
    ~NetworkCommunicate(void);

signals:

public slots:

private slots:
    void newConnection(void);
    void join(QThread *thread);

private:
    QTcpServer *server;
    QList<QThread *> threadPool;
    AllFilePathInDir* m_direct_oper;
};
#endif // NETWORKCOMMUNICATE_H

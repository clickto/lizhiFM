#ifndef CONFIG_H
#define CONFIG_H

#include <QObject>
#include <QJsonObject>
#include <QVector>

class Config : public QObject
{
    Q_OBJECT
public:
    explicit Config(QObject *parent = nullptr);
    void create_config(const QJsonObject &);
    QJsonObject read_config();
    void create_list(const QVector<QStringList> &);
    QVector<QStringList> read_list();

signals:

public slots:
};

#endif // CONFIG_H
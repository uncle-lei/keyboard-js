
#ifndef JS_H
#define JS_H
#include <QJSEngine>
#include <QtWidgets>
#include <qjsvalue.h>
#include "js_global.h"

class JSSHARED_EXPORT Js : public QMainWindow
{
    Q_OBJECT

public:
    Js(QWidget *parent = 0);
    void inputscript(QString qs);
    QString getscript();
    void processing(QString s);
    QString getVariant(QString s);
private:
    QJSEngine m_jsengine;
    QString s;
signals:
    void mysignal();
};

#endif // JS_H

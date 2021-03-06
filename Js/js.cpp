﻿#include "js.h"


Js::Js(QWidget *parent):QMainWindow (parent)
{
}
void Js::inputscript(QString qs)
{
    this->s=qs;
}

void Js::processing(QString s)
{
    QJSValue q = this->m_jsengine.evaluate(s);
    if(q.isError())
    {
//        QMessageBox::Warning("Information","Really to clear data?",QMessageBox::Yes|QMessageBox::No,NULL);
//        QMessageBox::information(NULL, "Warning", "Something Error", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
        emit mysignal();
    }
}

QString Js::getscript()
{
    return this->s;
}

QString Js::getVariant(QString s)
{
    QJSValue q = this->m_jsengine.evaluate(s);
    if(q.isError())
    {
//        QMessageBox::Warning("Information","Really to clear data?",QMessageBox::Yes|QMessageBox::No,NULL);
//        QMessageBox::information(NULL, "Warning", "Something Error", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
        emit mysignal();
        return "";
    }
    return q.toString();
}

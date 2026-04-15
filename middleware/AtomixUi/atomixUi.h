/**
 * @file atomixUi.h
 * @brief atomixCore内核接口文件
 * @author ChenZR
 */
#ifndef __ATOMIXUI_H
#define __ATOMIXUI_H
/* Includes" "------------------------------------------------------------------*/
#include "colorScheme.h"
#include "sizeScheme.h"
/* Includes< >------------------------------------------------------------------*/
#include <QObject>
#include <QQmlContext>
#include <QQmlApplicationEngine>
/* NameSpace------------------------------------------------------------------*/
namespace AtomixUi
{
class Ui: public QObject{
    Q_OBJECT
public:
    /* DataType Definition------------------------------------------------------------------*/
    /* Variable Declare------------------------------------------------------------------*/
    /* Functions Declare------------------------------------------------------------------*/
    explicit Ui(QQmlApplicationEngine* engine, QObject* parent = nullptr);
    ~Ui(void);
private:
    QQmlApplicationEngine* qmlEngine;
    Color* uiColor;
    Size* uiSize;
protected:
};
}
#endif

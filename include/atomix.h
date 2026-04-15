/**
 * @file atomix.h
 * @brief atomix组件管理类
 * @author ChenZR
 */
#ifndef __ATOMIX_H
#define __ATOMIX_H
/* Includes" "------------------------------------------------------------------*/
#include "atomixUi.h"
/* Includes< >------------------------------------------------------------------*/
#include <QObject>
#include <QQmlContext>
#include <QQmlApplicationEngine>
/* NameSpace------------------------------------------------------------------*/
namespace Atomix
{
class AtomixManager: public QObject{
    Q_OBJECT
public:
    /* DataType Definition------------------------------------------------------------------*/
    /* Variable Declare------------------------------------------------------------------*/
    /* Functions Declare------------------------------------------------------------------*/
    explicit AtomixManager(QQmlApplicationEngine* engine, QObject* parent = nullptr);
    ~AtomixManager(void);
private:
    /// qmlEngine 前端引擎
    QQmlApplicationEngine* qmlEngine;
    /// Color ui颜色
    AtomixUi::Ui* ui;

protected:
};
}
#endif

/**
 * @file atomix.cpp
 * @brief Atomix组件管理类
 * @author ChenZR
 */
/* Includes" "------------------------------------------------------------------*/
#include "atomix.h"
/* Includes< >------------------------------------------------------------------*/
#include <QDebug>
#include <QQmlContext>
/* Namespace------------------------------------------------------------------*/
namespace Atomix
{
///< AtomixManager 构造函数
AtomixManager::AtomixManager(QQmlApplicationEngine* engine, QObject* parent)
{
    //1、前端QML引擎初始化
    qmlEngine = engine;
    //2、ui颜色
    ui = new AtomixUi::Ui(engine,this);
}
///< ~AtomixManager 析构函数
AtomixManager::~AtomixManager()
{
    ;
}
}

/**
 * @file atomixUi.cpp
 * @brief AtomixUi组件接口文件
 * @author ChenZR
 */
/* Includes" "------------------------------------------------------------------*/
#include "atomixUi.h"
/* Includes< >------------------------------------------------------------------*/
#include <QDebug>
#include <QQmlContext>
/* Namespace------------------------------------------------------------------*/
namespace AtomixUi
{
///< Ui 构造函数
Ui::Ui(QQmlApplicationEngine* engine, QObject* parent)
{
    //1、前端QML引擎初始化
    qmlEngine = engine;
    //2、ui颜色
    uiColor = new Color(this);
    qmlEngine->rootContext()->setContextProperty("uiColor", uiColor);
    //3、ui尺寸
    uiSize = new Size(this);
    qmlEngine->rootContext()->setContextProperty("uiSize", uiSize);
}
///< ~AtomixUi 析构函数
Ui::~Ui()
{
    ;
}

}

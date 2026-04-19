/**
 * @file atomixUi.cpp
 * @brief AtomixUi组件接口文件
 * @author ChenZR
 */
/* Includes" "------------------------------------------------------------------*/
#include "atomixUi.h"
#include "uiDataType.h"
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
    //2、ui数据结构
    qmlRegisterUncreatableType<UiDataType>(
        "AtomixUi.DataType",
        1, 0,
        "UiDataType",
        "UiDataType is Ui DataType Class only"
    );
    //2、ui颜色
    uiColor = new Color(this);
    qmlEngine->rootContext()->setContextProperty("uiColor", uiColor);
    //3、ui尺寸
    uiSize = new Size(this);
    qmlEngine->rootContext()->setContextProperty("uiSize", uiSize);
    //4、ui全局
    uiGlobal = new UiGlobal(this);
    qmlEngine->rootContext()->setContextProperty("uiGlobal", uiGlobal);
}
///< ~AtomixUi 析构函数
Ui::~Ui()
{
    ;
}

}


    //2、core数据类型
    qmlRegisterUncreatableType<CoreDataType>(
        "EnigmaCore.DataType",
        1, 0,
        "CoreDataType",
        "CoreDataType is Core DataType Class only"
    );
/**
 * @file coreDataType.h
 * @brief 应用内核数据结构
 * @author ChenZR
 * @date 20260306
 */
#ifndef __COREDATATYPE_H
#define __COREDATATYPE_H
/* Includes" "------------------------------------------------------------------*/
/* Includes< >------------------------------------------------------------------*/
#include <QObject>
/* NameSpace------------------------------------------------------------------*/
namespace Enigma
{
class CoreDataType : public QObject{
    Q_OBJECT
public:
    /* DataType Definition------------------------------------------------------------------*/
    /// AppState 应用状态
    enum AppState
    {
        AppPowerOn,    ///< PowerOn 开机
        AppPowerOff,   ///< PowerOff 关机
        AppFullScreen, ///< FullScreen 全屏模式
        AppWindow,     ///< Window 窗口模式
        AppMinimize,   ///< Minimize 最小化模式
        AppTray,       ///< Tray 最小化托盘模式
        AppAssistant   ///< Assistant 助手模式
    };
    Q_ENUM(AppState)
    /// ViewState 视图状态
    enum ViewState
    {
        ViewNull,       ///< Null 视图正常
        ViewEnter,      ///< Enter 视图进场
        ViewExit,       ///< Exit 视图退出
        ViewDuplicate   ///< Duplicate 视图重复进场
    };
    Q_ENUM(ViewState)
};
}
Q_DECLARE_METATYPE(Enigma::CoreDataType::AppState)
#endif


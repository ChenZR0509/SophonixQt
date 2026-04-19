/**
 * @file uiDataType.h
 * @brief UI数据结构
 * @author ChenZR
 */
#ifndef __UIDATATYPE_H
#define __UIDATATYPE_H
/* Includes" "------------------------------------------------------------------*/
/* Includes< >------------------------------------------------------------------*/
#include <QObject>
/* NameSpace------------------------------------------------------------------*/
namespace AtomixUi
{
class UiDataType : public QObject{
    Q_OBJECT
public:
    /* DataType Definition------------------------------------------------------------------*/
    /// ViewState 视图状态
    enum ViewState
    {
        ViewNormal,     ///< Normal 视图正常
        ViewEnter,      ///< Enter 视图进场
        ViewExit,       ///< Exit 视图退出
        ViewDuplicate   ///< Duplicate 视图重复进场
    };
    Q_ENUM(ViewState)
    /// FocusState 焦点状态
    enum FocusState
    {
        MenuSelect,        ///< MenuSelect 菜单选择模式
        ChildrenInput,     ///< ChildrenInput 子项输入模式
    };
    Q_ENUM(FocusState)
};
}
Q_DECLARE_METATYPE(AtomixUi::UiDataType::FocusState)
#endif


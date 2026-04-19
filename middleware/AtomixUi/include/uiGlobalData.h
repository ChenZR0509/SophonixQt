/**
 * @file uiGlobalData.h
 * @brief ui全局数据
 * @author ChenZR
 * @details
 */
#ifndef __UIGLOBALDATA_H
#define __UIGLOBALDATA_H
/* Includes" "------------------------------------------------------------------*/
#include "uiDataType.h"
/* Includes< >------------------------------------------------------------------*/
#include <QObject>
/* NameSpace------------------------------------------------------------------*/
namespace AtomixUi
{
class UiGlobal : public QObject {
    Q_OBJECT
public:
    /* DataType Definition------------------------------------------------------------------*/
    /* Variable Declare------------------------------------------------------------------*/
    /* Functions Declare------------------------------------------------------------------*/
    explicit UiGlobal(QObject* parent = nullptr);
    ~UiGlobal(void);
private:
    UiDataType::FocusState focusState = UiDataType::MenuSelect;
private:
    Q_PROPERTY(UiDataType::FocusState focusState READ getFocusState WRITE setFocusState NOTIFY focusStateChanged FINAL)
public:
    UiDataType::FocusState getFocusState() const;
    void setFocusState(const UiDataType::FocusState &newFocusState);
signals:
    void focusStateChanged();
protected:
};
}
#endif

/**
 * @file uiGlobalData
 * @brief ui全局数据存储
 * @author ChenZR
 * @details
 */
/* Includes" "------------------------------------------------------------------*/
#include "uiGlobalData.h"
/* Includes< >------------------------------------------------------------------*/
/* Namespace------------------------------------------------------------------*/
namespace AtomixUi
{

UiGlobal::UiGlobal(QObject *parent)
{
    ;
}

UiGlobal::~UiGlobal()
{
    ;
}

UiDataType::FocusState UiGlobal::getFocusState() const
{
    return focusState;
}

void UiGlobal::setFocusState(const UiDataType::FocusState &newFocusState)
{
    if (focusState == newFocusState)
        return;
    focusState = newFocusState;
    emit focusStateChanged();
}

}

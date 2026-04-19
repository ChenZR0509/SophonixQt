/**
 * @file CliIutput
 * @brief CLI输入显示组件
 * @author ChenZR
 * @details
 */
/* Import" "------------------------------------------------------------------*/
import Atomix.Ui.Basic 1.0
import AtomixUi.DataType 1.0
/* Import< >------------------------------------------------------------------*/
import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Basic
/* Root ----------------------------------------------------------------------*/
Rectangle{
  id: root
  /* Property Definition------------------------------------------------------------------*/
  property real fontSize: 18
  /* Property Setting------------------------------------------------------------------*/
  height: 22
  color: uiColor.background
  /* Object Definition------------------------------------------------------------------*/
  UiText{
    id: name
    anchors.left: root.left
    anchors.verticalCenter: root.verticalCenter
    textContent: "ChenZR: "
    textFamily: "Consolas"
    textSize: fontSize
    textColor: "#FFFFFF"
    textObject.horizontalAlignment: Text.AlignHCenter
    textObject.verticalAlignment: Text.AlignTop
  }
  TextInput {
    id: content
    anchors.left: name.right
    anchors.right: root.right
    anchors.verticalCenter: root.verticalCenter
    focus: true
    focusPolicy: Qt.StrongFocus
    activeFocusOnPress: true
    font.family: "Consolas"
    font.pixelSize: fontSize
    color: "#00FFFF"
    verticalAlignment: TextInput.AlignVCenter
    selectByMouse: true
    Keys.onPressed: function(event) {
      if (event.key === Qt.Key_Return || event.key === Qt.Key_Enter){
        if(uiGlobal.focusState !== UiDataType.ChildrenInput){
          return
        }
        root.inputCommand(text)
        text = ""
        event.accepted = true
      }
      else if (event.key === Qt.Key_Escape){
        uiGlobal.focusState = UiDataType.MenuSelect
      }
    }
    Component.onCompleted: {
      Qt.callLater(() => content.forceActiveFocus())
      uiGlobal.focusState = UiDataType.ChildrenInput
    }
  }
  /* Function Definition------------------------------------------------------------------*/  
  /* Signal Definition------------------------------------------------------------------*/
  signal inputCommand(string cmd)
  /* Slots Definition------------------------------------------------------------------*/
  /* Connection Definition------------------------------------------------------------------*/
}

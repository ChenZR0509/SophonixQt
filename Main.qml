/**
 * @file Main.qml
 * @brief 程序UI主接口
 * @author ChenZR
 * @details
 */
/* Import" "------------------------------------------------------------------*/
/* Import< >------------------------------------------------------------------*/
import QtQuick
import Atomix.Ui.Basic 1.0
import Atomix.Ui.Cli 1.0
/* Root ----------------------------------------------------------------------*/
Window {
  id: root
  /* Property Definition------------------------------------------------------------------*/
  /* Property Setting------------------------------------------------------------------*/
  width: uiSize.windowWidth
  height: uiSize.windowHeight
  visible: true
  title: "智子系统"
  color: uiColor.transparent
  flags: Qt.Window | Qt.FramelessWindowHint
  /* Object Definition------------------------------------------------------------------*/
  //1、应用程序的鼠标拖拽移动
  MouseArea {
    anchors.fill: parent
    onPressed: function(mouse) {
      if (mouse.button === Qt.LeftButton) {
        root.startSystemMove()
      }
    }
  }
  //2、窗口加载器
  UiView{
    anchors.fill: parent
    viewContent: windowStyle
    background: Rectangle{
      color: uiColor.transparent
    }
  }
  Component {
    id: windowStyle
    UiWindow {
      anchors.fill: parent
    }
  }
  /* Function Definition------------------------------------------------------------------*/
  /* Signal Definition------------------------------------------------------------------*/
  /* Slots Definition------------------------------------------------------------------*/
  /* Connection Definition------------------------------------------------------------------*/
}

/**
 * @file AtomixCli.qml
 * @brief 终端
 * @author ChenZR
 * @details
 */
/* Import" "------------------------------------------------------------------*/
import Atomix.Ui.Basic 1.0
/* Import< >------------------------------------------------------------------*/
import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Basic
/* Root ----------------------------------------------------------------------*/
Control {
  id: root
  /* Property Definition------------------------------------------------------------------*/
  /* Property Setting------------------------------------------------------------------*/
  background: Rectangle {
    color: uiColor.background
  }
  contentItem: Column {
    id: terminal
    anchors.fill: root
    ListView {
      id: outputView
      clip: false
      interactive: false
      width: terminal.width
      height: contentHeight
      spacing: 8
      model: outputModel
      delegate: Text {
        width: outputView.width
        height: 20
        text: model.text
        color: model.type === "input" ? "#00FFFF" : "#00FF00"
        font.family: "Consolas"
        font.pixelSize: 16
        wrapMode: Text.WrapAnywhere
      }
    }

    TextField {
      id: inputView
      focus: true
      width: terminal.width
      background: Rectangle {
        height: 22
        color: uiColor.background
      }
      font.family: "Consolas"
      color: "#00FFFF"
      font.pixelSize: 16
      onAccepted: {
        outputModel.append({
        type: "input",
        text: "> " + text
      })
        root.handleCommand(text)
        text = ""
        outputView.positionViewAtEnd()
      }
    }
  }
  /* Object Definition------------------------------------------------------------------*/
  ListModel {
    id: outputModel
  }
  /* Function Definition------------------------------------------------------------------*/
  function handleCommand(cmd) {
    console.info("hello+" + cmd)
    if (cmd === "help") {
      outputModel.append({
        type: "output",
        text: "可用命令: help, clear"
      })
    }
    else if (cmd === "clear") {
      outputModel.clear()
    }
    else {
      outputModel.append({
        type: "output",
        text: "未知命令: " + cmd
      })
    }
    outputView.positionViewAtEnd()
  }
  /* Signal Definition------------------------------------------------------------------*/
  /* Slots Definition------------------------------------------------------------------*/
  /* Connection Definition------------------------------------------------------------------*/
}

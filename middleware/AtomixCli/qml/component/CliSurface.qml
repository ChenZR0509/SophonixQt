/**
 * @file SurfaceBoard
 * @brief 终端内容显示
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
FocusScope {
  id: root
  /* Property Definition------------------------------------------------------------------*/
  property bool inputMode: true
  /* Property Setting------------------------------------------------------------------*/
  visible: false
  focus: true
  /* Object Definition------------------------------------------------------------------*/
  Column {
    anchors.fill: parent
    spacing: 4
    CliOutput {
      id: cliOutput
      width: root.width
    }
    CliInput {
      id: cliInput
      width: root.width
      onInputCommand: cmd => {
        cliOutput.addCommand("ChenZR",cmd,true)
      }
    }
  }
  /* Function Definition------------------------------------------------------------------*/
  function enter(){
    root.visible = true
  }
  /* Signal Definition------------------------------------------------------------------*/
  /* Slots Definition------------------------------------------------------------------*/
  /* Connection Definition------------------------------------------------------------------*/
}

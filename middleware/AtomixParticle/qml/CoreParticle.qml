/**
 * @file coreParticle
 * @brief 内核粒子效果
 * @author ChenZR
 * @details
 */
/* Import" "------------------------------------------------------------------*/
/* Import< >------------------------------------------------------------------*/
import QtQuick
import QtQuick.Controls
import QtQuick3D
import QtQuick3D.Helpers
import QtQuick3D.Particles3D
/* Root ----------------------------------------------------------------------*/
Node{
  id: root
  /* Property Definition------------------------------------------------------------------*/
  /* Property Setting------------------------------------------------------------------*/
  /* Object Definition------------------------------------------------------------------*/
  Node {
    position: Qt.vector3d(0, 0, 0)
    scale: Qt.vector3d(5,5,5)
    Model {
        source: "qrc:/mesh/model/core.mesh"
        materials: glassMaterial
    }
    Model {
        source: "qrc:/mesh/model/core.mesh"
        scale: Qt.vector3d(0.92, 0.92, 0.92)
        materials: glowMaterial
    }
  }
  PrincipledMaterial {
      id: glassMaterial

      baseColor: "#18FF9A2E"   // 透明橙
      metalness: 0.0
      roughness: 0.15

      emissiveFactor: Qt.vector3d(0.15, 0.05, 0.0)

      transmissionFactor: 0.85
      thicknessFactor: 0.1
      indexOfRefraction: 1.1

      alphaMode: PrincipledMaterial.Blend
      cullMode: Material.NoCulling
  }
  PrincipledMaterial {
      id: glowMaterial

      baseColor: "#120500"
      metalness: 0.0
      roughness: 0.25

      emissiveFactor: Qt.vector3d(4.0, 1.2, 0.1)
  }
  /* Function Definition------------------------------------------------------------------*/
  /* Signal Definition------------------------------------------------------------------*/
  /* Slots Definition------------------------------------------------------------------*/
  /* Connection Definition------------------------------------------------------------------*/
}

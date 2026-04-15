/**
 * @file Particle.qml
 * @brief 粒子
 * @author ChenZR
 * @details
 */
/* Import" "------------------------------------------------------------------*/
import Atomix.Ui.Basic 1.0
/* Import< >------------------------------------------------------------------*/
import QtQuick
import QtQuick.Controls
import QtQuick3D
import QtQuick3D.Helpers
import QtQuick3D.Particles3D
/* Root ----------------------------------------------------------------------*/
View3D {
  id: root
  /* Property Definition------------------------------------------------------------------*/
  /* Property Setting------------------------------------------------------------------*/
  environment: sceneEnvironment
  /* Object Definition------------------------------------------------------------------*/
  SceneEnvironment {
    id: sceneEnvironment
    antialiasingQuality: SceneEnvironment.High
    antialiasingMode: SceneEnvironment.MSAA
  }
  PerspectiveCamera {
    id: camera
    x: 0
    y: 0
    z: 80
  }
  ParticleSystem3D {
    id: particleSystem
    position: Qt.vector3d(0, 0, 0)
    running: true
  }
  ParticleEmitter3D {
    id: particleEmitter
    enabled: true
    emitRate: 1000
    system: particleSystem
    lifeSpan: 10000
    lifeSpanVariation: 400
    particle: spriteParticle
    particleRotation: Qt.vector3d(0, 0, 0)
    particleRotationVariation: Qt.vector3d(0, 0, 0)
    particleRotationVelocity: Qt.vector3d(0, 0, 0)
    particleRotationVelocityVariation: Qt.vector3d(0, 0, 0)
    particleScale: 1.0
    particleScaleVariation: 0.1
    particleEndScale: 0.1
    particleEndScaleVariation: 0.1
    shape: emitterShape
    ParticleShape3D {
      id: emitterShape
      extents: Qt.vector3d(30, 30, 30)
      fill: false
      type: ParticleShape3D.Sphere
    }
    velocity: VectorDirection3D {
      direction: Qt.vector3d(0, 0, 0)
      directionVariation: Qt.vector3d(0, 0, 0)
    }
  }
  SpriteParticle3D {
    id: spriteParticle
    color: "#FFFFFF"
    colorVariation: Qt.vector4d(0.1, 0.1, 0.1,5)
    billboard: true
    fadeInDuration: 500
    fadeOutDuration: 500
    fadeInEffect: Particle3D.FadeOpacity
    blendMode: SpriteParticle3D.Screen
    particleScale: 1
    maxAmount: 10000
    sprite: Texture {
      source: "qrc:/png/image/star.png"
    }
  }
  /* Function Definition------------------------------------------------------------------*/
  /* Signal Definition------------------------------------------------------------------*/
  /* Slots Definition------------------------------------------------------------------*/
  /* Connection Definition------------------------------------------------------------------*/
}

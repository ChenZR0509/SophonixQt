#[[
 @ ProjectName: AtomixParticle
 @ Author: ChenZR
 @ Brief: Atomix组件(粒子组件)
 @ Date: 2026年4月10日
 ]]
#------------------------------------------------------------------------------#
#工程配置
cmake_minimum_required(VERSION 3.16)
project(AtomixParticle LANGUAGES CXX)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(QT_QML_OUTPUT_DIRECTORY  ${CMAKE_BINARY_DIR})
set(CMAKE_PREFIX_PATH "E:/SoftwareWork/Qt/software/6.8.3/mingw_64")
#------------------------------------------------------------------------------#
#工程组织
#1、查询功能包
find_package(Qt6 REQUIRED COMPONENTS
    Quick
    Quick3D
    Qml
)
#2、添加CPP源码
add_library(AtomixParticle STATIC
  atomixParticle.cpp
  atomixParticle.h)
#3、添加UI源码
qt_add_qml_module(AtomixUiParticle
    URI Atomix.Ui.Particle
    VERSION 1.0
    QML_FILES
    qml/AtomixParticle.qml
    RESOURCES resource/resParticle.qrc
)
#4、链接相关静态库
target_link_libraries(AtomixParticle
  PRIVATE Qt6::Quick
  PRIVATE Qt6::Qml)
target_link_libraries(AtomixUiParticle
  PRIVATE Qt6::Quick
  PRIVATE Qt6::Quick3D
  PRIVATE Qt6::Qml)
#5、配置头文件目录
target_include_directories(AtomixParticle PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/include)
#------------------------------------------------------------------------------#
#编译器配置
target_compile_definitions(AtomixParticle PRIVATE ENIGMAPARTICLE_LIBRARY)

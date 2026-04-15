#[[
 @ ProjectName: Atomix
 @ Author: ChenZR
 @ Brief: Atomix组件(UI组件)
 @ Date: 2026年4月7日
 ]]
#------------------------------------------------------------------------------#
#工程配置
cmake_minimum_required(VERSION 3.16)
project(AtomixUi LANGUAGES CXX)
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
)
#2、添加CPP源码
add_library(AtomixUi STATIC
      atomixUi.cpp
      atomixUi.h
      src/colorScheme.cpp
      src/sizeScheme.cpp
      include/colorScheme.h
      include/sizeScheme.h)
#3、添加UI源码
qt_add_qml_module(AtomixUiBasic
    URI Atomix.Ui.Basic
    VERSION 1.0
    QML_FILES
    qml/prototype/UiView.qml
    qml/prototype/UiButton.qml
    qml/prototype/UiText.qml
    qml/page/UiWindow.qml
    RESOURCES resource/resUi.qrc
)
#4、链接相关静态库
target_link_libraries(AtomixUi
  PRIVATE Qt6::Quick)
#5、配置头文件目录
target_include_directories(AtomixUi PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/include)
#------------------------------------------------------------------------------#
#编译器配置
target_compile_definitions(AtomixUi PRIVATE ENIGMAUI_LIBRARY)

#[[
 @ ProjectName: Sophonix
 @ Author: ChenZR
 @ Brief: 智子系统
 @ Date: 2026年4月7日
 ]]
#------------------------------------------------------------------------------#
#工程配置
cmake_minimum_required(VERSION 3.16)
project(Sophonix VERSION 0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_PREFIX_PATH "E:/SoftwareWork/Qt/software/6.8.3/mingw_64")
#------------------------------------------------------------------------------#
#工程组织
#1、查询功能包
find_package(Qt6 REQUIRED COMPONENTS
    Quick
)
qt_standard_project_setup(REQUIRES 6.8)
#2、添加可执行文件
qt_add_executable(appSophonix
    main.cpp
    include/atomix.h
    src/atomix.cpp
)
#3、添加UI描述文件
qt_add_qml_module(appSophonix
    URI Sophonix
    VERSION 1.0
    QML_FILES
        Main.qml
    RESOURCES resource/resSophonix.qrc
)
#4、应用程序图标配置
if(WIN32)
    set(APP_ICON_RESOURCE_WINDOWS "${CMAKE_CURRENT_SOURCE_DIR}/resource/image/logo.rc")
    target_sources(appSophonix PRIVATE ${APP_ICON_RESOURCE_WINDOWS})
endif()
#5、链接功能包
target_link_libraries(appSophonix
    PRIVATE Qt6::Quick
)
#6、添加自定义库
add_subdirectory(middleware/AtomixUi)
add_subdirectory(middleware/AtomixCli)
add_subdirectory(middleware/AtomixParticle)

target_link_libraries(appSophonix
  PRIVATE AtomixUi
  PRIVATE AtomixCli
  PRIVATE AtomixParticle)
target_include_directories(appSophonix
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/middleware/AtomixUi
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/middleware/AtomixCli
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/middleware/AtomixParticle)
#7、添加头文件路径
target_include_directories(appSophonix
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
#------------------------------------------------------------------------------#
#编译器配置
set_target_properties(appSophonix PROPERTIES
#   MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appSophonix
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)
include(GNUInstallDirs)
install(TARGETS appSophonix
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)




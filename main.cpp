/**
 * @file main.cpp
 * @brief 应用程序后端入口
 * @author ChenZR
 */
/* Includes" "------------------------------------------------------------------*/
#include "atomix.h"
/* Includes< >------------------------------------------------------------------*/
#include <QGuiApplication>
#include <QQmlApplicationEngine>
/* Namespace------------------------------------------------------------------*/
///< main 主函数
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;
    Atomix::AtomixManager middleware(&engine,&app);
    engine.rootContext()->setContextProperty("enigma", &middleware);
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("Sophonix", "Main");
    return app.exec();
}

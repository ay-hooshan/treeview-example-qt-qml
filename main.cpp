#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <QQmlContext>

#include "mytreemodel.h"


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    myTreeModel myModel;

    engine.rootContext()->setContextProperty("mymodel", &myModel);

    QObject::connect(&engine, &QQmlApplicationEngine::objectCreationFailed,
        &app, []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("tut09", "Main");

    return app.exec();
}

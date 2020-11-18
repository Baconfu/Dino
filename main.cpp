#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <avatar.h>
#include <paintavatar.h>

int main(int argc, char *argv[])
{

    int windowWidth = 640;
    int windowHeight = 480;

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    qmlRegisterType<PaintAvatar>("Paint",1,0,"PaintAvatar");

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}

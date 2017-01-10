#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQuick>
#include <QQuickStyle>
#include <QQmlContext>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlEngine>
#include <QQmlContext>
#include <QScopedPointer>
#include "app.h"
#include "album.h"
#include "card.h"
#include "albumsmanager.h"
#include "cardsmanager.h"
#include "abstractcardmodel.h"
#include "albumcardsmodel.h"


int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    QQuickStyle::setStyle("Material");

    // Core classes
    qmlRegisterType<App>("PokeApp.Classes.Core", 1, 0, "App");

    App mainApp;
    QQmlApplicationEngine engine;

    // Context properties
    QQmlContext *ctxt1 = engine.rootContext();
    ctxt1->setContextProperty("mainApp", &mainApp);
    QQmlContext *ctxt2 = engine.rootContext();
    ctxt2->setContextProperty("MyModel", mainApp.getAlbumCardsModelPointer());
    QQmlContext *ctxt3 = engine.rootContext();
    ctxt3->setContextProperty("MyAlbumsModel", mainApp.getAlbumsModelPointer());

    engine.load(QUrl(QLatin1String("qrc:/main.qml")));

    return app.exec();
}

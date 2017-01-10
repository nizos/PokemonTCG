import QtQuick 2.7
import QtQuick.Layouts 1.0
import QtQuick.Controls 2.0
import PokeApp.Classes.Core 1.0

Item {
    id: albumsPageItem

    // Page
    Rectangle {
        id: albumsPage
        anchors.fill: parent
        color: '#ecf0f1'

        SubHeaderAlbums {}

//        Image {
//            source: "https://s3.amazonaws.com/pokemontcg/xy7/3.png"
//            height: 342
//            width: 245
//            visible: true
//        }

        // Cards GridView
        GridView{
            header:  Rectangle { height: 30 }
            footer: Rectangle {height: 80}
            anchors.top: parent.top
            anchors.topMargin: 70
            anchors.horizontalCenter: parent.horizontalCenter
            width: Math.min(MyAlbumsModel.rowCount(), Math.floor(parent.width/cellWidth))*cellWidth
            height: parent.height
            cellHeight: 420
            cellWidth: 280
            model: MyAlbumsModel
            clip: true
            delegate: AlbumsView {}
            z: 0
        }
    }
}

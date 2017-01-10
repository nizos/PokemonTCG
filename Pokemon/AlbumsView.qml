import QtQuick 2.0
import PokeApp.Classes.Core 1.0

// Albums Deligate
Item {
    id: albumsDeligate
    Rectangle {
        id: album
        property int totalCards: model.nrOfCards
        property int stackedCards: model.nrOfCards
        height: 400
        width: 300
        color: 'Transparent'
        property string cardOne: model.nrOfCards>0 ?  model.cardOneInAlbum : 0
        property string cardTwo: model.nrOfCards>1 ?  model.cardTwoInAlbum : 0
        property string cardThree: model.nrOfCards>2 ?  model.cardThreeInAlbum : 0
        property string cardFour: model.nrOfCards>3 ?  model.cardFourInAlbum : 0

         Column {
            anchors.fill: parent
            width: 300
            Rectangle {
                id: thumbs
                height: 320
                width: 300
                color: 'Transparent'
                Image {
                    property double randomAngle: Math.random() * (2 * 16 + 1) -16
                    source: album.cardOne
                    width: 200
                    height: 279
                    antialiasing: true
                    rotation: randomAngle
                    anchors.centerIn: parent
                    Component.onCompleted: print("Showing: " + album.cardOne)
                }
                Image {
                    property double randomAngle: Math.random() * (2 * 16 + 1) -16
                    source: album.cardTwo
                    width: 200
                    height: 279
                    antialiasing: true
                    rotation: randomAngle
                    anchors.centerIn: parent
                    Component.onCompleted: print("Showing: " + album.cardTwo)
                }
                Image {
                    property double randomAngle: Math.random() * (2 * 16 + 1) -16
                    source: album.cardThree
                    width: 200
                    height: 279
                    antialiasing: true
                    rotation: randomAngle
                    anchors.centerIn: parent
                    Component.onCompleted: print("Showing: " + album.cardThree)
                }
                Image {
                    property double randomAngle: Math.random() * (2 * 16 + 1) -16
                    source: album.cardFour
                    width: 200
                    height: 279
                    antialiasing: true
                    rotation: randomAngle
                    anchors.centerIn: parent
                    Component.onCompleted: print("Showing: " + album.cardFour)
                }
                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        print("showAlbum(" + model.albumId + ")");
                        mainApp.getAlbumCardsModelPointer().showAlbum(model.albumId);
                        swipeView.currentIndex = 3;
                        appWindow.currentAlbum = model.albumId;
                    }
                }
            }
            Rectangle {
                id: info
                color: "Transparent"
                height: 100
                width: 300
                Rectangle {
                    anchors.centerIn: parent
                    color: "#16a085"
                    width: 180
                    height: 60
                    Column {
                        anchors.fill: parent
                        anchors.topMargin: 10
                        Text {
                            text: model.albumName
                            font.pointSize: 12
                            anchors.horizontalCenter: parent.horizontalCenter
                        }
                        Text {
                            text: "Cards in album: " + model.nrOfCards
                            font.pointSize: 9
                            anchors.horizontalCenter: parent.horizontalCenter
                        }
                    }
                    MouseArea {
                        anchors.fill: parent
                        onClicked: {
                            print("showAlbum(" + model.albumId + ")");
                            mainApp.getAlbumCardsModelPointer().showAlbum(model.albumId);
                            swipeView.currentIndex = 3;
                            appWindow.currentAlbum = model.albumId;
                        }
                    }
                }


            }


        }

    }

}

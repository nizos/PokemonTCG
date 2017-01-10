import QtQuick 2.0
import PokeApp.Classes.Core 1.0
import "./"

// Cards Deligate
Rectangle {
    id: cardsView
    signal cardClicked(string imageURL);

    Image {
        id: cardPic
        source: model.imageURL
        width: 245
        height: 342
        Component.onCompleted: print("Showing Card: " + model.cardID + " with image url: " + model.imageURL)

//        MouseArea {
//            id: cardPicSignal
//            anchors.fill: parent
//            onClicked: {
//                cardsView.cardClicked(model.imageURL)
//                print("Signal sent! Card clicked: " + model.imageURL)
//            }
//        }
    }
//    Connections {
//        id: cardsViewConnection
//        target: cardPic
////        on {

////            cardsPageItem.fullScreenCard = cardPic.finalURL
////            fullScreenCardImage.visible = true
////            fullScreenCardImage.z = 2
////        }
//    }



}

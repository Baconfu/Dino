import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.0

ApplicationWindow {
    visible: true
    width: 640
    height: 480

    signal startGame()
    signal quit()

    title: qsTr("Dino game")

    onClosing: {
        quit()
    }

    Item {
        anchors.fill: parent
        id: titleScreen

        Text {
            width: 100
            height: 40
            x: parent.width/2 - width/2
            y: parent.height/2 - height/2
            font.pointSize: 36
            text: "Dino"
        }
        Button {

            width: 100

            x: parent.width/2 - width/2
            y: parent.height/2 - height/2 + 60
            text: "start game"
            onClicked: {
                startGame()
                titleScreen.visible = false
            }
        }
    }



}

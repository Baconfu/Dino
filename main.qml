import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.0

ApplicationWindow {
    visible: true
    width: 640
    height: 480


    title: qsTr("Dino game")

    Text {
        text: "Test text"
        x: 100
        y: 100
        color: "red"
    }
    Rectangle {
        color: "grey"
        x: 0
        y: 360
        width: 640
        height: 2

    }



}

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
        x: 100
        y: 200
        width: 100
        height: 100
        Text {
            text: "this is a rectangle"
            x: 50
            y:50
        }
    }


}

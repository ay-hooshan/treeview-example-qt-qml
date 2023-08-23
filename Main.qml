import QtQuick
import QtQuick.Window
import QtQuick.Controls 2.12
import Qt.labs.qmlmodels 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    TreeView {
        anchors.fill: parent
        model: mymodel
        delegate: TreeViewDelegate {
            leftMargin: 0
            indentation: 0
            contentItem: Text {
                x: 0
                id: contentText
                text: model.display
                font.family: "cmu concrete"
                font.pixelSize: 30
            }

            indicator: Text {
                id: indcitText
                text: qsTr(">")
                font.family: "cmu concrete"
//                x: depth * 20
                font.pixelSize: 20
                anchors.verticalCenter: parent.verticalCenter
            }
            background: Rectangle {
                color: "lightgreen"
            }
        }
    }
}

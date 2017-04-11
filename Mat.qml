import QtQuick 2.0


Item {
    id:matrice
    property int ligne: 8
    property int colonne: 8
    /*property alias ind: */
    width: 650
    height: 650
    anchors.fill:parent

    Grid {
        id:grid
        rows: ligne; columns: colonne
        width:matrice.width; height:matrice.height
        anchors.fill: parent

        Repeater {

            id:rep
            model:parent.rows*parent.columns
            Rectangle{
                id:index
                width: root.width/grid.rows; height:root.height/grid.columns
                color:"white"
                border.color:"black"
                border.width: 3
                radius: 5
            }//Rectangle



        }//Repeater



    }//Grid

}

import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 1.4



ApplicationWindow{
    visible: true
    id: root
    maximumHeight: 650
    maximumWidth:650
    minimumWidth:650
    minimumHeight:650
    width: 650
    height: 650


    Mat{
        id:mygrid
        parent:root

    }


    Lego {
        id:cool
        w:mygrid.width
        h:mygrid.height
    }



}//Window

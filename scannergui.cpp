#include "scannergui.h"
#include "ui_scannergui.h"
#include <QDebug>

scannergui::scannergui(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::scannergui)
{
    m_scan = new.NetScanner;
    ui->setupUi(this);
}

scannergui::~scannergui()
{
    delete ui;
}


void scannergui::on_startScanner_clicked()
{
       QString host = portEntry->text();
       int port ;
       qDebug() << portEntry->text() << "  " << hostnameEntry->text;
       m_scan -> doScan << portEntry -> text() << "  " << hostnameEntry -> text();
}

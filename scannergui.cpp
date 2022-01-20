#include "scannergui.h"
#include "ui_scannergui.h"

scannergui::scannergui(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::scannergui)
{
    ui->setupUi(this);
}

scannergui::~scannergui()
{
    delete ui;
}


#ifndef SCANNERGUI_H
#define SCANNERGUI_H

#include <QMainWindow>

#include "ui_scannergui.h"
#include "netscanner.h"

QT_BEGIN_NAMESPACE
namespace Ui { class scannergui; }
QT_END_NAMESPACE

class scannergui : public QMainWindow
{
    Q_OBJECT

public:
    scannergui(QWidget *parent = nullptr);
    ~scannergui();

private slots:
    void on_startScanner_clicked();

private:
    NetScanner* m_scan;
    Ui::scannergui *ui;
};
#endif // SCANNERGUI_H

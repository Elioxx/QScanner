#ifndef SCANNERGUI_H
#define SCANNERGUI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class scannergui; }
QT_END_NAMESPACE

class scannergui : public QMainWindow
{
    Q_OBJECT

public:
    scannergui(QWidget *parent = nullptr);
    ~scannergui();

private:
    Ui::scannergui *ui;
};
#endif // SCANNERGUI_H

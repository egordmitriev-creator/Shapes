#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_calculatePushButton_clicked();

    void on_changeFigurePushButton_clicked();

    void on_ClearAction_triggered();

private:
    Ui::MainWindow *ui;

    //QByteArray initialState;
};
#endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <deque>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    using Queue = std::deque<QString>;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Queue queue;

private slots:
    void on_loadButton_clicked();
    void on_saveButton_clicked();
};

#endif // MAINWINDOW_H

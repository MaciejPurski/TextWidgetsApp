#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loadButton_clicked()
{
    if (queue.empty())
    {
        ui->outputField->clear();
        return;
    }

    ui->outputField->setText(queue.front());
    queue.pop_front();
}

void MainWindow::on_saveButton_clicked()
{
    QString line = ui->inputField->text();
    if (line.isEmpty())
        return;
    ui->inputField->clear();

    queue.push_back(line);
}

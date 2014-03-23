#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QTextEdit>
#include <QLabel>
#include <QLCDNumber>
#include <iostream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void handleButton();

private:
    Ui::MainWindow *ui;
    QPushButton *m_button;
    QLabel *m_label;
    QLCDNumber *m_lcdNum;
};

#endif // MAINWINDOW_H

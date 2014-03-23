#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_button = ui->pushButton;
    m_button->setText("Press me!");
    m_label = ui->label;
    m_lcdNum = ui->lcdNumber;
    connect(m_button, SIGNAL(released()), this, SLOT(handleButton()));
}

void MainWindow::handleButton()
{
    m_label->setText("You pressed a button!");
    int temp = m_lcdNum->intValue();
    temp = temp + 1;
    m_lcdNum->display(temp);
}

MainWindow::~MainWindow()
{
    delete ui;
}

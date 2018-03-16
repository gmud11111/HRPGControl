#include "stdafx.h"
#include "mainWindow.h"


mainWindow::mainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

mainWindow::~mainWindow()
{

}

void mainWindow::on_pushButton_2_clicked()
{
	ui->lineEdit_exePath->setText(QString::fromLocal8Bit("C:/game/test/other/Village of Nightmare/Game.exe"));
	QString s = ui->lineEdit_exePath->text();
	
	rpg_ui = new rpg_control(this);
	rpg_ui->setExePath(s);

	
    rpg_ui->show();

}

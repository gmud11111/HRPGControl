#ifndef mainWindow_H
#define mainWindow_H


#include <QtWidgets/QMainWindow>
#include "ui_mainWindow.h"
#include "rpg_control.h"

class mainWindow : public QMainWindow
{
	Q_OBJECT

public:
	mainWindow(QWidget *parent = 0);
	~mainWindow();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    rpg_control *rpg_ui;
};

#endif // RPG_CONTROL_H

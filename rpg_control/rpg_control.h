#ifndef RPG_CONTROL_H
#define RPG_CONTROL_H


#include <QtWidgets/QMainWindow>
#include "ui_rpg_control.h"
#include <QtCore\qstring.h>

class rpg_control : public QMainWindow
{
	Q_OBJECT

public:
	rpg_control(QWidget *parent = 0);
	~rpg_control();
	void setExePath(QString path);
private:
	Ui::rpg_controlClass ui;
	QString exePath;
	void windowInline(QString path,int delay);
	void windowInline(QString path,int delay);
};

#endif // RPG_CONTROL_H

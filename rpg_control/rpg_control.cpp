#include "stdafx.h"
#include "windows.h"
#include "rpg_control.h"

rpg_control::rpg_control(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//创建进程，龙头rpg必须创建进程，否则会内嵌到一个静帧
	QString cmd="C:/game/test/other/Village of Nightmare/Game.exe";
	//QString cmd="C:/Windows/system32/calc.exe";
	STARTUPINFO si={sizeof(si)};
	PROCESS_INFORMATION pi;
	si.dwFlags=STARTF_USESHOWWINDOW;
	si.wShowWindow=true;
	
	bool bRet=CreateProcess(
		NULL,
		(LPWSTR)exePath.toStdWString().c_str(),
		NULL,
		NULL,
		FALSE,
		CREATE_NEW_CONSOLE,
		NULL,
		NULL,&si,&pi);
	
	//如果是加载的很慢的rpg，把这个值调高点，不然只能内嵌一个静帧
	Sleep(500);

	//查找句柄或是直接写句柄
	WId wid = (WId)FindWindow(L"RGSS Player",NULL);
	
	//使用Chrome那一套只能手动输入句柄
	//WId wid = 0x00310E48;

	QWindow *m_window;
	m_window = QWindow::fromWinId(wid);
	//m_window->setFlags(m_window->flags() | Qt::CustomizeWindowHint | Qt::WindowTitleHint); //

	QWidget *m_widget;
	m_widget = QWidget::createWindowContainer(m_window,this->ui.centralWidget);
	m_widget->setMinimumSize(1200,700);
}

rpg_control::~rpg_control()
{

}

void rpg_control::setExePath(QString path)
{
	exePath = path;
}
#include "stdafx.h"
#include "windows.h"
#include "rpg_control.h"

rpg_control::rpg_control(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//�������̣���ͷrpg���봴�����̣��������Ƕ��һ����֡
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
	
	//����Ǽ��صĺ�����rpg�������ֵ���ߵ㣬��Ȼֻ����Ƕһ����֡
	Sleep(500);

	//���Ҿ������ֱ��д���
	WId wid = (WId)FindWindow(L"RGSS Player",NULL);
	
	//ʹ��Chrome��һ��ֻ���ֶ�������
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
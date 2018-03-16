/********************************************************************************
** Form generated from reading UI file 'rpg_control.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RPG_CONTROL_H
#define UI_RPG_CONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rpg_controlClass
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *rpg_controlClass)
    {
        if (rpg_controlClass->objectName().isEmpty())
            rpg_controlClass->setObjectName(QStringLiteral("rpg_controlClass"));
        rpg_controlClass->resize(890, 629);
        centralWidget = new QWidget(rpg_controlClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 9, 871, 571));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        rpg_controlClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(rpg_controlClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 890, 23));
        rpg_controlClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(rpg_controlClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        rpg_controlClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(rpg_controlClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        rpg_controlClass->setStatusBar(statusBar);

        retranslateUi(rpg_controlClass);

        QMetaObject::connectSlotsByName(rpg_controlClass);
    } // setupUi

    void retranslateUi(QMainWindow *rpg_controlClass)
    {
        rpg_controlClass->setWindowTitle(QApplication::translate("rpg_controlClass", "rpg_control", 0));
    } // retranslateUi

};

namespace Ui {
    class rpg_controlClass: public Ui_rpg_controlClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RPG_CONTROL_H

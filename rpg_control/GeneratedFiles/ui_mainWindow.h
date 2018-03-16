/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_rgssPlayer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_exePath;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *spinBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QWidget *tab_other;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(404, 231);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab_rgssPlayer = new QWidget();
        tab_rgssPlayer->setObjectName(QStringLiteral("tab_rgssPlayer"));
        verticalLayout_2 = new QVBoxLayout(tab_rgssPlayer);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit_exePath = new QLineEdit(tab_rgssPlayer);
        lineEdit_exePath->setObjectName(QStringLiteral("lineEdit_exePath"));

        horizontalLayout->addWidget(lineEdit_exePath);

        pushButton = new QPushButton(tab_rgssPlayer);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(tab_rgssPlayer);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        spinBox = new QSpinBox(tab_rgssPlayer);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout_2->addWidget(spinBox);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(tab_rgssPlayer);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_4->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalLayout_2->setStretch(2, 1);
        tabWidget->addTab(tab_rgssPlayer, QString());
        tab_other = new QWidget();
        tab_other->setObjectName(QStringLiteral("tab_other"));
        tab_other->setEnabled(true);
        horizontalLayout_10 = new QHBoxLayout(tab_other);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 0, -1, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(tab_other);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        lineEdit_3 = new QLineEdit(tab_other);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_5->addWidget(lineEdit_3);


        verticalLayout_4->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_3);

        pushButton_5 = new QPushButton(tab_other);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_11->addWidget(pushButton_5);


        verticalLayout_4->addLayout(horizontalLayout_11);


        horizontalLayout_10->addLayout(verticalLayout_4);

        tabWidget->addTab(tab_other, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 404, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_2, SIGNAL(clicked()), lineEdit_exePath, SLOT(clear()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251exe\350\267\257\345\276\204", 0));
        label->setText(QApplication::translate("MainWindow", "\345\273\266\346\227\266(\346\257\253\347\247\222)", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250\347\250\213\345\272\217", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_rgssPlayer), QApplication::translate("MainWindow", "\351\276\231\345\244\264RPG", 0));
        label_3->setText(QApplication::translate("MainWindow", "\347\252\227\345\217\243\345\217\245\346\237\204\357\274\232", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250\347\252\227\345\217\243", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_other), QApplication::translate("MainWindow", "\345\205\266\344\273\226\347\261\273\345\236\213\347\252\227\345\217\243", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

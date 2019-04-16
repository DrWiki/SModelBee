/********************************************************************************
** Form generated from reading UI file 'SModelBee.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMODELBEE_H
#define UI_SMODELBEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <MyOldOpenGLWidget.h>

QT_BEGIN_NAMESPACE

class Ui_SModelBee
{
public:
    QAction *Ac00About;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *Pb00OpenStl;
    QWidget *tab_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *Pb00Up;
    QPushButton *Pb00Left;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton;
    QPushButton *Pb00Right;
    QPushButton *Pb00Down;
    MyOldOpenGLWidget *QOGW00mian;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SModelBee)
    {
        if (SModelBee->objectName().isEmpty())
            SModelBee->setObjectName(QStringLiteral("SModelBee"));
        SModelBee->resize(1197, 807);
        Ac00About = new QAction(SModelBee);
        Ac00About->setObjectName(QStringLiteral("Ac00About"));
        centralWidget = new QWidget(SModelBee);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(0, 150));
        tabWidget->setMaximumSize(QSize(16777215, 150));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        Pb00OpenStl = new QPushButton(tab);
        Pb00OpenStl->setObjectName(QStringLiteral("Pb00OpenStl"));
        Pb00OpenStl->setGeometry(QRect(10, 20, 93, 28));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayoutWidget = new QWidget(tab_2);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 0, 295, 111));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Pb00Up = new QPushButton(gridLayoutWidget);
        Pb00Up->setObjectName(QStringLiteral("Pb00Up"));

        gridLayout->addWidget(Pb00Up, 0, 1, 1, 1);

        Pb00Left = new QPushButton(gridLayoutWidget);
        Pb00Left->setObjectName(QStringLiteral("Pb00Left"));

        gridLayout->addWidget(Pb00Left, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        Pb00Right = new QPushButton(gridLayoutWidget);
        Pb00Right->setObjectName(QStringLiteral("Pb00Right"));

        gridLayout->addWidget(Pb00Right, 1, 2, 1, 1);

        Pb00Down = new QPushButton(gridLayoutWidget);
        Pb00Down->setObjectName(QStringLiteral("Pb00Down"));

        gridLayout->addWidget(Pb00Down, 2, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        QOGW00mian = new MyOldOpenGLWidget(centralWidget);
        QOGW00mian->setObjectName(QStringLiteral("QOGW00mian"));
        QOGW00mian->setMinimumSize(QSize(0, 200));
        QOGW00mian->setMaximumSize(QSize(16777215, 10000));

        verticalLayout->addWidget(QOGW00mian);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setMinimumSize(QSize(0, 100));
        textEdit->setMaximumSize(QSize(16777215, 100));

        verticalLayout->addWidget(textEdit);

        SModelBee->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SModelBee);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1197, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        SModelBee->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SModelBee);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SModelBee->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SModelBee);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SModelBee->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(Ac00About);

        retranslateUi(SModelBee);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SModelBee);
    } // setupUi

    void retranslateUi(QMainWindow *SModelBee)
    {
        SModelBee->setWindowTitle(QApplication::translate("SModelBee", "SModelBee", nullptr));
        Ac00About->setText(QApplication::translate("SModelBee", "\345\205\263\344\272\216", nullptr));
#ifndef QT_NO_SHORTCUT
        Ac00About->setShortcut(QApplication::translate("SModelBee", "Ctrl+B", nullptr));
#endif // QT_NO_SHORTCUT
        Pb00OpenStl->setText(QApplication::translate("SModelBee", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SModelBee", "File", nullptr));
        Pb00Up->setText(QApplication::translate("SModelBee", "\344\270\212", nullptr));
        Pb00Left->setText(QApplication::translate("SModelBee", "\345\267\246", nullptr));
        pushButton->setText(QApplication::translate("SModelBee", "PushButton", nullptr));
        Pb00Right->setText(QApplication::translate("SModelBee", "\345\217\263", nullptr));
        Pb00Down->setText(QApplication::translate("SModelBee", "\344\270\213", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SModelBee", "Debug", nullptr));
        menu->setTitle(QApplication::translate("SModelBee", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SModelBee: public Ui_SModelBee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMODELBEE_H

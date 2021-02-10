/********************************************************************************
** Form generated from reading UI file 'helpbrowser.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPBROWSER_H
#define UI_HELPBROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpBrowser
{
public:
    QAction *actionBack;
    QAction *actionForward;
    QAction *action_Close;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QTextBrowser *textBrowser;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *HelpBrowser)
    {
        if (HelpBrowser->objectName().isEmpty())
            HelpBrowser->setObjectName(QString::fromUtf8("HelpBrowser"));
        HelpBrowser->resize(640, 480);
        actionBack = new QAction(HelpBrowser);
        actionBack->setObjectName(QString::fromUtf8("actionBack"));
        actionForward = new QAction(HelpBrowser);
        actionForward->setObjectName(QString::fromUtf8("actionForward"));
        action_Close = new QAction(HelpBrowser);
        action_Close->setObjectName(QString::fromUtf8("action_Close"));
        centralwidget = new QWidget(HelpBrowser);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        textBrowser = new QTextBrowser(splitter);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setOpenExternalLinks(true);
        splitter->addWidget(textBrowser);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        HelpBrowser->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(HelpBrowser);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        HelpBrowser->setStatusBar(statusbar);
        toolBar = new QToolBar(HelpBrowser);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setOrientation(Qt::Horizontal);
        HelpBrowser->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_Close);
        toolBar->addSeparator();
        toolBar->addAction(actionBack);
        toolBar->addAction(actionForward);

        retranslateUi(HelpBrowser);

        QMetaObject::connectSlotsByName(HelpBrowser);
    } // setupUi

    void retranslateUi(QMainWindow *HelpBrowser)
    {
        HelpBrowser->setWindowTitle(QCoreApplication::translate("HelpBrowser", "Sqliteman Help", nullptr));
        actionBack->setText(QCoreApplication::translate("HelpBrowser", "&Back", nullptr));
        actionForward->setText(QCoreApplication::translate("HelpBrowser", "&Forward", nullptr));
        action_Close->setText(QCoreApplication::translate("HelpBrowser", "&Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelpBrowser: public Ui_HelpBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPBROWSER_H

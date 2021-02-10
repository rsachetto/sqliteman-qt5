/********************************************************************************
** Form generated from reading UI file 'sqleditor.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQLEDITOR_H
#define UI_SQLEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "sqleditorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_SqlEditor
{
public:
    QAction *action_Run_SQL;
    QAction *actionRun_Explain;
    QAction *action_Open;
    QAction *action_Save;
    QAction *action_New;
    QAction *actionSave_As;
    QAction *actionCreateView;
    QAction *actionSearch;
    QAction *actionRun_as_Script;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *vboxLayout;
    SqlEditorWidget *sqlTextEdit;
    QFrame *searchFrame;
    QGridLayout *gridLayout1;
    QToolButton *nextToolButton;
    QCheckBox *wholeWordsCheckBox;
    QLineEdit *searchEdit;
    QCheckBox *caseCheckBox;
    QLabel *label;
    QToolButton *previousToolButton;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SqlEditor)
    {
        if (SqlEditor->objectName().isEmpty())
            SqlEditor->setObjectName(QString::fromUtf8("SqlEditor"));
        SqlEditor->resize(692, 431);
        action_Run_SQL = new QAction(SqlEditor);
        action_Run_SQL->setObjectName(QString::fromUtf8("action_Run_SQL"));
        actionRun_Explain = new QAction(SqlEditor);
        actionRun_Explain->setObjectName(QString::fromUtf8("actionRun_Explain"));
        action_Open = new QAction(SqlEditor);
        action_Open->setObjectName(QString::fromUtf8("action_Open"));
        action_Save = new QAction(SqlEditor);
        action_Save->setObjectName(QString::fromUtf8("action_Save"));
        action_New = new QAction(SqlEditor);
        action_New->setObjectName(QString::fromUtf8("action_New"));
        actionSave_As = new QAction(SqlEditor);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionCreateView = new QAction(SqlEditor);
        actionCreateView->setObjectName(QString::fromUtf8("actionCreateView"));
        actionSearch = new QAction(SqlEditor);
        actionSearch->setObjectName(QString::fromUtf8("actionSearch"));
        actionSearch->setCheckable(true);
        actionRun_as_Script = new QAction(SqlEditor);
        actionRun_as_Script->setObjectName(QString::fromUtf8("actionRun_as_Script"));
        centralwidget = new QWidget(SqlEditor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(1);
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        sqlTextEdit = new SqlEditorWidget(centralwidget);
        sqlTextEdit->setObjectName(QString::fromUtf8("sqlTextEdit"));
        sqlTextEdit->setMinimumSize(QSize(0, 100));

        vboxLayout->addWidget(sqlTextEdit);

        searchFrame = new QFrame(centralwidget);
        searchFrame->setObjectName(QString::fromUtf8("searchFrame"));
        searchFrame->setFrameShape(QFrame::StyledPanel);
        searchFrame->setFrameShadow(QFrame::Raised);
        gridLayout1 = new QGridLayout(searchFrame);
        gridLayout1->setSpacing(3);
        gridLayout1->setContentsMargins(1, 1, 1, 1);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        nextToolButton = new QToolButton(searchFrame);
        nextToolButton->setObjectName(QString::fromUtf8("nextToolButton"));

        gridLayout1->addWidget(nextToolButton, 0, 3, 1, 1);

        wholeWordsCheckBox = new QCheckBox(searchFrame);
        wholeWordsCheckBox->setObjectName(QString::fromUtf8("wholeWordsCheckBox"));

        gridLayout1->addWidget(wholeWordsCheckBox, 0, 6, 1, 1);

        searchEdit = new QLineEdit(searchFrame);
        searchEdit->setObjectName(QString::fromUtf8("searchEdit"));

        gridLayout1->addWidget(searchEdit, 0, 1, 1, 1);

        caseCheckBox = new QCheckBox(searchFrame);
        caseCheckBox->setObjectName(QString::fromUtf8("caseCheckBox"));

        gridLayout1->addWidget(caseCheckBox, 0, 5, 1, 1);

        label = new QLabel(searchFrame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 0, 0, 1, 1);

        previousToolButton = new QToolButton(searchFrame);
        previousToolButton->setObjectName(QString::fromUtf8("previousToolButton"));

        gridLayout1->addWidget(previousToolButton, 0, 2, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 0, 7, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem1, 0, 4, 1, 1);


        vboxLayout->addWidget(searchFrame);


        gridLayout->addLayout(vboxLayout, 0, 0, 1, 1);

        SqlEditor->setCentralWidget(centralwidget);
        toolBar = new QToolBar(SqlEditor);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setOrientation(Qt::Horizontal);
        SqlEditor->addToolBar(Qt::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(SqlEditor);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        SqlEditor->setStatusBar(statusBar);

        toolBar->addAction(action_Run_SQL);
        toolBar->addAction(actionRun_Explain);
        toolBar->addAction(actionRun_as_Script);
        toolBar->addSeparator();
        toolBar->addAction(actionCreateView);
        toolBar->addSeparator();
        toolBar->addAction(action_New);
        toolBar->addAction(action_Open);
        toolBar->addAction(action_Save);
        toolBar->addAction(actionSave_As);
        toolBar->addSeparator();
        toolBar->addAction(actionSearch);

        retranslateUi(SqlEditor);

        QMetaObject::connectSlotsByName(SqlEditor);
    } // setupUi

    void retranslateUi(QMainWindow *SqlEditor)
    {
        SqlEditor->setWindowTitle(QCoreApplication::translate("SqlEditor", "SqlEditor", nullptr));
        action_Run_SQL->setText(QCoreApplication::translate("SqlEditor", "&Run SQL", nullptr));
#if QT_CONFIG(tooltip)
        action_Run_SQL->setToolTip(QCoreApplication::translate("SqlEditor", "Run SQL (F9)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Run_SQL->setShortcut(QCoreApplication::translate("SqlEditor", "F9", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRun_Explain->setText(QCoreApplication::translate("SqlEditor", "Run &Explain", nullptr));
#if QT_CONFIG(tooltip)
        actionRun_Explain->setToolTip(QCoreApplication::translate("SqlEditor", "Run Explain (F6)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRun_Explain->setShortcut(QCoreApplication::translate("SqlEditor", "F6", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Open->setText(QCoreApplication::translate("SqlEditor", "&Open...", nullptr));
#if QT_CONFIG(shortcut)
        action_Open->setShortcut(QCoreApplication::translate("SqlEditor", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Save->setText(QCoreApplication::translate("SqlEditor", "&Save", nullptr));
#if QT_CONFIG(tooltip)
        action_Save->setToolTip(QCoreApplication::translate("SqlEditor", "Save (Ctrl+S)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Save->setShortcut(QCoreApplication::translate("SqlEditor", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_New->setText(QCoreApplication::translate("SqlEditor", "&New", nullptr));
#if QT_CONFIG(shortcut)
        action_New->setShortcut(QCoreApplication::translate("SqlEditor", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_As->setText(QCoreApplication::translate("SqlEditor", "Save &As...", nullptr));
        actionCreateView->setText(QCoreApplication::translate("SqlEditor", "Create View", nullptr));
#if QT_CONFIG(tooltip)
        actionCreateView->setToolTip(QCoreApplication::translate("SqlEditor", "Create view from the current select statement", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSearch->setText(QCoreApplication::translate("SqlEditor", "Search", nullptr));
#if QT_CONFIG(tooltip)
        actionSearch->setToolTip(QCoreApplication::translate("SqlEditor", "Search in the SQL file (Ctrl+F)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSearch->setShortcut(QCoreApplication::translate("SqlEditor", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRun_as_Script->setText(QCoreApplication::translate("SqlEditor", "Run as Script", nullptr));
#if QT_CONFIG(tooltip)
        actionRun_as_Script->setToolTip(QCoreApplication::translate("SqlEditor", "Run multiple SQL statements from current cursor position in one batch (F5)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRun_as_Script->setShortcut(QCoreApplication::translate("SqlEditor", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        nextToolButton->setToolTip(QCoreApplication::translate("SqlEditor", "Search Next", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        nextToolButton->setShortcut(QCoreApplication::translate("SqlEditor", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        wholeWordsCheckBox->setText(QCoreApplication::translate("SqlEditor", "Whole Words", nullptr));
        caseCheckBox->setText(QCoreApplication::translate("SqlEditor", "Case Sensitive", nullptr));
        label->setText(QCoreApplication::translate("SqlEditor", "Search:", nullptr));
#if QT_CONFIG(tooltip)
        previousToolButton->setToolTip(QCoreApplication::translate("SqlEditor", "Search previous", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        previousToolButton->setShortcut(QCoreApplication::translate("SqlEditor", "Shift+F3", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class SqlEditor: public Ui_SqlEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQLEDITOR_H

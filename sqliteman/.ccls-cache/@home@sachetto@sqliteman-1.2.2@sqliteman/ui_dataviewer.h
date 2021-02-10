/********************************************************************************
** Form generated from reading UI file 'dataviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAVIEWER_H
#define UI_DATAVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "blobpreviewwidget.h"
#include "sqleditorwidget.h"
#include "sqlitemview.h"

QT_BEGIN_NAMESPACE

class Ui_DataViewer
{
public:
    QAction *actionNew_Row;
    QAction *actionRemove_Row;
    QAction *actionTruncate_Table;
    QAction *actionExport_Data;
    QAction *actionCommit;
    QAction *actionRollback;
    QAction *actionRipOut;
    QAction *actionClose;
    QAction *actionBLOB_Preview;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QSplitter *splitterBlob;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout1;
    QTableView *tableView;
    QWidget *tab_2;
    QGridLayout *gridLayout2;
    SqlItemView *itemView;
    QLabel *label;
    QWidget *tab_3;
    QGridLayout *gridLayout3;
    SqlEditorWidget *scriptEdit;
    QGroupBox *blobPreviewBox;
    QGridLayout *gridLayout4;
    BlobPreviewWidget *blobPreview;
    QTextEdit *statusText;
    QToolBar *mainToolBar;
    QToolBar *exportToolBar;
    QToolBar *snapshotToolBar;

    void setupUi(QMainWindow *DataViewer)
    {
        if (DataViewer->objectName().isEmpty())
            DataViewer->setObjectName(QString::fromUtf8("DataViewer"));
        DataViewer->resize(976, 607);
        actionNew_Row = new QAction(DataViewer);
        actionNew_Row->setObjectName(QString::fromUtf8("actionNew_Row"));
        actionRemove_Row = new QAction(DataViewer);
        actionRemove_Row->setObjectName(QString::fromUtf8("actionRemove_Row"));
        actionTruncate_Table = new QAction(DataViewer);
        actionTruncate_Table->setObjectName(QString::fromUtf8("actionTruncate_Table"));
        actionExport_Data = new QAction(DataViewer);
        actionExport_Data->setObjectName(QString::fromUtf8("actionExport_Data"));
        actionCommit = new QAction(DataViewer);
        actionCommit->setObjectName(QString::fromUtf8("actionCommit"));
        actionRollback = new QAction(DataViewer);
        actionRollback->setObjectName(QString::fromUtf8("actionRollback"));
        actionRipOut = new QAction(DataViewer);
        actionRipOut->setObjectName(QString::fromUtf8("actionRipOut"));
        actionClose = new QAction(DataViewer);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionClose->setVisible(false);
        actionBLOB_Preview = new QAction(DataViewer);
        actionBLOB_Preview->setObjectName(QString::fromUtf8("actionBLOB_Preview"));
        actionBLOB_Preview->setCheckable(true);
        centralwidget = new QWidget(DataViewer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setGeometry(QRect(0, 37, 976, 570));
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
        splitter->setOrientation(Qt::Vertical);
        splitter->setChildrenCollapsible(false);
        splitterBlob = new QSplitter(splitter);
        splitterBlob->setObjectName(QString::fromUtf8("splitterBlob"));
        splitterBlob->setOrientation(Qt::Horizontal);
        splitterBlob->setChildrenCollapsible(false);
        tabWidget = new QTabWidget(splitterBlob);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setGeometry(QRect(0, 0, 805, 266));
        gridLayout1 = new QGridLayout(tab);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setMinimumSize(QSize(0, 100));
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::ContiguousSelection);
        tableView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableView->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        gridLayout1->addWidget(tableView, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tab_2->setGeometry(QRect(0, 0, 840, 420));
        gridLayout2 = new QGridLayout(tab_2);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        itemView = new SqlItemView(tab_2);
        itemView->setObjectName(QString::fromUtf8("itemView"));

        gridLayout2->addWidget(itemView, 1, 0, 1, 1);

        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout2->addWidget(label, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tab_3->setGeometry(QRect(0, 0, 840, 420));
        gridLayout3 = new QGridLayout(tab_3);
#ifndef Q_OS_MAC
        gridLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        scriptEdit = new SqlEditorWidget(tab_3);
        scriptEdit->setObjectName(QString::fromUtf8("scriptEdit"));
        scriptEdit->setReadOnly(false);

        gridLayout3->addWidget(scriptEdit, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        splitterBlob->addWidget(tabWidget);
        blobPreviewBox = new QGroupBox(splitterBlob);
        blobPreviewBox->setObjectName(QString::fromUtf8("blobPreviewBox"));
        gridLayout4 = new QGridLayout(blobPreviewBox);
#ifndef Q_OS_MAC
        gridLayout4->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout4->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        blobPreview = new BlobPreviewWidget(blobPreviewBox);
        blobPreview->setObjectName(QString::fromUtf8("blobPreview"));

        gridLayout4->addWidget(blobPreview, 0, 0, 1, 1);

        splitterBlob->addWidget(blobPreviewBox);
        splitter->addWidget(splitterBlob);
        statusText = new QTextEdit(splitter);
        statusText->setObjectName(QString::fromUtf8("statusText"));
        statusText->setMinimumSize(QSize(0, 100));
        statusText->setReadOnly(true);
        splitter->addWidget(statusText);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        DataViewer->setCentralWidget(centralwidget);
        mainToolBar = new QToolBar(DataViewer);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setGeometry(QRect(0, 0, 551, 37));
        mainToolBar->setOrientation(Qt::Horizontal);
        DataViewer->addToolBar(Qt::TopToolBarArea, mainToolBar);
        exportToolBar = new QToolBar(DataViewer);
        exportToolBar->setObjectName(QString::fromUtf8("exportToolBar"));
        exportToolBar->setGeometry(QRect(551, 0, 262, 37));
        exportToolBar->setOrientation(Qt::Horizontal);
        DataViewer->addToolBar(Qt::TopToolBarArea, exportToolBar);
        snapshotToolBar = new QToolBar(DataViewer);
        snapshotToolBar->setObjectName(QString::fromUtf8("snapshotToolBar"));
        snapshotToolBar->setGeometry(QRect(813, 0, 163, 37));
        snapshotToolBar->setOrientation(Qt::Horizontal);
        DataViewer->addToolBar(Qt::TopToolBarArea, snapshotToolBar);

        mainToolBar->addAction(actionNew_Row);
        mainToolBar->addAction(actionRemove_Row);
        mainToolBar->addAction(actionTruncate_Table);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCommit);
        mainToolBar->addAction(actionRollback);
        exportToolBar->addAction(actionBLOB_Preview);
        exportToolBar->addAction(actionExport_Data);
        exportToolBar->addAction(actionClose);
        snapshotToolBar->addAction(actionRipOut);

        retranslateUi(DataViewer);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DataViewer);
    } // setupUi

    void retranslateUi(QMainWindow *DataViewer)
    {
        DataViewer->setWindowTitle(QCoreApplication::translate("DataViewer", "Data Viewer", nullptr));
        actionNew_Row->setText(QCoreApplication::translate("DataViewer", "New Row", nullptr));
        actionRemove_Row->setText(QCoreApplication::translate("DataViewer", "Remove Row", nullptr));
        actionTruncate_Table->setText(QCoreApplication::translate("DataViewer", "Truncate Table", nullptr));
        actionExport_Data->setText(QCoreApplication::translate("DataViewer", "Export Data", nullptr));
        actionCommit->setText(QCoreApplication::translate("DataViewer", "Commit", nullptr));
#if QT_CONFIG(tooltip)
        actionCommit->setToolTip(QCoreApplication::translate("DataViewer", "Commit the current transaction in the result table", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRollback->setText(QCoreApplication::translate("DataViewer", "Rollback", nullptr));
#if QT_CONFIG(tooltip)
        actionRollback->setToolTip(QCoreApplication::translate("DataViewer", "Rollback the current transaction in the result table", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRipOut->setText(QCoreApplication::translate("DataViewer", "Table Snapshot", nullptr));
        actionClose->setText(QCoreApplication::translate("DataViewer", "Close", nullptr));
        actionBLOB_Preview->setText(QCoreApplication::translate("DataViewer", "BLOB Preview", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("DataViewer", "Full View", nullptr));
        label->setText(QCoreApplication::translate("DataViewer", "Item View is read only now.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("DataViewer", "Item View", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("DataViewer", "Script Output", nullptr));
        blobPreviewBox->setTitle(QCoreApplication::translate("DataViewer", "BLOB Preview", nullptr));
#if QT_CONFIG(tooltip)
        mainToolBar->setToolTip(QCoreApplication::translate("DataViewer", "Open a new standalone window with current results", nullptr));
#endif // QT_CONFIG(tooltip)
        exportToolBar->setWindowTitle(QCoreApplication::translate("DataViewer", "toolBar_2", nullptr));
        snapshotToolBar->setWindowTitle(QCoreApplication::translate("DataViewer", "toolBar_3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataViewer: public Ui_DataViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAVIEWER_H

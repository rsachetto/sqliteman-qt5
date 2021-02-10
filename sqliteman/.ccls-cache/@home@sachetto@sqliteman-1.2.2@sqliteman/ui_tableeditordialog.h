/********************************************************************************
** Form generated from reading UI file 'tableeditordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEEDITORDIALOG_H
#define UI_TABLEEDITORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "sqleditorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_TableEditorDialog
{
public:
    QGridLayout *gridLayout;
    QSplitter *tableEditorSplitter;
    QWidget *widget;
    QGridLayout *gridLayout1;
    QTabWidget *tabWidget;
    QWidget *designTab;
    QGridLayout *gridLayout2;
    QLabel *label_2;
    QComboBox *databaseCombo;
    QLabel *label;
    QLineEdit *nameEdit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout3;
    QTableWidget *columnTable;
    QPushButton *addButton;
    QPushButton *removeButton;
    QSpacerItem *spacerItem;
    QLabel *adviceLabel;
    QWidget *sqlTab;
    QGridLayout *gridLayout4;
    SqlEditorWidget *textEdit;
    QSpacerItem *spacerItem1;
    QPushButton *createButton;
    QTextEdit *resultEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TableEditorDialog)
    {
        if (TableEditorDialog->objectName().isEmpty())
            TableEditorDialog->setObjectName(QString::fromUtf8("TableEditorDialog"));
        TableEditorDialog->resize(620, 613);
        gridLayout = new QGridLayout(TableEditorDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableEditorSplitter = new QSplitter(TableEditorDialog);
        tableEditorSplitter->setObjectName(QString::fromUtf8("tableEditorSplitter"));
        tableEditorSplitter->setOrientation(Qt::Vertical);
        widget = new QWidget(tableEditorSplitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout1 = new QGridLayout(widget);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        tabWidget = new QTabWidget(widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        designTab = new QWidget();
        designTab->setObjectName(QString::fromUtf8("designTab"));
        gridLayout2 = new QGridLayout(designTab);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        label_2 = new QLabel(designTab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout2->addWidget(label_2, 0, 0, 1, 1);

        databaseCombo = new QComboBox(designTab);
        databaseCombo->setObjectName(QString::fromUtf8("databaseCombo"));

        gridLayout2->addWidget(databaseCombo, 0, 1, 1, 1);

        label = new QLabel(designTab);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout2->addWidget(label, 0, 2, 1, 1);

        nameEdit = new QLineEdit(designTab);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        gridLayout2->addWidget(nameEdit, 0, 3, 1, 1);

        groupBox = new QGroupBox(designTab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout3 = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        columnTable = new QTableWidget(groupBox);
        if (columnTable->columnCount() < 4)
            columnTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        columnTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        columnTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        columnTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        columnTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        columnTable->setObjectName(QString::fromUtf8("columnTable"));
        columnTable->setAlternatingRowColors(true);
        columnTable->setSelectionMode(QAbstractItemView::SingleSelection);
        columnTable->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout3->addWidget(columnTable, 0, 0, 1, 3);

        addButton = new QPushButton(groupBox);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        gridLayout3->addWidget(addButton, 1, 1, 1, 1);

        removeButton = new QPushButton(groupBox);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        gridLayout3->addWidget(removeButton, 1, 2, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem, 1, 0, 1, 1);


        gridLayout2->addWidget(groupBox, 1, 0, 1, 4);

        adviceLabel = new QLabel(designTab);
        adviceLabel->setObjectName(QString::fromUtf8("adviceLabel"));
        adviceLabel->setTextFormat(Qt::AutoText);
        adviceLabel->setAlignment(Qt::AlignCenter);

        gridLayout2->addWidget(adviceLabel, 2, 0, 1, 4);

        tabWidget->addTab(designTab, QString());
        sqlTab = new QWidget();
        sqlTab->setObjectName(QString::fromUtf8("sqlTab"));
        gridLayout4 = new QGridLayout(sqlTab);
#ifndef Q_OS_MAC
        gridLayout4->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout4->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        textEdit = new SqlEditorWidget(sqlTab);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout4->addWidget(textEdit, 0, 0, 1, 1);

        tabWidget->addTab(sqlTab, QString());

        gridLayout1->addWidget(tabWidget, 0, 0, 1, 2);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem1, 1, 0, 1, 1);

        createButton = new QPushButton(widget);
        createButton->setObjectName(QString::fromUtf8("createButton"));

        gridLayout1->addWidget(createButton, 1, 1, 1, 1);

        tableEditorSplitter->addWidget(widget);
        resultEdit = new QTextEdit(tableEditorSplitter);
        resultEdit->setObjectName(QString::fromUtf8("resultEdit"));
        resultEdit->setReadOnly(true);
        tableEditorSplitter->addWidget(resultEdit);

        gridLayout->addWidget(tableEditorSplitter, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(TableEditorDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(databaseCombo);
        label->setBuddy(nameEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(TableEditorDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TableEditorDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TableEditorDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TableEditorDialog);
    } // setupUi

    void retranslateUi(QDialog *TableEditorDialog)
    {
        TableEditorDialog->setWindowTitle(QCoreApplication::translate("TableEditorDialog", "Create Table", nullptr));
        label_2->setText(QCoreApplication::translate("TableEditorDialog", "&Database:", nullptr));
        label->setText(QCoreApplication::translate("TableEditorDialog", "Table &Name:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TableEditorDialog", "Co&lumns", nullptr));
        QTableWidgetItem *___qtablewidgetitem = columnTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("TableEditorDialog", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = columnTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("TableEditorDialog", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = columnTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("TableEditorDialog", "Not Null", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = columnTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("TableEditorDialog", "Default", nullptr));
        addButton->setText(QCoreApplication::translate("TableEditorDialog", "&Add", nullptr));
        removeButton->setText(QCoreApplication::translate("TableEditorDialog", "&Remove", nullptr));
        adviceLabel->setText(QCoreApplication::translate("TableEditorDialog", "If you need to use an advanced options<br>go to the \"<b>Advanced (SQL)</b>\" tab.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(designTab), QCoreApplication::translate("TableEditorDialog", "De&sign", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(sqlTab), QCoreApplication::translate("TableEditorDialog", "Ad&vanced (SQL)", nullptr));
        createButton->setText(QCoreApplication::translate("TableEditorDialog", "C&reate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TableEditorDialog: public Ui_TableEditorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEEDITORDIALOG_H

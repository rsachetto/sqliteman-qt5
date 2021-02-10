/********************************************************************************
** Form generated from reading UI file 'schemabrowser.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEMABROWSER_H
#define UI_SCHEMABROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include "tabletree.h"

QT_BEGIN_NAMESPACE

class Ui_SchemaBrowser
{
public:
    QGridLayout *gridLayout;
    QTabWidget *schemaTabWidget;
    QWidget *schemaTab;
    QGridLayout *gridLayout1;
    TableTree *tableTree;
    QWidget *pragmaTab;
    QGridLayout *gridLayout2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout3;
    QLineEdit *pragmaName;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *pragmaValue;
    QPushButton *setPragmaButton;
    QTableWidget *pragmaTable;

    void setupUi(QWidget *SchemaBrowser)
    {
        if (SchemaBrowser->objectName().isEmpty())
            SchemaBrowser->setObjectName(QString::fromUtf8("SchemaBrowser"));
        SchemaBrowser->resize(271, 721);
        gridLayout = new QGridLayout(SchemaBrowser);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        schemaTabWidget = new QTabWidget(SchemaBrowser);
        schemaTabWidget->setObjectName(QString::fromUtf8("schemaTabWidget"));
        schemaTab = new QWidget();
        schemaTab->setObjectName(QString::fromUtf8("schemaTab"));
        gridLayout1 = new QGridLayout(schemaTab);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        tableTree = new TableTree(schemaTab);
        tableTree->setObjectName(QString::fromUtf8("tableTree"));

        gridLayout1->addWidget(tableTree, 0, 0, 1, 1);

        schemaTabWidget->addTab(schemaTab, QString());
        pragmaTab = new QWidget();
        pragmaTab->setObjectName(QString::fromUtf8("pragmaTab"));
        gridLayout2 = new QGridLayout(pragmaTab);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        groupBox = new QGroupBox(pragmaTab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout3 = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        pragmaName = new QLineEdit(groupBox);
        pragmaName->setObjectName(QString::fromUtf8("pragmaName"));
        pragmaName->setReadOnly(true);

        gridLayout3->addWidget(pragmaName, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout3->addWidget(label_4, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout3->addWidget(label_2, 0, 0, 1, 1);

        pragmaValue = new QLineEdit(groupBox);
        pragmaValue->setObjectName(QString::fromUtf8("pragmaValue"));
        pragmaValue->setReadOnly(true);

        gridLayout3->addWidget(pragmaValue, 3, 0, 1, 1);

        setPragmaButton = new QPushButton(groupBox);
        setPragmaButton->setObjectName(QString::fromUtf8("setPragmaButton"));

        gridLayout3->addWidget(setPragmaButton, 4, 0, 1, 1);


        gridLayout2->addWidget(groupBox, 1, 0, 1, 1);

        pragmaTable = new QTableWidget(pragmaTab);
        if (pragmaTable->columnCount() < 2)
            pragmaTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        pragmaTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        pragmaTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        pragmaTable->setObjectName(QString::fromUtf8("pragmaTable"));
        pragmaTable->setAlternatingRowColors(true);
        pragmaTable->setSelectionMode(QAbstractItemView::SingleSelection);
        pragmaTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        pragmaTable->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

        gridLayout2->addWidget(pragmaTable, 0, 0, 1, 1);

        schemaTabWidget->addTab(pragmaTab, QString());

        gridLayout->addWidget(schemaTabWidget, 0, 0, 1, 1);


        retranslateUi(SchemaBrowser);

        schemaTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SchemaBrowser);
    } // setupUi

    void retranslateUi(QWidget *SchemaBrowser)
    {
        SchemaBrowser->setWindowTitle(QCoreApplication::translate("SchemaBrowser", "Form", nullptr));
        schemaTabWidget->setTabText(schemaTabWidget->indexOf(schemaTab), QCoreApplication::translate("SchemaBrowser", "Sche&ma", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SchemaBrowser", "Detail", nullptr));
        pragmaName->setText(QString());
        label_4->setText(QCoreApplication::translate("SchemaBrowser", "Value:", nullptr));
        label_2->setText(QCoreApplication::translate("SchemaBrowser", "Pragma:", nullptr));
        pragmaValue->setText(QString());
        setPragmaButton->setText(QCoreApplication::translate("SchemaBrowser", "Change &Value...", nullptr));
        QTableWidgetItem *___qtablewidgetitem = pragmaTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SchemaBrowser", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = pragmaTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SchemaBrowser", "Value", nullptr));
        schemaTabWidget->setTabText(schemaTabWidget->indexOf(pragmaTab), QCoreApplication::translate("SchemaBrowser", "&Pragmas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SchemaBrowser: public Ui_SchemaBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEMABROWSER_H

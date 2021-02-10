/********************************************************************************
** Form generated from reading UI file 'importtabledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTTABLEDIALOG_H
#define UI_IMPORTTABLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImportTableDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *tableComboBox;
    QLabel *label_2;
    QLineEdit *fileEdit;
    QPushButton *fileButton;
    QTabWidget *tabWidget;
    QWidget *importTab;
    QGridLayout *gridLayout1;
    QGroupBox *groupBox;
    QGridLayout *gridLayout2;
    QRadioButton *pipeRadioButton;
    QRadioButton *commaRadioButton;
    QRadioButton *semicolonRadioButton;
    QRadioButton *tabelatorRadioButton;
    QHBoxLayout *hboxLayout;
    QRadioButton *customRadioButton;
    QLineEdit *customEdit;
    QSpacerItem *spacerItem;
    QWidget *xmlImport;
    QGridLayout *gridLayout3;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout4;
    QTableView *previewView;
    QDialogButtonBox *buttonBox;
    QLabel *label_4;
    QComboBox *schemaComboBox;

    void setupUi(QDialog *ImportTableDialog)
    {
        if (ImportTableDialog->objectName().isEmpty())
            ImportTableDialog->setObjectName(QString::fromUtf8("ImportTableDialog"));
        ImportTableDialog->resize(509, 480);
        gridLayout = new QGridLayout(ImportTableDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ImportTableDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        tableComboBox = new QComboBox(ImportTableDialog);
        tableComboBox->setObjectName(QString::fromUtf8("tableComboBox"));

        gridLayout->addWidget(tableComboBox, 1, 1, 1, 1);

        label_2 = new QLabel(ImportTableDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        fileEdit = new QLineEdit(ImportTableDialog);
        fileEdit->setObjectName(QString::fromUtf8("fileEdit"));

        gridLayout->addWidget(fileEdit, 2, 1, 1, 1);

        fileButton = new QPushButton(ImportTableDialog);
        fileButton->setObjectName(QString::fromUtf8("fileButton"));

        gridLayout->addWidget(fileButton, 2, 2, 1, 1);

        tabWidget = new QTabWidget(ImportTableDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        importTab = new QWidget();
        importTab->setObjectName(QString::fromUtf8("importTab"));
        gridLayout1 = new QGridLayout(importTab);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        groupBox = new QGroupBox(importTab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout2 = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        pipeRadioButton = new QRadioButton(groupBox);
        pipeRadioButton->setObjectName(QString::fromUtf8("pipeRadioButton"));
        pipeRadioButton->setChecked(true);

        gridLayout2->addWidget(pipeRadioButton, 0, 0, 1, 1);

        commaRadioButton = new QRadioButton(groupBox);
        commaRadioButton->setObjectName(QString::fromUtf8("commaRadioButton"));

        gridLayout2->addWidget(commaRadioButton, 0, 1, 1, 1);

        semicolonRadioButton = new QRadioButton(groupBox);
        semicolonRadioButton->setObjectName(QString::fromUtf8("semicolonRadioButton"));

        gridLayout2->addWidget(semicolonRadioButton, 1, 0, 1, 1);

        tabelatorRadioButton = new QRadioButton(groupBox);
        tabelatorRadioButton->setObjectName(QString::fromUtf8("tabelatorRadioButton"));

        gridLayout2->addWidget(tabelatorRadioButton, 1, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        customRadioButton = new QRadioButton(groupBox);
        customRadioButton->setObjectName(QString::fromUtf8("customRadioButton"));

        hboxLayout->addWidget(customRadioButton);

        customEdit = new QLineEdit(groupBox);
        customEdit->setObjectName(QString::fromUtf8("customEdit"));

        hboxLayout->addWidget(customEdit);


        gridLayout2->addLayout(hboxLayout, 2, 0, 1, 2);


        gridLayout1->addWidget(groupBox, 0, 0, 1, 1);

        spacerItem = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem, 1, 0, 1, 1);

        tabWidget->addTab(importTab, QString());
        xmlImport = new QWidget();
        xmlImport->setObjectName(QString::fromUtf8("xmlImport"));
        gridLayout3 = new QGridLayout(xmlImport);
#ifndef Q_OS_MAC
        gridLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        label_3 = new QLabel(xmlImport);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        gridLayout3->addWidget(label_3, 0, 0, 1, 1);

        tabWidget->addTab(xmlImport, QString());

        gridLayout->addWidget(tabWidget, 3, 0, 1, 3);

        groupBox_2 = new QGroupBox(ImportTableDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout4 = new QGridLayout(groupBox_2);
#ifndef Q_OS_MAC
        gridLayout4->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout4->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        previewView = new QTableView(groupBox_2);
        previewView->setObjectName(QString::fromUtf8("previewView"));
        previewView->setAlternatingRowColors(true);

        gridLayout4->addWidget(previewView, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 4, 0, 1, 3);

        buttonBox = new QDialogButtonBox(ImportTableDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 3);

        label_4 = new QLabel(ImportTableDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        schemaComboBox = new QComboBox(ImportTableDialog);
        schemaComboBox->setObjectName(QString::fromUtf8("schemaComboBox"));

        gridLayout->addWidget(schemaComboBox, 0, 1, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(tableComboBox);
        label_2->setBuddy(fileEdit);
        label_4->setBuddy(schemaComboBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ImportTableDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), ImportTableDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ImportTableDialog);
    } // setupUi

    void retranslateUi(QDialog *ImportTableDialog)
    {
        ImportTableDialog->setWindowTitle(QCoreApplication::translate("ImportTableDialog", "Data Import", nullptr));
        label->setText(QCoreApplication::translate("ImportTableDialog", "&Table to Import Into:", nullptr));
        label_2->setText(QCoreApplication::translate("ImportTableDialog", "&File to Import:", nullptr));
        fileButton->setText(QCoreApplication::translate("ImportTableDialog", "&Search...", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ImportTableDialog", "Column Separators", nullptr));
        pipeRadioButton->setText(QCoreApplication::translate("ImportTableDialog", "Pipe Symbol (Default)", nullptr));
        commaRadioButton->setText(QCoreApplication::translate("ImportTableDialog", "Comma", nullptr));
        semicolonRadioButton->setText(QCoreApplication::translate("ImportTableDialog", "Semicolon", nullptr));
        tabelatorRadioButton->setText(QCoreApplication::translate("ImportTableDialog", "Tabelator", nullptr));
        customRadioButton->setText(QCoreApplication::translate("ImportTableDialog", "Custom:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(importTab), QCoreApplication::translate("ImportTableDialog", "Sqlite .import", nullptr));
        label_3->setText(QCoreApplication::translate("ImportTableDialog", "There are no options for this import type.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(xmlImport), QCoreApplication::translate("ImportTableDialog", "MS Excel XML", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ImportTableDialog", "Preview", nullptr));
        label_4->setText(QCoreApplication::translate("ImportTableDialog", "&Schema to Import:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImportTableDialog: public Ui_ImportTableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTTABLEDIALOG_H

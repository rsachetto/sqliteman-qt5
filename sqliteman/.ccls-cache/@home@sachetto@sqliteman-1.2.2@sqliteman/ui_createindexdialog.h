/********************************************************************************
** Form generated from reading UI file 'createindexdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEINDEXDIALOG_H
#define UI_CREATEINDEXDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_CreateIndexDialog
{
public:
    QGridLayout *gridLayout;
    QCheckBox *uniqueCheckBox;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QHBoxLayout *hboxLayout1;
    QLabel *schemaLabel;
    QLabel *label_2;
    QLabel *tableNameLabel;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout2;
    QLabel *label_3;
    QLineEdit *indexNameEdit;
    QSpacerItem *spacerItem1;
    QPushButton *createButton;
    QDialogButtonBox *buttonBox;
    QTableWidget *tableColumns;
    QTextEdit *resultEdit;

    void setupUi(QDialog *CreateIndexDialog)
    {
        if (CreateIndexDialog->objectName().isEmpty())
            CreateIndexDialog->setObjectName(QString::fromUtf8("CreateIndexDialog"));
        CreateIndexDialog->resize(353, 491);
        gridLayout = new QGridLayout(CreateIndexDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        uniqueCheckBox = new QCheckBox(CreateIndexDialog);
        uniqueCheckBox->setObjectName(QString::fromUtf8("uniqueCheckBox"));

        gridLayout->addWidget(uniqueCheckBox, 1, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(CreateIndexDialog);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        schemaLabel = new QLabel(CreateIndexDialog);
        schemaLabel->setObjectName(QString::fromUtf8("schemaLabel"));

        hboxLayout1->addWidget(schemaLabel);

        label_2 = new QLabel(CreateIndexDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout1->addWidget(label_2);

        tableNameLabel = new QLabel(CreateIndexDialog);
        tableNameLabel->setObjectName(QString::fromUtf8("tableNameLabel"));

        hboxLayout1->addWidget(tableNameLabel);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);


        hboxLayout->addLayout(hboxLayout1);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 2);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        label_3 = new QLabel(CreateIndexDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout2->addWidget(label_3);

        indexNameEdit = new QLineEdit(CreateIndexDialog);
        indexNameEdit->setObjectName(QString::fromUtf8("indexNameEdit"));
        indexNameEdit->setMaxLength(30);

        hboxLayout2->addWidget(indexNameEdit);


        gridLayout->addLayout(hboxLayout2, 1, 0, 1, 1);

        spacerItem1 = new QSpacerItem(291, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 3, 0, 1, 1);

        createButton = new QPushButton(CreateIndexDialog);
        createButton->setObjectName(QString::fromUtf8("createButton"));

        gridLayout->addWidget(createButton, 3, 1, 1, 1);

        buttonBox = new QDialogButtonBox(CreateIndexDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 2);

        tableColumns = new QTableWidget(CreateIndexDialog);
        if (tableColumns->columnCount() < 3)
            tableColumns->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableColumns->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableColumns->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableColumns->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableColumns->setObjectName(QString::fromUtf8("tableColumns"));
        tableColumns->setAlternatingRowColors(true);
        tableColumns->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableColumns->setColumnCount(3);

        gridLayout->addWidget(tableColumns, 2, 0, 1, 2);

        resultEdit = new QTextEdit(CreateIndexDialog);
        resultEdit->setObjectName(QString::fromUtf8("resultEdit"));
        resultEdit->setMaximumSize(QSize(16777215, 70));
        resultEdit->setReadOnly(true);

        gridLayout->addWidget(resultEdit, 4, 0, 1, 2);

#if QT_CONFIG(shortcut)
        label_3->setBuddy(indexNameEdit);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(indexNameEdit, uniqueCheckBox);
        QWidget::setTabOrder(uniqueCheckBox, tableColumns);
        QWidget::setTabOrder(tableColumns, buttonBox);

        retranslateUi(CreateIndexDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateIndexDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateIndexDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CreateIndexDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateIndexDialog)
    {
        CreateIndexDialog->setWindowTitle(QCoreApplication::translate("CreateIndexDialog", "Create Index", nullptr));
        uniqueCheckBox->setText(QCoreApplication::translate("CreateIndexDialog", "&Unique?", nullptr));
        label->setText(QCoreApplication::translate("CreateIndexDialog", "Table Name:", nullptr));
        label_2->setText(QCoreApplication::translate("CreateIndexDialog", ".", nullptr));
        label_3->setText(QCoreApplication::translate("CreateIndexDialog", "Index &Name:", nullptr));
        createButton->setText(QCoreApplication::translate("CreateIndexDialog", "C&reate", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableColumns->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CreateIndexDialog", "Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableColumns->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CreateIndexDialog", "Use?", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableColumns->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("CreateIndexDialog", "Asc/Desc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateIndexDialog: public Ui_CreateIndexDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEINDEXDIALOG_H

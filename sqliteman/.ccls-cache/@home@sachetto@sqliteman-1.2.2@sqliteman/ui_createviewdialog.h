/********************************************************************************
** Form generated from reading UI file 'createviewdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEVIEWDIALOG_H
#define UI_CREATEVIEWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include "sqleditorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_CreateViewDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *createButton;
    QTextEdit *resultEdit;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    SqlEditorWidget *sqlEdit;
    QLabel *label;
    QComboBox *databaseCombo;
    QLineEdit *nameEdit;
    QLabel *label_2;

    void setupUi(QDialog *CreateViewDialog)
    {
        if (CreateViewDialog->objectName().isEmpty())
            CreateViewDialog->setObjectName(QString::fromUtf8("CreateViewDialog"));
        CreateViewDialog->resize(395, 465);
        gridLayout = new QGridLayout(CreateViewDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        createButton = new QPushButton(CreateViewDialog);
        createButton->setObjectName(QString::fromUtf8("createButton"));

        hboxLayout->addWidget(createButton);


        gridLayout->addLayout(hboxLayout, 3, 0, 1, 2);

        resultEdit = new QTextEdit(CreateViewDialog);
        resultEdit->setObjectName(QString::fromUtf8("resultEdit"));
        resultEdit->setMaximumSize(QSize(16777215, 70));
        resultEdit->setReadOnly(true);

        gridLayout->addWidget(resultEdit, 4, 0, 1, 2);

        buttonBox = new QDialogButtonBox(CreateViewDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 2);

        groupBox = new QGroupBox(CreateViewDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        sqlEdit = new SqlEditorWidget(groupBox);
        sqlEdit->setObjectName(QString::fromUtf8("sqlEdit"));

        gridLayout1->addWidget(sqlEdit, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 2, 0, 1, 2);

        label = new QLabel(CreateViewDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        databaseCombo = new QComboBox(CreateViewDialog);
        databaseCombo->setObjectName(QString::fromUtf8("databaseCombo"));

        gridLayout->addWidget(databaseCombo, 0, 1, 1, 1);

        nameEdit = new QLineEdit(CreateViewDialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        gridLayout->addWidget(nameEdit, 1, 1, 1, 1);

        label_2 = new QLabel(CreateViewDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(databaseCombo);
        label_2->setBuddy(nameEdit);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(databaseCombo, nameEdit);
        QWidget::setTabOrder(nameEdit, sqlEdit);
        QWidget::setTabOrder(sqlEdit, createButton);
        QWidget::setTabOrder(createButton, resultEdit);
        QWidget::setTabOrder(resultEdit, buttonBox);

        retranslateUi(CreateViewDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateViewDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateViewDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CreateViewDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateViewDialog)
    {
        CreateViewDialog->setWindowTitle(QCoreApplication::translate("CreateViewDialog", "Create View", nullptr));
        createButton->setText(QCoreApplication::translate("CreateViewDialog", "C&reate", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CreateViewDialog", "&Select Statement (AS)", nullptr));
        label->setText(QCoreApplication::translate("CreateViewDialog", "&Database:", nullptr));
        label_2->setText(QCoreApplication::translate("CreateViewDialog", "&View Name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateViewDialog: public Ui_CreateViewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEVIEWDIALOG_H

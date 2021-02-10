/********************************************************************************
** Form generated from reading UI file 'createtriggerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATETRIGGERDIALOG_H
#define UI_CREATETRIGGERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include "sqleditorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_CreateTriggerDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *createButton;
    QSpacerItem *spacerItem;
    SqlEditorWidget *textEdit;
    QDialogButtonBox *buttonBox;
    QTextEdit *resultEdit;

    void setupUi(QDialog *CreateTriggerDialog)
    {
        if (CreateTriggerDialog->objectName().isEmpty())
            CreateTriggerDialog->setObjectName(QString::fromUtf8("CreateTriggerDialog"));
        CreateTriggerDialog->resize(466, 493);
        gridLayout = new QGridLayout(CreateTriggerDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        createButton = new QPushButton(CreateTriggerDialog);
        createButton->setObjectName(QString::fromUtf8("createButton"));

        gridLayout->addWidget(createButton, 1, 1, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 0, 1, 1);

        textEdit = new SqlEditorWidget(CreateTriggerDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 2);

        buttonBox = new QDialogButtonBox(CreateTriggerDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);

        resultEdit = new QTextEdit(CreateTriggerDialog);
        resultEdit->setObjectName(QString::fromUtf8("resultEdit"));
        resultEdit->setMaximumSize(QSize(16777215, 70));
        resultEdit->setReadOnly(true);

        gridLayout->addWidget(resultEdit, 2, 0, 1, 2);


        retranslateUi(CreateTriggerDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateTriggerDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateTriggerDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CreateTriggerDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateTriggerDialog)
    {
        CreateTriggerDialog->setWindowTitle(QCoreApplication::translate("CreateTriggerDialog", "Create Trigger", nullptr));
        createButton->setText(QCoreApplication::translate("CreateTriggerDialog", "C&reate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateTriggerDialog: public Ui_CreateTriggerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATETRIGGERDIALOG_H

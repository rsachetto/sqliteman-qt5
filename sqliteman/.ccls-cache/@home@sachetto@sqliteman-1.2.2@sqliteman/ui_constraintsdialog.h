/********************************************************************************
** Form generated from reading UI file 'constraintsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTRAINTSDIALOG_H
#define UI_CONSTRAINTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "sqleditorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_ConstraintsDialog
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout1;
    SqlEditorWidget *insertEdit;
    QLineEdit *insertName;
    QLabel *label;
    QWidget *tab_2;
    QGridLayout *gridLayout2;
    QLineEdit *updateName;
    SqlEditorWidget *updateEdit;
    QLabel *label_2;
    QWidget *tab_3;
    QGridLayout *gridLayout3;
    QLineEdit *deleteName;
    QLabel *label_3;
    SqlEditorWidget *deleteEdit;
    QDialogButtonBox *buttonBox;
    QSpacerItem *spacerItem;
    QTextEdit *resultEdit;
    QPushButton *createButton;

    void setupUi(QDialog *ConstraintsDialog)
    {
        if (ConstraintsDialog->objectName().isEmpty())
            ConstraintsDialog->setObjectName(QString::fromUtf8("ConstraintsDialog"));
        ConstraintsDialog->resize(400, 575);
        gridLayout = new QGridLayout(ConstraintsDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(ConstraintsDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout1 = new QGridLayout(tab);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        insertEdit = new SqlEditorWidget(tab);
        insertEdit->setObjectName(QString::fromUtf8("insertEdit"));
        insertEdit->setReadOnly(true);

        gridLayout1->addWidget(insertEdit, 1, 0, 1, 2);

        insertName = new QLineEdit(tab);
        insertName->setObjectName(QString::fromUtf8("insertName"));

        gridLayout1->addWidget(insertName, 0, 1, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout2 = new QGridLayout(tab_2);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        updateName = new QLineEdit(tab_2);
        updateName->setObjectName(QString::fromUtf8("updateName"));

        gridLayout2->addWidget(updateName, 0, 1, 1, 1);

        updateEdit = new SqlEditorWidget(tab_2);
        updateEdit->setObjectName(QString::fromUtf8("updateEdit"));
        updateEdit->setReadOnly(true);

        gridLayout2->addWidget(updateEdit, 1, 0, 1, 2);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout2->addWidget(label_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout3 = new QGridLayout(tab_3);
#ifndef Q_OS_MAC
        gridLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        deleteName = new QLineEdit(tab_3);
        deleteName->setObjectName(QString::fromUtf8("deleteName"));

        gridLayout3->addWidget(deleteName, 0, 1, 1, 1);

        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout3->addWidget(label_3, 0, 0, 1, 1);

        deleteEdit = new SqlEditorWidget(tab_3);
        deleteEdit->setObjectName(QString::fromUtf8("deleteEdit"));
        deleteEdit->setReadOnly(true);

        gridLayout3->addWidget(deleteEdit, 1, 0, 1, 2);

        tabWidget->addTab(tab_3, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 2);

        buttonBox = new QDialogButtonBox(ConstraintsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);

        spacerItem = new QSpacerItem(221, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 1, 0, 1, 1);

        resultEdit = new QTextEdit(ConstraintsDialog);
        resultEdit->setObjectName(QString::fromUtf8("resultEdit"));
        resultEdit->setMaximumSize(QSize(16777215, 140));
        resultEdit->setReadOnly(true);

        gridLayout->addWidget(resultEdit, 2, 0, 1, 2);

        createButton = new QPushButton(ConstraintsDialog);
        createButton->setObjectName(QString::fromUtf8("createButton"));

        gridLayout->addWidget(createButton, 1, 1, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(insertName);
        label_2->setBuddy(insertName);
        label_3->setBuddy(insertEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ConstraintsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConstraintsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConstraintsDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ConstraintsDialog);
    } // setupUi

    void retranslateUi(QDialog *ConstraintsDialog)
    {
        ConstraintsDialog->setWindowTitle(QCoreApplication::translate("ConstraintsDialog", "Constraints Triggers", nullptr));
        label->setText(QCoreApplication::translate("ConstraintsDialog", "&Name:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("ConstraintsDialog", "&Insert", nullptr));
        label_2->setText(QCoreApplication::translate("ConstraintsDialog", "&Name:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("ConstraintsDialog", "&Update", nullptr));
        label_3->setText(QCoreApplication::translate("ConstraintsDialog", "&Name:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("ConstraintsDialog", "&Delete", nullptr));
        createButton->setText(QCoreApplication::translate("ConstraintsDialog", "C&reate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConstraintsDialog: public Ui_ConstraintsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTRAINTSDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'shortcuteditordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTCUTEDITORDIALOG_H
#define UI_SHORTCUTEDITORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ShortcutEditorDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QPushButton *importButton;
    QSpacerItem *spacerItem;
    QPushButton *addButton;
    QPushButton *removeButton;
    QTableView *tableView;
    QPushButton *removeAllButton;
    QPushButton *exportButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ShortcutEditorDialog)
    {
        if (ShortcutEditorDialog->objectName().isEmpty())
            ShortcutEditorDialog->setObjectName(QString::fromUtf8("ShortcutEditorDialog"));
        ShortcutEditorDialog->resize(557, 392);
        gridLayout = new QGridLayout(ShortcutEditorDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(ShortcutEditorDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        importButton = new QPushButton(groupBox);
        importButton->setObjectName(QString::fromUtf8("importButton"));

        gridLayout1->addWidget(importButton, 1, 1, 1, 1);

        spacerItem = new QSpacerItem(61, 33, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 1, 2, 1, 1);

        addButton = new QPushButton(groupBox);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        gridLayout1->addWidget(addButton, 1, 3, 1, 1);

        removeButton = new QPushButton(groupBox);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        gridLayout1->addWidget(removeButton, 1, 4, 1, 1);

        tableView = new QTableView(groupBox);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);

        gridLayout1->addWidget(tableView, 0, 0, 1, 6);

        removeAllButton = new QPushButton(groupBox);
        removeAllButton->setObjectName(QString::fromUtf8("removeAllButton"));

        gridLayout1->addWidget(removeAllButton, 1, 5, 1, 1);

        exportButton = new QPushButton(groupBox);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));

        gridLayout1->addWidget(exportButton, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(ShortcutEditorDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(ShortcutEditorDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), ShortcutEditorDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ShortcutEditorDialog);
    } // setupUi

    void retranslateUi(QDialog *ShortcutEditorDialog)
    {
        ShortcutEditorDialog->setWindowTitle(QCoreApplication::translate("ShortcutEditorDialog", "Editor Shortcuts", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ShortcutEditorDialog", "Define Editor Shortcuts", nullptr));
        importButton->setText(QCoreApplication::translate("ShortcutEditorDialog", "&Import...", nullptr));
        addButton->setText(QCoreApplication::translate("ShortcutEditorDialog", "&Add", nullptr));
        removeButton->setText(QCoreApplication::translate("ShortcutEditorDialog", "&Remove", nullptr));
        removeAllButton->setText(QCoreApplication::translate("ShortcutEditorDialog", "R&emove All", nullptr));
        exportButton->setText(QCoreApplication::translate("ShortcutEditorDialog", "E&xport...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShortcutEditorDialog: public Ui_ShortcutEditorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTCUTEDITORDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'vacuumdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VACUUMDIALOG_H
#define UI_VACUUMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_VacuumDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout1;
    QListWidget *tableList;
    QPushButton *tableButton;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout2;
    QPushButton *allButton;
    QSpacerItem *spacerItem1;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *VacuumDialog)
    {
        if (VacuumDialog->objectName().isEmpty())
            VacuumDialog->setObjectName(QString::fromUtf8("VacuumDialog"));
        VacuumDialog->resize(400, 537);
        gridLayout = new QGridLayout(VacuumDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_3 = new QGroupBox(VacuumDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout1 = new QGridLayout(groupBox_3);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        tableList = new QListWidget(groupBox_3);
        tableList->setObjectName(QString::fromUtf8("tableList"));
        tableList->setSelectionMode(QAbstractItemView::ExtendedSelection);

        gridLayout1->addWidget(tableList, 0, 0, 1, 2);

        tableButton = new QPushButton(groupBox_3);
        tableButton->setObjectName(QString::fromUtf8("tableButton"));

        gridLayout1->addWidget(tableButton, 1, 1, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(VacuumDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout2 = new QGridLayout(groupBox_2);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        allButton = new QPushButton(groupBox_2);
        allButton->setObjectName(QString::fromUtf8("allButton"));

        gridLayout2->addWidget(allButton, 1, 1, 1, 1);

        spacerItem1 = new QSpacerItem(141, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem1, 1, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout2->addWidget(label_2, 0, 0, 1, 2);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(VacuumDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(VacuumDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), VacuumDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VacuumDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(VacuumDialog);
    } // setupUi

    void retranslateUi(QDialog *VacuumDialog)
    {
        VacuumDialog->setWindowTitle(QCoreApplication::translate("VacuumDialog", "Vacuum Database", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("VacuumDialog", "Vacuum the Selected Objects", nullptr));
        tableButton->setText(QCoreApplication::translate("VacuumDialog", "&Vacuum", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("VacuumDialog", "Vacuum Database", nullptr));
        allButton->setText(QCoreApplication::translate("VacuumDialog", "Vacuum &All", nullptr));
        label_2->setText(QCoreApplication::translate("VacuumDialog", "Strip unused space from the database.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VacuumDialog: public Ui_VacuumDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VACUUMDIALOG_H

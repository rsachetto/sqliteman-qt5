/********************************************************************************
** Form generated from reading UI file 'analyzedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANALYZEDIALOG_H
#define UI_ANALYZEDIALOG_H

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

class Ui_AnalyzeDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout1;
    QListWidget *tableList;
    QPushButton *tableButton;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout2;
    QPushButton *allButton;
    QSpacerItem *spacerItem1;
    QLabel *label_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout3;
    QPushButton *dropButton;
    QSpacerItem *spacerItem2;
    QLabel *label;

    void setupUi(QDialog *AnalyzeDialog)
    {
        if (AnalyzeDialog->objectName().isEmpty())
            AnalyzeDialog->setObjectName(QString::fromUtf8("AnalyzeDialog"));
        AnalyzeDialog->resize(437, 536);
        gridLayout = new QGridLayout(AnalyzeDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_3 = new QGroupBox(AnalyzeDialog);
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


        gridLayout->addWidget(groupBox_3, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(AnalyzeDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);

        groupBox_2 = new QGroupBox(AnalyzeDialog);
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


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox = new QGroupBox(AnalyzeDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout3 = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        dropButton = new QPushButton(groupBox);
        dropButton->setObjectName(QString::fromUtf8("dropButton"));

        gridLayout3->addWidget(dropButton, 1, 1, 1, 1);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem2, 1, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout3->addWidget(label, 0, 0, 1, 2);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(AnalyzeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AnalyzeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AnalyzeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AnalyzeDialog);
    } // setupUi

    void retranslateUi(QDialog *AnalyzeDialog)
    {
        AnalyzeDialog->setWindowTitle(QCoreApplication::translate("AnalyzeDialog", "Analyze Database", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("AnalyzeDialog", "Compute Statistics for Selected Tables", nullptr));
        tableButton->setText(QCoreApplication::translate("AnalyzeDialog", "&Compute", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("AnalyzeDialog", "Compute All Statistics", nullptr));
        allButton->setText(QCoreApplication::translate("AnalyzeDialog", "Calculate &All", nullptr));
        label_2->setText(QCoreApplication::translate("AnalyzeDialog", "Recalculate the statistics for all objects in the DB.", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AnalyzeDialog", "Drop Statistics", nullptr));
        dropButton->setText(QCoreApplication::translate("AnalyzeDialog", "&Drop", nullptr));
        label->setText(QCoreApplication::translate("AnalyzeDialog", "<qt>Statistics for all objects in the database will be dropped.</qt>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnalyzeDialog: public Ui_AnalyzeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANALYZEDIALOG_H

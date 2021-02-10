/********************************************************************************
** Form generated from reading UI file 'populatordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POPULATORDIALOG_H
#define UI_POPULATORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PopulatorDialog
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *widget;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout2;
    QTableWidget *columnTable;
    QSpacerItem *spacerItem;
    QPushButton *populateButton;
    QCheckBox *constraintBox;
    QTextBrowser *textBrowser;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PopulatorDialog)
    {
        if (PopulatorDialog->objectName().isEmpty())
            PopulatorDialog->setObjectName(QString::fromUtf8("PopulatorDialog"));
        PopulatorDialog->resize(475, 468);
        gridLayout = new QGridLayout(PopulatorDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(PopulatorDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout1 = new QGridLayout(widget);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout->addWidget(label);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(1000);

        hboxLayout->addWidget(spinBox);


        gridLayout1->addLayout(hboxLayout, 0, 0, 1, 1);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout2 = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        columnTable = new QTableWidget(groupBox);
        if (columnTable->columnCount() < 3)
            columnTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        columnTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        columnTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        columnTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        columnTable->setObjectName(QString::fromUtf8("columnTable"));
        columnTable->setAlternatingRowColors(true);
        columnTable->setSelectionMode(QAbstractItemView::SingleSelection);
        columnTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        columnTable->setColumnCount(3);

        gridLayout2->addWidget(columnTable, 0, 0, 1, 1);


        gridLayout1->addWidget(groupBox, 2, 0, 1, 2);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 3, 0, 1, 1);

        populateButton = new QPushButton(widget);
        populateButton->setObjectName(QString::fromUtf8("populateButton"));

        gridLayout1->addWidget(populateButton, 3, 1, 1, 1);

        constraintBox = new QCheckBox(widget);
        constraintBox->setObjectName(QString::fromUtf8("constraintBox"));
        constraintBox->setChecked(true);

        gridLayout1->addWidget(constraintBox, 1, 0, 1, 1);

        splitter->addWidget(widget);
        textBrowser = new QTextBrowser(splitter);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setMinimumSize(QSize(0, 100));
        textBrowser->setMaximumSize(QSize(16777215, 100));
        splitter->addWidget(textBrowser);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(PopulatorDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(spinBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(PopulatorDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PopulatorDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PopulatorDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PopulatorDialog);
    } // setupUi

    void retranslateUi(QDialog *PopulatorDialog)
    {
        PopulatorDialog->setWindowTitle(QCoreApplication::translate("PopulatorDialog", "Populate Table", nullptr));
        label->setText(QCoreApplication::translate("PopulatorDialog", "Number of &Rows to Populate:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PopulatorDialog", "Column &Settings", nullptr));
        QTableWidgetItem *___qtablewidgetitem = columnTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("PopulatorDialog", "Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = columnTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("PopulatorDialog", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = columnTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("PopulatorDialog", "Configure", nullptr));
        populateButton->setText(QCoreApplication::translate("PopulatorDialog", "&Populate", nullptr));
        constraintBox->setText(QCoreApplication::translate("PopulatorDialog", "Continue on &Error", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PopulatorDialog: public Ui_PopulatorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPULATORDIALOG_H

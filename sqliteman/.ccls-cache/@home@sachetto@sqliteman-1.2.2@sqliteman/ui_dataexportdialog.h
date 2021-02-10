/********************************************************************************
** Form generated from reading UI file 'dataexportdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAEXPORTDIALOG_H
#define UI_DATAEXPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_DataExportDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QCheckBox *headerCheckBox;
    QComboBox *encodingBox;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *lineEndBox;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *hboxLayout;
    QLabel *label_2;
    QLineEdit *fileEdit;
    QPushButton *searchButton;
    QComboBox *formatBox;
    QLabel *label;
    QHBoxLayout *hboxLayout1;
    QLabel *label_3;
    QRadioButton *fileButton;
    QRadioButton *clipboardButton;

    void setupUi(QDialog *DataExportDialog)
    {
        if (DataExportDialog->objectName().isEmpty())
            DataExportDialog->setObjectName(QString::fromUtf8("DataExportDialog"));
        DataExportDialog->resize(336, 323);
        gridLayout = new QGridLayout(DataExportDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 4, 0, 1, 2);

        groupBox = new QGroupBox(DataExportDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        headerCheckBox = new QCheckBox(groupBox);
        headerCheckBox->setObjectName(QString::fromUtf8("headerCheckBox"));
        headerCheckBox->setChecked(true);

        gridLayout1->addWidget(headerCheckBox, 0, 0, 1, 2);

        encodingBox = new QComboBox(groupBox);
        encodingBox->setObjectName(QString::fromUtf8("encodingBox"));

        gridLayout1->addWidget(encodingBox, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout1->addWidget(label_4, 1, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout1->addWidget(label_5, 2, 0, 1, 1);

        lineEndBox = new QComboBox(groupBox);
        lineEndBox->setObjectName(QString::fromUtf8("lineEndBox"));

        gridLayout1->addWidget(lineEndBox, 2, 1, 1, 1);


        gridLayout->addWidget(groupBox, 3, 0, 1, 2);

        buttonBox = new QDialogButtonBox(DataExportDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_2 = new QLabel(DataExportDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout->addWidget(label_2);

        fileEdit = new QLineEdit(DataExportDialog);
        fileEdit->setObjectName(QString::fromUtf8("fileEdit"));

        hboxLayout->addWidget(fileEdit);

        searchButton = new QPushButton(DataExportDialog);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        hboxLayout->addWidget(searchButton);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 2);

        formatBox = new QComboBox(DataExportDialog);
        formatBox->setObjectName(QString::fromUtf8("formatBox"));

        gridLayout->addWidget(formatBox, 0, 1, 1, 1);

        label = new QLabel(DataExportDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_3 = new QLabel(DataExportDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout1->addWidget(label_3);

        fileButton = new QRadioButton(DataExportDialog);
        fileButton->setObjectName(QString::fromUtf8("fileButton"));
        fileButton->setChecked(true);

        hboxLayout1->addWidget(fileButton);

        clipboardButton = new QRadioButton(DataExportDialog);
        clipboardButton->setObjectName(QString::fromUtf8("clipboardButton"));

        hboxLayout1->addWidget(clipboardButton);


        gridLayout->addLayout(hboxLayout1, 1, 0, 1, 2);

#if QT_CONFIG(shortcut)
        label_4->setBuddy(encodingBox);
        label_5->setBuddy(lineEndBox);
        label->setBuddy(formatBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(formatBox, fileButton);
        QWidget::setTabOrder(fileButton, clipboardButton);
        QWidget::setTabOrder(clipboardButton, fileEdit);
        QWidget::setTabOrder(fileEdit, searchButton);
        QWidget::setTabOrder(searchButton, headerCheckBox);
        QWidget::setTabOrder(headerCheckBox, encodingBox);
        QWidget::setTabOrder(encodingBox, lineEndBox);
        QWidget::setTabOrder(lineEndBox, buttonBox);

        retranslateUi(DataExportDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), DataExportDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DataExportDialog);
    } // setupUi

    void retranslateUi(QDialog *DataExportDialog)
    {
        DataExportDialog->setWindowTitle(QCoreApplication::translate("DataExportDialog", "Export Data", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DataExportDialog", "Export Options", nullptr));
#if QT_CONFIG(tooltip)
        headerCheckBox->setToolTip(QCoreApplication::translate("DataExportDialog", "If it is checked the table header will be exported with the data too.", nullptr));
#endif // QT_CONFIG(tooltip)
        headerCheckBox->setText(QCoreApplication::translate("DataExportDialog", "&Export Headers Too", nullptr));
#if QT_CONFIG(tooltip)
        encodingBox->setToolTip(QCoreApplication::translate("DataExportDialog", "Specify the output encoding. UTF-8 is a good choice for most exports.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("DataExportDialog", "E&ncoding:", nullptr));
        label_5->setText(QCoreApplication::translate("DataExportDialog", "&Line End:", nullptr));
#if QT_CONFIG(tooltip)
        lineEndBox->setToolTip(QCoreApplication::translate("DataExportDialog", "You can choose the End of Line style here.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("DataExportDialog", "File:", nullptr));
        searchButton->setText(QCoreApplication::translate("DataExportDialog", "S&earch...", nullptr));
        label->setText(QCoreApplication::translate("DataExportDialog", "&Format:", nullptr));
        label_3->setText(QCoreApplication::translate("DataExportDialog", "Export to:", nullptr));
        fileButton->setText(QCoreApplication::translate("DataExportDialog", "F&ile", nullptr));
        clipboardButton->setText(QCoreApplication::translate("DataExportDialog", "Cli&pboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataExportDialog: public Ui_DataExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAEXPORTDIALOG_H

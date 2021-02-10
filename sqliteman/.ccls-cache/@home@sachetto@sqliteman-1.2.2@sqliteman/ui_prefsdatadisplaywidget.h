/********************************************************************************
** Form generated from reading UI file 'prefsdatadisplaywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFSDATADISPLAYWIDGET_H
#define UI_PREFSDATADISPLAYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrefsDataDisplayWidget
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QCheckBox *nullCheckBox;
    QPushButton *nullBgButton;
    QLabel *label;
    QLineEdit *nullAliasEdit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout2;
    QCheckBox *blobCheckBox;
    QPushButton *blobBgButton;
    QLabel *label_2;
    QLineEdit *blobAliasEdit;
    QCheckBox *cropColumnsCheckBox;
    QSpacerItem *spacerItem;
    QLabel *titleLabel;

    void setupUi(QWidget *PrefsDataDisplayWidget)
    {
        if (PrefsDataDisplayWidget->objectName().isEmpty())
            PrefsDataDisplayWidget->setObjectName(QString::fromUtf8("PrefsDataDisplayWidget"));
        PrefsDataDisplayWidget->resize(400, 300);
        gridLayout = new QGridLayout(PrefsDataDisplayWidget);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(PrefsDataDisplayWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        nullCheckBox = new QCheckBox(groupBox);
        nullCheckBox->setObjectName(QString::fromUtf8("nullCheckBox"));

        gridLayout1->addWidget(nullCheckBox, 0, 0, 1, 3);

        nullBgButton = new QPushButton(groupBox);
        nullBgButton->setObjectName(QString::fromUtf8("nullBgButton"));

        gridLayout1->addWidget(nullBgButton, 1, 2, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 1, 0, 1, 1);

        nullAliasEdit = new QLineEdit(groupBox);
        nullAliasEdit->setObjectName(QString::fromUtf8("nullAliasEdit"));

        gridLayout1->addWidget(nullAliasEdit, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(PrefsDataDisplayWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout2 = new QGridLayout(groupBox_2);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        blobCheckBox = new QCheckBox(groupBox_2);
        blobCheckBox->setObjectName(QString::fromUtf8("blobCheckBox"));

        gridLayout2->addWidget(blobCheckBox, 0, 0, 1, 3);

        blobBgButton = new QPushButton(groupBox_2);
        blobBgButton->setObjectName(QString::fromUtf8("blobBgButton"));

        gridLayout2->addWidget(blobBgButton, 1, 2, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout2->addWidget(label_2, 1, 0, 1, 1);

        blobAliasEdit = new QLineEdit(groupBox_2);
        blobAliasEdit->setObjectName(QString::fromUtf8("blobAliasEdit"));

        gridLayout2->addWidget(blobAliasEdit, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox_2, 2, 0, 1, 1);

        cropColumnsCheckBox = new QCheckBox(PrefsDataDisplayWidget);
        cropColumnsCheckBox->setObjectName(QString::fromUtf8("cropColumnsCheckBox"));

        gridLayout->addWidget(cropColumnsCheckBox, 3, 0, 1, 1);

        spacerItem = new QSpacerItem(419, 22, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 4, 0, 1, 1);

        titleLabel = new QLabel(PrefsDataDisplayWidget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);

        gridLayout->addWidget(titleLabel, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(nullAliasEdit);
        label_2->setBuddy(blobAliasEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(PrefsDataDisplayWidget);

        QMetaObject::connectSlotsByName(PrefsDataDisplayWidget);
    } // setupUi

    void retranslateUi(QWidget *PrefsDataDisplayWidget)
    {
        groupBox->setTitle(QCoreApplication::translate("PrefsDataDisplayWidget", "NULL handling", nullptr));
#if QT_CONFIG(tooltip)
        nullCheckBox->setToolTip(QCoreApplication::translate("PrefsDataDisplayWidget", "Highlight the NULL values in the data result table", nullptr));
#endif // QT_CONFIG(tooltip)
        nullCheckBox->setText(QCoreApplication::translate("PrefsDataDisplayWidget", "&Use NULL highlighting", nullptr));
#if QT_CONFIG(tooltip)
        nullBgButton->setToolTip(QCoreApplication::translate("PrefsDataDisplayWidget", "Background color of the NULL value cell", nullptr));
#endif // QT_CONFIG(tooltip)
        nullBgButton->setText(QCoreApplication::translate("PrefsDataDisplayWidget", "B&ackground", nullptr));
        label->setText(QCoreApplication::translate("PrefsDataDisplayWidget", "&NULL alias:", nullptr));
#if QT_CONFIG(tooltip)
        nullAliasEdit->setToolTip(QCoreApplication::translate("PrefsDataDisplayWidget", "Text to be used as a NULL mark", nullptr));
#endif // QT_CONFIG(tooltip)
        nullAliasEdit->setText(QCoreApplication::translate("PrefsDataDisplayWidget", "{null}", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("PrefsDataDisplayWidget", "BLOB handling", nullptr));
#if QT_CONFIG(tooltip)
        blobCheckBox->setToolTip(QCoreApplication::translate("PrefsDataDisplayWidget", "Highlight the BLOB values in the data result table", nullptr));
#endif // QT_CONFIG(tooltip)
        blobCheckBox->setText(QCoreApplication::translate("PrefsDataDisplayWidget", "&Use BLOB highlighting", nullptr));
#if QT_CONFIG(tooltip)
        blobBgButton->setToolTip(QCoreApplication::translate("PrefsDataDisplayWidget", "Background color of the BLOB value cell", nullptr));
#endif // QT_CONFIG(tooltip)
        blobBgButton->setText(QCoreApplication::translate("PrefsDataDisplayWidget", "Ba&ckground", nullptr));
        label_2->setText(QCoreApplication::translate("PrefsDataDisplayWidget", "&BLOB alias:", nullptr));
#if QT_CONFIG(tooltip)
        blobAliasEdit->setToolTip(QCoreApplication::translate("PrefsDataDisplayWidget", "Text to be used as a BLOB mark", nullptr));
#endif // QT_CONFIG(tooltip)
        blobAliasEdit->setText(QCoreApplication::translate("PrefsDataDisplayWidget", "{blob}", nullptr));
        cropColumnsCheckBox->setText(QCoreApplication::translate("PrefsDataDisplayWidget", "Limit Text Length Display", nullptr));
        titleLabel->setText(QCoreApplication::translate("PrefsDataDisplayWidget", "Data Display", nullptr));
        (void)PrefsDataDisplayWidget;
    } // retranslateUi

};

namespace Ui {
    class PrefsDataDisplayWidget: public Ui_PrefsDataDisplayWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFSDATADISPLAYWIDGET_H

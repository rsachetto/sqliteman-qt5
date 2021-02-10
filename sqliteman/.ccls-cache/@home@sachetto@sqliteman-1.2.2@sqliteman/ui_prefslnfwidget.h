/********************************************************************************
** Form generated from reading UI file 'prefslnfwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFSLNFWIDGET_H
#define UI_PREFSLNFWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrefsLNFWidget
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout1;
    QComboBox *styleComboBox;
    QLabel *label_3;
    QComboBox *languageComboBox;
    QLabel *textLabel3;
    QHBoxLayout *hboxLayout;
    QLabel *label_4;
    QSpinBox *recentlyUsedSpinBox;
    QSpacerItem *spacerItem;
    QLabel *titleLabel;
    QCheckBox *openLastDBCheckBox;
    QCheckBox *openLastSqlFileCheckBox;

    void setupUi(QWidget *PrefsLNFWidget)
    {
        if (PrefsLNFWidget->objectName().isEmpty())
            PrefsLNFWidget->setObjectName(QString::fromUtf8("PrefsLNFWidget"));
        PrefsLNFWidget->resize(400, 300);
        gridLayout = new QGridLayout(PrefsLNFWidget);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_3 = new QGroupBox(PrefsLNFWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout1 = new QGridLayout(groupBox_3);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        styleComboBox = new QComboBox(groupBox_3);
        styleComboBox->setObjectName(QString::fromUtf8("styleComboBox"));

        gridLayout1->addWidget(styleComboBox, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout1->addWidget(label_3, 0, 0, 1, 1);

        languageComboBox = new QComboBox(groupBox_3);
        languageComboBox->setObjectName(QString::fromUtf8("languageComboBox"));

        gridLayout1->addWidget(languageComboBox, 0, 1, 1, 1);

        textLabel3 = new QLabel(groupBox_3);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

        gridLayout1->addWidget(textLabel3, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox_3, 1, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_4 = new QLabel(PrefsLNFWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        hboxLayout->addWidget(label_4);

        recentlyUsedSpinBox = new QSpinBox(PrefsLNFWidget);
        recentlyUsedSpinBox->setObjectName(QString::fromUtf8("recentlyUsedSpinBox"));
        recentlyUsedSpinBox->setMinimum(1);
        recentlyUsedSpinBox->setValue(5);

        hboxLayout->addWidget(recentlyUsedSpinBox);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 1);

        spacerItem = new QSpacerItem(304, 144, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 5, 0, 1, 1);

        titleLabel = new QLabel(PrefsLNFWidget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);

        gridLayout->addWidget(titleLabel, 0, 0, 1, 1);

        openLastDBCheckBox = new QCheckBox(PrefsLNFWidget);
        openLastDBCheckBox->setObjectName(QString::fromUtf8("openLastDBCheckBox"));

        gridLayout->addWidget(openLastDBCheckBox, 3, 0, 1, 1);

        openLastSqlFileCheckBox = new QCheckBox(PrefsLNFWidget);
        openLastSqlFileCheckBox->setObjectName(QString::fromUtf8("openLastSqlFileCheckBox"));

        gridLayout->addWidget(openLastSqlFileCheckBox, 4, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label_3->setBuddy(languageComboBox);
        textLabel3->setBuddy(styleComboBox);
        label_4->setBuddy(recentlyUsedSpinBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(PrefsLNFWidget);

        QMetaObject::connectSlotsByName(PrefsLNFWidget);
    } // setupUi

    void retranslateUi(QWidget *PrefsLNFWidget)
    {
        groupBox_3->setTitle(QCoreApplication::translate("PrefsLNFWidget", "These features require application restart", nullptr));
#if QT_CONFIG(tooltip)
        styleComboBox->setToolTip(QCoreApplication::translate("PrefsLNFWidget", "Select the application look/GUI theme", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("PrefsLNFWidget", "GUI &Language:", nullptr));
#if QT_CONFIG(tooltip)
        languageComboBox->setToolTip(QCoreApplication::translate("PrefsLNFWidget", "Select the application interface language", nullptr));
#endif // QT_CONFIG(tooltip)
        textLabel3->setText(QCoreApplication::translate("PrefsLNFWidget", "GUI &Style:", nullptr));
        label_4->setText(QCoreApplication::translate("PrefsLNFWidget", "&Recently Used Databases:", nullptr));
#if QT_CONFIG(tooltip)
        recentlyUsedSpinBox->setToolTip(QCoreApplication::translate("PrefsLNFWidget", "Count of the items in the Recent menu", nullptr));
#endif // QT_CONFIG(tooltip)
        titleLabel->setText(QCoreApplication::translate("PrefsLNFWidget", "Look and Feel", nullptr));
#if QT_CONFIG(tooltip)
        openLastDBCheckBox->setToolTip(QCoreApplication::translate("PrefsLNFWidget", "Remember the last used database for next application start", nullptr));
#endif // QT_CONFIG(tooltip)
        openLastDBCheckBox->setText(QCoreApplication::translate("PrefsLNFWidget", "Ope&n Last Database on Start", nullptr));
        openLastSqlFileCheckBox->setText(QCoreApplication::translate("PrefsLNFWidget", "Open Last SQL Document on Start", nullptr));
        (void)PrefsLNFWidget;
    } // retranslateUi

};

namespace Ui {
    class PrefsLNFWidget: public Ui_PrefsLNFWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFSLNFWIDGET_H

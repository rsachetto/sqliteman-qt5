/********************************************************************************
** Form generated from reading UI file 'prefssqleditorwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFSSQLEDITORWIDGET_H
#define UI_PREFSSQLEDITORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "sqleditorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_PrefsSQLEditorWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *titleLabel;
    QHBoxLayout *hboxLayout;
    QLabel *label_5;
    QFontComboBox *fontComboBox;
    QSpinBox *fontSizeSpin;
    QCheckBox *useActiveHighlightCheckBox;
    QPushButton *activeHighlightButton;
    QCheckBox *useTextWidthMarkCheckBox;
    QSpinBox *textWidthMarkSpinBox;
    QCheckBox *useCompletionCheck;
    QSpinBox *completionLengthBox;
    QCheckBox *useShortcutsBox;
    QPushButton *shortcutsButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    SqlEditorWidget *syntaxPreviewEdit;
    QPushButton *syDefaultButton;
    QPushButton *syKeywordButton;
    QPushButton *syNumberButton;
    QPushButton *syStringButton;
    QPushButton *syCommentButton;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *PrefsSQLEditorWidget)
    {
        if (PrefsSQLEditorWidget->objectName().isEmpty())
            PrefsSQLEditorWidget->setObjectName(QString::fromUtf8("PrefsSQLEditorWidget"));
        PrefsSQLEditorWidget->resize(423, 524);
        gridLayout = new QGridLayout(PrefsSQLEditorWidget);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        titleLabel = new QLabel(PrefsSQLEditorWidget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);

        gridLayout->addWidget(titleLabel, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_5 = new QLabel(PrefsSQLEditorWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        hboxLayout->addWidget(label_5);

        fontComboBox = new QFontComboBox(PrefsSQLEditorWidget);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fontComboBox->sizePolicy().hasHeightForWidth());
        fontComboBox->setSizePolicy(sizePolicy);
        fontComboBox->setEditable(false);
        fontComboBox->setFontFilters(QFontComboBox::MonospacedFonts);

        hboxLayout->addWidget(fontComboBox);

        fontSizeSpin = new QSpinBox(PrefsSQLEditorWidget);
        fontSizeSpin->setObjectName(QString::fromUtf8("fontSizeSpin"));
        fontSizeSpin->setMinimum(8);

        hboxLayout->addWidget(fontSizeSpin);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 2);

        useActiveHighlightCheckBox = new QCheckBox(PrefsSQLEditorWidget);
        useActiveHighlightCheckBox->setObjectName(QString::fromUtf8("useActiveHighlightCheckBox"));

        gridLayout->addWidget(useActiveHighlightCheckBox, 2, 0, 1, 1);

        activeHighlightButton = new QPushButton(PrefsSQLEditorWidget);
        activeHighlightButton->setObjectName(QString::fromUtf8("activeHighlightButton"));

        gridLayout->addWidget(activeHighlightButton, 2, 1, 1, 1);

        useTextWidthMarkCheckBox = new QCheckBox(PrefsSQLEditorWidget);
        useTextWidthMarkCheckBox->setObjectName(QString::fromUtf8("useTextWidthMarkCheckBox"));

        gridLayout->addWidget(useTextWidthMarkCheckBox, 3, 0, 1, 1);

        textWidthMarkSpinBox = new QSpinBox(PrefsSQLEditorWidget);
        textWidthMarkSpinBox->setObjectName(QString::fromUtf8("textWidthMarkSpinBox"));
        textWidthMarkSpinBox->setMaximum(139);
        textWidthMarkSpinBox->setMinimum(1);
        textWidthMarkSpinBox->setValue(75);

        gridLayout->addWidget(textWidthMarkSpinBox, 3, 1, 1, 1);

        useCompletionCheck = new QCheckBox(PrefsSQLEditorWidget);
        useCompletionCheck->setObjectName(QString::fromUtf8("useCompletionCheck"));

        gridLayout->addWidget(useCompletionCheck, 4, 0, 1, 1);

        completionLengthBox = new QSpinBox(PrefsSQLEditorWidget);
        completionLengthBox->setObjectName(QString::fromUtf8("completionLengthBox"));
        completionLengthBox->setMinimum(1);
        completionLengthBox->setValue(3);

        gridLayout->addWidget(completionLengthBox, 4, 1, 1, 1);

        useShortcutsBox = new QCheckBox(PrefsSQLEditorWidget);
        useShortcutsBox->setObjectName(QString::fromUtf8("useShortcutsBox"));

        gridLayout->addWidget(useShortcutsBox, 5, 0, 1, 1);

        shortcutsButton = new QPushButton(PrefsSQLEditorWidget);
        shortcutsButton->setObjectName(QString::fromUtf8("shortcutsButton"));

        gridLayout->addWidget(shortcutsButton, 5, 1, 1, 1);

        groupBox = new QGroupBox(PrefsSQLEditorWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        syntaxPreviewEdit = new SqlEditorWidget(groupBox);
        syntaxPreviewEdit->setObjectName(QString::fromUtf8("syntaxPreviewEdit"));
        syntaxPreviewEdit->setReadOnly(true);

        gridLayout1->addWidget(syntaxPreviewEdit, 0, 0, 5, 1);

        syDefaultButton = new QPushButton(groupBox);
        syDefaultButton->setObjectName(QString::fromUtf8("syDefaultButton"));

        gridLayout1->addWidget(syDefaultButton, 0, 1, 1, 1);

        syKeywordButton = new QPushButton(groupBox);
        syKeywordButton->setObjectName(QString::fromUtf8("syKeywordButton"));

        gridLayout1->addWidget(syKeywordButton, 1, 1, 1, 1);

        syNumberButton = new QPushButton(groupBox);
        syNumberButton->setObjectName(QString::fromUtf8("syNumberButton"));

        gridLayout1->addWidget(syNumberButton, 2, 1, 1, 1);

        syStringButton = new QPushButton(groupBox);
        syStringButton->setObjectName(QString::fromUtf8("syStringButton"));

        gridLayout1->addWidget(syStringButton, 3, 1, 1, 1);

        syCommentButton = new QPushButton(groupBox);
        syCommentButton->setObjectName(QString::fromUtf8("syCommentButton"));

        gridLayout1->addWidget(syCommentButton, 4, 1, 1, 1);


        gridLayout->addWidget(groupBox, 6, 0, 1, 2);

        spacerItem = new QSpacerItem(381, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 7, 0, 1, 2);

#if QT_CONFIG(shortcut)
        label_5->setBuddy(fontComboBox);
#endif // QT_CONFIG(shortcut)

        retranslateUi(PrefsSQLEditorWidget);

        QMetaObject::connectSlotsByName(PrefsSQLEditorWidget);
    } // setupUi

    void retranslateUi(QWidget *PrefsSQLEditorWidget)
    {
        titleLabel->setText(QCoreApplication::translate("PrefsSQLEditorWidget", "SQL Editor", nullptr));
        label_5->setText(QCoreApplication::translate("PrefsSQLEditorWidget", "&Font:", nullptr));
        fontSizeSpin->setSuffix(QCoreApplication::translate("PrefsSQLEditorWidget", " pt", nullptr));
        useActiveHighlightCheckBox->setText(QCoreApplication::translate("PrefsSQLEditorWidget", "Use &Active Line Highlighting:", nullptr));
        activeHighlightButton->setText(QCoreApplication::translate("PrefsSQLEditorWidget", "Color...", nullptr));
        useTextWidthMarkCheckBox->setText(QCoreApplication::translate("PrefsSQLEditorWidget", "Use &Maximum Text Width Mark:", nullptr));
        useCompletionCheck->setText(QCoreApplication::translate("PrefsSQLEditorWidget", "Use &Code Completion With Length:", nullptr));
        useShortcutsBox->setText(QCoreApplication::translate("PrefsSQLEditorWidget", "Use Editor &Shortcuts:", nullptr));
        shortcutsButton->setText(QCoreApplication::translate("PrefsSQLEditorWidget", "&Define...", nullptr));
        groupBox->setTitle(QCoreApplication::translate("PrefsSQLEditorWidget", "Syntax Colors", nullptr));
        syDefaultButton->setText(QCoreApplication::translate("PrefsSQLEditorWidget", "Default...", nullptr));
        syKeywordButton->setText(QCoreApplication::translate("PrefsSQLEditorWidget", "Keywords...", nullptr));
        syNumberButton->setText(QCoreApplication::translate("PrefsSQLEditorWidget", "Numbers...", nullptr));
        syStringButton->setText(QCoreApplication::translate("PrefsSQLEditorWidget", "Strings...", nullptr));
        syCommentButton->setText(QCoreApplication::translate("PrefsSQLEditorWidget", "Comments...", nullptr));
        (void)PrefsSQLEditorWidget;
    } // retranslateUi

};

namespace Ui {
    class PrefsSQLEditorWidget: public Ui_PrefsSQLEditorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFSSQLEDITORWIDGET_H

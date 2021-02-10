/********************************************************************************
** Form generated from reading UI file 'sqldelegateui.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQLDELEGATEUI_H
#define UI_SQLDELEGATEUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SqlDelegateUi
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLineEdit *lineEdit;
    QToolButton *nullButton;
    QToolButton *editButton;

    void setupUi(QWidget *SqlDelegateUi)
    {
        if (SqlDelegateUi->objectName().isEmpty())
            SqlDelegateUi->setObjectName(QString::fromUtf8("SqlDelegateUi"));
        SqlDelegateUi->resize(402, 48);
        gridLayout = new QGridLayout(SqlDelegateUi);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(0);
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lineEdit = new QLineEdit(SqlDelegateUi);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        hboxLayout->addWidget(lineEdit);

        nullButton = new QToolButton(SqlDelegateUi);
        nullButton->setObjectName(QString::fromUtf8("nullButton"));

        hboxLayout->addWidget(nullButton);

        editButton = new QToolButton(SqlDelegateUi);
        editButton->setObjectName(QString::fromUtf8("editButton"));

        hboxLayout->addWidget(editButton);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        QWidget::setTabOrder(lineEdit, nullButton);
        QWidget::setTabOrder(nullButton, editButton);

        retranslateUi(SqlDelegateUi);

        QMetaObject::connectSlotsByName(SqlDelegateUi);
    } // setupUi

    void retranslateUi(QWidget *SqlDelegateUi)
    {
#if QT_CONFIG(tooltip)
        lineEdit->setToolTip(QCoreApplication::translate("SqlDelegateUi", "Edit data here", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        nullButton->setToolTip(QCoreApplication::translate("SqlDelegateUi", "Set value to the NULL", nullptr));
#endif // QT_CONFIG(tooltip)
        nullButton->setText(QCoreApplication::translate("SqlDelegateUi", "&N", nullptr));
#if QT_CONFIG(shortcut)
        nullButton->setShortcut(QCoreApplication::translate("SqlDelegateUi", "Ctrl+Shift+N", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        editButton->setToolTip(QCoreApplication::translate("SqlDelegateUi", "Open multiline editor", nullptr));
#endif // QT_CONFIG(tooltip)
        editButton->setText(QCoreApplication::translate("SqlDelegateUi", "&E", nullptr));
#if QT_CONFIG(shortcut)
        editButton->setShortcut(QCoreApplication::translate("SqlDelegateUi", "Ctrl+Shift+E", nullptr));
#endif // QT_CONFIG(shortcut)
        (void)SqlDelegateUi;
    } // retranslateUi

};

namespace Ui {
    class SqlDelegateUi: public Ui_SqlDelegateUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQLDELEGATEUI_H

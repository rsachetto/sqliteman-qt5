/********************************************************************************
** Form generated from reading UI file 'sqlitemview.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQLITEMVIEW_H
#define UI_SQLITEMVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SqlItemView
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollWidget;
    QGridLayout *gridLayout1;
    QPushButton *firstButton;
    QPushButton *previousButton;
    QPushButton *nextButton;
    QPushButton *lastButton;
    QSpacerItem *spacerItem;
    QLabel *positionLabel;

    void setupUi(QWidget *SqlItemView)
    {
        if (SqlItemView->objectName().isEmpty())
            SqlItemView->setObjectName(QString::fromUtf8("SqlItemView"));
        SqlItemView->resize(400, 300);
        gridLayout = new QGridLayout(SqlItemView);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollWidget = new QScrollArea(SqlItemView);
        scrollWidget->setObjectName(QString::fromUtf8("scrollWidget"));
        gridLayout1 = new QGridLayout(scrollWidget);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));

        gridLayout->addWidget(scrollWidget, 0, 0, 6, 1);

        firstButton = new QPushButton(SqlItemView);
        firstButton->setObjectName(QString::fromUtf8("firstButton"));

        gridLayout->addWidget(firstButton, 0, 1, 1, 1);

        previousButton = new QPushButton(SqlItemView);
        previousButton->setObjectName(QString::fromUtf8("previousButton"));

        gridLayout->addWidget(previousButton, 1, 1, 1, 1);

        nextButton = new QPushButton(SqlItemView);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));

        gridLayout->addWidget(nextButton, 3, 1, 1, 1);

        lastButton = new QPushButton(SqlItemView);
        lastButton->setObjectName(QString::fromUtf8("lastButton"));

        gridLayout->addWidget(lastButton, 4, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 5, 1, 1, 1);

        positionLabel = new QLabel(SqlItemView);
        positionLabel->setObjectName(QString::fromUtf8("positionLabel"));
        positionLabel->setFrameShape(QFrame::Box);

        gridLayout->addWidget(positionLabel, 2, 1, 1, 1);


        retranslateUi(SqlItemView);

        QMetaObject::connectSlotsByName(SqlItemView);
    } // setupUi

    void retranslateUi(QWidget *SqlItemView)
    {
        SqlItemView->setWindowTitle(QCoreApplication::translate("SqlItemView", "Form", nullptr));
#if QT_CONFIG(tooltip)
        firstButton->setToolTip(QCoreApplication::translate("SqlItemView", "Move to the first record", nullptr));
#endif // QT_CONFIG(tooltip)
        firstButton->setText(QCoreApplication::translate("SqlItemView", "<<", nullptr));
#if QT_CONFIG(tooltip)
        previousButton->setToolTip(QCoreApplication::translate("SqlItemView", "Move to the previous record", nullptr));
#endif // QT_CONFIG(tooltip)
        previousButton->setText(QCoreApplication::translate("SqlItemView", "<", nullptr));
#if QT_CONFIG(tooltip)
        nextButton->setToolTip(QCoreApplication::translate("SqlItemView", "Move to the next record", nullptr));
#endif // QT_CONFIG(tooltip)
        nextButton->setText(QCoreApplication::translate("SqlItemView", ">", nullptr));
#if QT_CONFIG(tooltip)
        lastButton->setToolTip(QCoreApplication::translate("SqlItemView", "Move to the last record", nullptr));
#endif // QT_CONFIG(tooltip)
        lastButton->setText(QCoreApplication::translate("SqlItemView", ">>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SqlItemView: public Ui_SqlItemView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQLITEMVIEW_H

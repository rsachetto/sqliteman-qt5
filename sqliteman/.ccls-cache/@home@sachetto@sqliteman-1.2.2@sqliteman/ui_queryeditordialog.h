/********************************************************************************
** Form generated from reading UI file 'queryeditordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYEDITORDIALOG_H
#define UI_QUERYEDITORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QueryEditorDialog
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *tableList;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QListView *columnView;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *addAllButton;
    QPushButton *addButton;
    QPushButton *removeButton;
    QPushButton *removeAllButton;
    QSpacerItem *verticalSpacer;
    QListView *selectView;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QRadioButton *andButton;
    QRadioButton *orButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *moreButton;
    QPushButton *lessButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QueryEditorDialog)
    {
        if (QueryEditorDialog->objectName().isEmpty())
            QueryEditorDialog->setObjectName(QString::fromUtf8("QueryEditorDialog"));
        QueryEditorDialog->resize(388, 398);
        gridLayout_2 = new QGridLayout(QueryEditorDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(QueryEditorDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        tableList = new QComboBox(QueryEditorDialog);
        tableList->setObjectName(QString::fromUtf8("tableList"));

        horizontalLayout->addWidget(tableList);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        tabWidget = new QTabWidget(QueryEditorDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setGeometry(QRect(0, 0, 368, 269));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        columnView = new QListView(tab);
        columnView->setObjectName(QString::fromUtf8("columnView"));
        columnView->setSelectionMode(QAbstractItemView::MultiSelection);

        gridLayout->addWidget(columnView, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        addAllButton = new QPushButton(tab);
        addAllButton->setObjectName(QString::fromUtf8("addAllButton"));

        verticalLayout->addWidget(addAllButton);

        addButton = new QPushButton(tab);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        verticalLayout->addWidget(addButton);

        removeButton = new QPushButton(tab);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        verticalLayout->addWidget(removeButton);

        removeAllButton = new QPushButton(tab);
        removeAllButton->setObjectName(QString::fromUtf8("removeAllButton"));

        verticalLayout->addWidget(removeAllButton);

        verticalSpacer = new QSpacerItem(20, 27, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        selectView = new QListView(tab);
        selectView->setObjectName(QString::fromUtf8("selectView"));
        selectView->setSelectionMode(QAbstractItemView::MultiSelection);

        gridLayout->addWidget(selectView, 0, 2, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tab_2->setGeometry(QRect(0, 0, 368, 269));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        andButton = new QRadioButton(tab_2);
        andButton->setObjectName(QString::fromUtf8("andButton"));
        andButton->setChecked(true);

        gridLayout_3->addWidget(andButton, 0, 0, 1, 1);

        orButton = new QRadioButton(tab_2);
        orButton->setObjectName(QString::fromUtf8("orButton"));

        gridLayout_3->addWidget(orButton, 1, 0, 1, 1);

        scrollArea = new QScrollArea(tab_2);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 354, 157));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_3->addWidget(scrollArea, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(284, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        moreButton = new QPushButton(tab_2);
        moreButton->setObjectName(QString::fromUtf8("moreButton"));

        horizontalLayout_2->addWidget(moreButton);

        lessButton = new QPushButton(tab_2);
        lessButton->setObjectName(QString::fromUtf8("lessButton"));
        lessButton->setEnabled(false);

        horizontalLayout_2->addWidget(lessButton);


        gridLayout_3->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_2->addWidget(tabWidget, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(QueryEditorDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(QueryEditorDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QueryEditorDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QueryEditorDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QueryEditorDialog);
    } // setupUi

    void retranslateUi(QDialog *QueryEditorDialog)
    {
        QueryEditorDialog->setWindowTitle(QCoreApplication::translate("QueryEditorDialog", "Build Query", nullptr));
        label->setText(QCoreApplication::translate("QueryEditorDialog", "Table to Query:", nullptr));
        addAllButton->setText(QCoreApplication::translate("QueryEditorDialog", ">>", nullptr));
        addButton->setText(QCoreApplication::translate("QueryEditorDialog", ">", nullptr));
        removeButton->setText(QCoreApplication::translate("QueryEditorDialog", "<", nullptr));
        removeAllButton->setText(QCoreApplication::translate("QueryEditorDialog", "<<", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("QueryEditorDialog", "Fields", nullptr));
        andButton->setText(QCoreApplication::translate("QueryEditorDialog", "Match all of the following terms", nullptr));
        orButton->setText(QCoreApplication::translate("QueryEditorDialog", "Match any of the following terms", nullptr));
        moreButton->setText(QCoreApplication::translate("QueryEditorDialog", "More", nullptr));
        lessButton->setText(QCoreApplication::translate("QueryEditorDialog", "Less", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("QueryEditorDialog", "Terms", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QueryEditorDialog: public Ui_QueryEditorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYEDITORDIALOG_H

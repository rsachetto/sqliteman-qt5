/********************************************************************************
** Form generated from reading UI file 'blobpreviewwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOBPREVIEWWIDGET_H
#define UI_BLOBPREVIEWWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlobPreviewWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *m_blobPreview;
    QLabel *m_blobSize;

    void setupUi(QWidget *BlobPreviewWidget)
    {
        if (BlobPreviewWidget->objectName().isEmpty())
            BlobPreviewWidget->setObjectName(QString::fromUtf8("BlobPreviewWidget"));
        BlobPreviewWidget->resize(145, 240);
        gridLayout = new QGridLayout(BlobPreviewWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_blobPreview = new QLabel(BlobPreviewWidget);
        m_blobPreview->setObjectName(QString::fromUtf8("m_blobPreview"));
        m_blobPreview->setFrameShape(QFrame::Box);
        m_blobPreview->setAlignment(Qt::AlignCenter);
        m_blobPreview->setWordWrap(true);

        gridLayout->addWidget(m_blobPreview, 0, 0, 1, 1);

        m_blobSize = new QLabel(BlobPreviewWidget);
        m_blobSize->setObjectName(QString::fromUtf8("m_blobSize"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_blobSize->sizePolicy().hasHeightForWidth());
        m_blobSize->setSizePolicy(sizePolicy);
        m_blobSize->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout->addWidget(m_blobSize, 1, 0, 1, 1);


        retranslateUi(BlobPreviewWidget);

        QMetaObject::connectSlotsByName(BlobPreviewWidget);
    } // setupUi

    void retranslateUi(QWidget *BlobPreviewWidget)
    {
        BlobPreviewWidget->setWindowTitle(QCoreApplication::translate("BlobPreviewWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BlobPreviewWidget: public Ui_BlobPreviewWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOBPREVIEWWIDGET_H

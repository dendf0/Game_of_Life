/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_12;
    QCheckBox *checkBox_13;
    QCheckBox *checkBox_14;
    QCheckBox *checkBox_15;
    QCheckBox *checkBox_16;
    QCheckBox *checkBox_17;
    QCheckBox *checkBox_18;
    QPushButton *pushButton_5;
    QHBoxLayout *horizontalLayout_2;
    QSlider *verticalSlider;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    GLWidget *widget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(743, 618);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(1000, 1000));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_2);

        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        formLayout->setWidget(1, QFormLayout::LabelRole, checkBox);

        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, checkBox_2);

        checkBox_3 = new QCheckBox(centralwidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, checkBox_3);

        checkBox_4 = new QCheckBox(centralwidget);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        formLayout->setWidget(2, QFormLayout::FieldRole, checkBox_4);

        checkBox_5 = new QCheckBox(centralwidget);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, checkBox_5);

        checkBox_6 = new QCheckBox(centralwidget);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

        formLayout->setWidget(3, QFormLayout::FieldRole, checkBox_6);

        checkBox_7 = new QCheckBox(centralwidget);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));

        formLayout->setWidget(4, QFormLayout::LabelRole, checkBox_7);

        checkBox_8 = new QCheckBox(centralwidget);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));

        formLayout->setWidget(4, QFormLayout::FieldRole, checkBox_8);

        checkBox_9 = new QCheckBox(centralwidget);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));

        formLayout->setWidget(5, QFormLayout::LabelRole, checkBox_9);

        checkBox_10 = new QCheckBox(centralwidget);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));

        formLayout->setWidget(5, QFormLayout::FieldRole, checkBox_10);

        checkBox_11 = new QCheckBox(centralwidget);
        checkBox_11->setObjectName(QString::fromUtf8("checkBox_11"));

        formLayout->setWidget(6, QFormLayout::LabelRole, checkBox_11);

        checkBox_12 = new QCheckBox(centralwidget);
        checkBox_12->setObjectName(QString::fromUtf8("checkBox_12"));

        formLayout->setWidget(6, QFormLayout::FieldRole, checkBox_12);

        checkBox_13 = new QCheckBox(centralwidget);
        checkBox_13->setObjectName(QString::fromUtf8("checkBox_13"));

        formLayout->setWidget(7, QFormLayout::LabelRole, checkBox_13);

        checkBox_14 = new QCheckBox(centralwidget);
        checkBox_14->setObjectName(QString::fromUtf8("checkBox_14"));

        formLayout->setWidget(7, QFormLayout::FieldRole, checkBox_14);

        checkBox_15 = new QCheckBox(centralwidget);
        checkBox_15->setObjectName(QString::fromUtf8("checkBox_15"));

        formLayout->setWidget(8, QFormLayout::LabelRole, checkBox_15);

        checkBox_16 = new QCheckBox(centralwidget);
        checkBox_16->setObjectName(QString::fromUtf8("checkBox_16"));

        formLayout->setWidget(8, QFormLayout::FieldRole, checkBox_16);

        checkBox_17 = new QCheckBox(centralwidget);
        checkBox_17->setObjectName(QString::fromUtf8("checkBox_17"));

        formLayout->setWidget(9, QFormLayout::LabelRole, checkBox_17);

        checkBox_18 = new QCheckBox(centralwidget);
        checkBox_18->setObjectName(QString::fromUtf8("checkBox_18"));

        formLayout->setWidget(9, QFormLayout::FieldRole, checkBox_18);


        verticalLayout->addLayout(formLayout);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalSlider = new QSlider(centralwidget);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(verticalSlider->sizePolicy().hasHeightForWidth());
        verticalSlider->setSizePolicy(sizePolicy1);
        verticalSlider->setMinimum(1);
        verticalSlider->setMaximum(20);
        verticalSlider->setPageStep(1);
        verticalSlider->setOrientation(Qt::Vertical);

        horizontalLayout_2->addWidget(verticalSlider);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);

        widget = new GLWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(800, 800));
        widget->setMaximumSize(QSize(800, 800));

        horizontalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "John Conway's Game of Life", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\223\320\273\320\260\320\271\320\264\320\265\321\200", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\237\321\203\321\210\320\272\320\260 \320\223\320\273\320\260\320\271\320\264\320\265\321\200\320\276\320\262", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\240\320\276\320\266\320\264\320\265\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\266\320\270\320\262\320\260\320\275\320\270\320\265", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        checkBox_5->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        checkBox_6->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        checkBox_7->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        checkBox_8->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        checkBox_9->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        checkBox_10->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        checkBox_11->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        checkBox_12->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        checkBox_13->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        checkBox_14->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        checkBox_15->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        checkBox_16->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        checkBox_17->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        checkBox_18->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\250\320\260\320\263", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

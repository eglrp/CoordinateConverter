/********************************************************************************
** Form generated from reading UI file 'coordinateconverter.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COORDINATECONVERTER_H
#define UI_COORDINATECONVERTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CoordinateConverterClass
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_Latitude;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_Longitude;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit_X;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *lineEdit_Y;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_WtoB;

    void setupUi(QMainWindow *CoordinateConverterClass)
    {
        if (CoordinateConverterClass->objectName().isEmpty())
            CoordinateConverterClass->setObjectName(QStringLiteral("CoordinateConverterClass"));
        CoordinateConverterClass->resize(527, 168);
        centralWidget = new QWidget(CoordinateConverterClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 181, 131));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 160, 101));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_Latitude = new QLineEdit(verticalLayoutWidget);
        lineEdit_Latitude->setObjectName(QStringLiteral("lineEdit_Latitude"));

        horizontalLayout->addWidget(lineEdit_Latitude);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_Longitude = new QLineEdit(verticalLayoutWidget);
        lineEdit_Longitude->setObjectName(QStringLiteral("lineEdit_Longitude"));

        horizontalLayout_2->addWidget(lineEdit_Longitude);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_2);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(330, 20, 181, 131));
        verticalLayoutWidget_2 = new QWidget(groupBox_2);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 20, 160, 101));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        lineEdit_X = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_X->setObjectName(QStringLiteral("lineEdit_X"));

        horizontalLayout_3->addWidget(lineEdit_X);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        lineEdit_Y = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_Y->setObjectName(QStringLiteral("lineEdit_Y"));

        horizontalLayout_4->addWidget(lineEdit_Y);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalLayoutWidget_3 = new QWidget(centralWidget);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(220, 40, 77, 101));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_WtoB = new QPushButton(verticalLayoutWidget_3);
        pushButton_WtoB->setObjectName(QStringLiteral("pushButton_WtoB"));

        verticalLayout_3->addWidget(pushButton_WtoB);

        CoordinateConverterClass->setCentralWidget(centralWidget);

        retranslateUi(CoordinateConverterClass);
        QObject::connect(pushButton_WtoB, SIGNAL(clicked()), CoordinateConverterClass, SLOT(calculate_WtoB()));

        QMetaObject::connectSlotsByName(CoordinateConverterClass);
    } // setupUi

    void retranslateUi(QMainWindow *CoordinateConverterClass)
    {
        CoordinateConverterClass->setWindowTitle(QApplication::translate("CoordinateConverterClass", "CoordinateConverter", 0));
        groupBox->setTitle(QApplication::translate("CoordinateConverterClass", "WGS-84", 0));
        label->setText(QApplication::translate("CoordinateConverterClass", "\347\272\254\345\272\246\357\274\232", 0));
        label_2->setText(QApplication::translate("CoordinateConverterClass", "\302\260N", 0));
        label_3->setText(QApplication::translate("CoordinateConverterClass", "\347\273\217\345\272\246\357\274\232", 0));
        label_4->setText(QApplication::translate("CoordinateConverterClass", "\302\260E", 0));
        groupBox_2->setTitle(QApplication::translate("CoordinateConverterClass", "Gauss-Kruger Projection", 0));
        label_5->setText(QApplication::translate("CoordinateConverterClass", "X\357\274\232", 0));
        label_7->setText(QApplication::translate("CoordinateConverterClass", "Y\357\274\232", 0));
        pushButton_WtoB->setText(QApplication::translate("CoordinateConverterClass", "-->", 0));
    } // retranslateUi

};

namespace Ui {
    class CoordinateConverterClass: public Ui_CoordinateConverterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COORDINATECONVERTER_H

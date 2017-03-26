/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *parametersBox;
    QGridLayout *gridLayout_2;
    QLabel *baudRateLabel;
    QComboBox *baudRateBox;
    QGroupBox *selectBox;
    QGridLayout *gridLayout;
    QComboBox *serialPortInfoListBox;
    QLabel *label;
    QGridLayout *gridLayout_4;
    QLabel *statusLabel;
    QPushButton *connectButton;
    QPushButton *disconnectButton;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QStringLiteral("SettingsDialog"));
        SettingsDialog->setEnabled(true);
        SettingsDialog->resize(410, 248);
        gridLayout_3 = new QGridLayout(SettingsDialog);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        parametersBox = new QGroupBox(SettingsDialog);
        parametersBox->setObjectName(QStringLiteral("parametersBox"));
        gridLayout_2 = new QGridLayout(parametersBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        baudRateLabel = new QLabel(parametersBox);
        baudRateLabel->setObjectName(QStringLiteral("baudRateLabel"));

        gridLayout_2->addWidget(baudRateLabel, 0, 0, 1, 1);

        baudRateBox = new QComboBox(parametersBox);
        baudRateBox->setObjectName(QStringLiteral("baudRateBox"));

        gridLayout_2->addWidget(baudRateBox, 0, 1, 1, 1);


        gridLayout_3->addWidget(parametersBox, 0, 1, 1, 1);

        selectBox = new QGroupBox(SettingsDialog);
        selectBox->setObjectName(QStringLiteral("selectBox"));
        gridLayout = new QGridLayout(selectBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        serialPortInfoListBox = new QComboBox(selectBox);
        serialPortInfoListBox->setObjectName(QStringLiteral("serialPortInfoListBox"));

        gridLayout->addWidget(serialPortInfoListBox, 0, 1, 1, 1);

        label = new QLabel(selectBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        gridLayout_3->addWidget(selectBox, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        statusLabel = new QLabel(SettingsDialog);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));

        gridLayout_4->addWidget(statusLabel, 1, 0, 1, 2);

        connectButton = new QPushButton(SettingsDialog);
        connectButton->setObjectName(QStringLiteral("connectButton"));

        gridLayout_4->addWidget(connectButton, 2, 0, 1, 1);

        disconnectButton = new QPushButton(SettingsDialog);
        disconnectButton->setObjectName(QStringLiteral("disconnectButton"));

        gridLayout_4->addWidget(disconnectButton, 2, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_4, 4, 0, 1, 2);


        retranslateUi(SettingsDialog);

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Settings", Q_NULLPTR));
        parametersBox->setTitle(QApplication::translate("SettingsDialog", "Select Parameters", Q_NULLPTR));
        baudRateLabel->setText(QApplication::translate("SettingsDialog", "BaudRate:", Q_NULLPTR));
        selectBox->setTitle(QApplication::translate("SettingsDialog", "Select Serial Port", Q_NULLPTR));
        label->setText(QApplication::translate("SettingsDialog", "Port", Q_NULLPTR));
        statusLabel->setText(QApplication::translate("SettingsDialog", "Status: Disconnected", Q_NULLPTR));
        connectButton->setText(QApplication::translate("SettingsDialog", "Connect", Q_NULLPTR));
        disconnectButton->setText(QApplication::translate("SettingsDialog", "DisConnect", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H

/****************************************************************************
**
** Copyright (C) 2012 Denis Shienkov <denis.shienkov@gmail.com>
** Copyright (C) 2012 Laszlo Papp <lpapp@kde.org>
** Contact: http://www.qt.io/licensing/
**
** This file is part of the QtSerialPort module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL21$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see http://www.qt.io/terms-conditions. For further
** information use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 or version 3 as published by the Free
** Software Foundation and appearing in the file LICENSE.LGPLv21 and
** LICENSE.LGPLv3 included in the packaging of this file. Please review the
** following information to ensure the GNU Lesser General Public License
** requirements will be met: https://www.gnu.org/licenses/lgpl.html and
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** As a special exception, The Qt Company gives you certain additional
** rights. These rights are described in The Qt Company LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "settingsdialog.h"
#include "ui_settingsdialog.h"
#include "../items/breadboard.h"
#include <QtSerialPort/QSerialPortInfo>
#include <QIntValidator>
#include <QLineEdit>
#include <QMessageBox>

QT_USE_NAMESPACE

static const char blankString[] = QT_TRANSLATE_NOOP("SettingsDialog", "N/A");

SettingsDialog::SettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingsDialog)
{
    ui->setupUi(this);
    intValidator = new QIntValidator(0, 4000000, this);

    CircuitSenseThread* thread = CircuitSenseThread::getInstantce();
    thread->startCircuitSenseThread();

    qDebug()<<"Main Thread:: ID: "<<this->thread()->currentThreadId();

    ui->baudRateBox->setInsertPolicy(QComboBox::NoInsert);

    connect(ui->disconnectButton, SIGNAL(clicked()),
            this, SLOT(disconnectSerialPort()));
    connect(ui->connectButton, SIGNAL(clicked()),
            this, SLOT(connectSerialPort()));
    connect(ui->serialPortInfoListBox, SIGNAL(currentIndexChanged(int)),
            this, SLOT(showPortInfo(int)));
    connect(ui->baudRateBox, SIGNAL(currentIndexChanged(int)),
            this, SLOT(checkCustomBaudRatePolicy(int)));
    connect(ui->serialPortInfoListBox, SIGNAL(currentIndexChanged(int)),
            this, SLOT(checkCustomDevicePathPolicy(int)));

    connect(thread, &CircuitSenseThread::onError,
                this, &SettingsDialog::handleError);

//    connect(thread, &CircuitSenseThread::r, this, &SettingsDialog::readData, Qt::BlockingQueuedConnection);

    connect(thread, &CircuitSenseThread::onConnected, this, &SettingsDialog::onConnected);

    connect(thread, &CircuitSenseThread::onDisconnected, this, &SettingsDialog::onDisconnected);

    connect(this, &SettingsDialog::connectCurrentViz, thread, &CircuitSenseThread::connectSerialPort);

    connect(this, &SettingsDialog::disconnectCurrentViz, thread, &CircuitSenseThread::disconnectSerialPort);

    connect(this, &SettingsDialog::closeCurrentViz, thread, &CircuitSenseThread::close);

    fillPortsParameters();
    fillPortsInfo();
    updateSettings();
}

SettingsDialog::~SettingsDialog()
{
    CircuitSenseThread* thread = CircuitSenseThread::getInstantce();
    closeSerialPort();
    thread->close();
    delete ui;
}

SettingsDialog::Settings SettingsDialog::settings() const
{
    return currentSettings;
}

void SettingsDialog::showPortInfo(int idx)
{
    if (idx == -1)
        return;
}

void SettingsDialog::disconnectSerialPort()
{
    closeSerialPort();
}

void SettingsDialog::connectSerialPort()
{
    updateSettings();
    SettingsDialog::Settings p = settings();

    emit connectCurrentViz(p.name, p.baudRate);
}

void SettingsDialog::onConnected()
{

    ui->statusLabel->setText("status: Connected");
}

void SettingsDialog::onDisconnected()
{
    ui->statusLabel->setText("status: Disconnected");
}


void SettingsDialog::writeData(const QByteArray &data)
{
//    CircuitSenseThread* thread = CircuitSenseThread::getInstantce();
//    serial->write(data);
}

void SettingsDialog::readData(CircuitSenseThreadData* data)
{
//    serial->bytesAvailable()
//    qDebug() << "Read Data" << current->pin;
//    MySerialPort* serial = MySerialPort::getInstantce();
//    CurrentValue* current = serial->readCurrent();
//    QByteArray data = serial->readAll();
}

void SettingsDialog::handleError(QString error)
{
    QMessageBox::critical(this, tr("Critical Error"), error);
    closeSerialPort();
}

void SettingsDialog::closeSerialPort()
{
    emit disconnectCurrentViz();
}

void SettingsDialog::checkCustomBaudRatePolicy(int idx)
{
    bool isCustomBaudRate = !ui->baudRateBox->itemData(idx).isValid();
    ui->baudRateBox->setEditable(isCustomBaudRate);
    if (isCustomBaudRate) {
        ui->baudRateBox->clearEditText();
        QLineEdit *edit = ui->baudRateBox->lineEdit();
        edit->setValidator(intValidator);
    }
}

void SettingsDialog::checkCustomDevicePathPolicy(int idx)
{

    bool isCustomPath = !ui->serialPortInfoListBox->itemData(idx).isValid();
    ui->serialPortInfoListBox->setEditable(isCustomPath);
    if (isCustomPath)
        ui->serialPortInfoListBox->clearEditText();
}

void SettingsDialog::fillPortsParameters()
{
    ui->baudRateBox->addItem(QStringLiteral("500000"), 500000);
//    ui->baudRateBox->addItem(QStringLiteral("19200"), QSerialPort::Baud19200);
//    ui->baudRateBox->addItem(QStringLiteral("38400"), QSerialPort::Baud38400);
//    ui->baudRateBox->addItem(QStringLiteral("115200"), QSerialPort::Baud115200);
    ui->baudRateBox->addItem(tr("Custom"));

//    ui->dataBitsBox->addItem(QStringLiteral("5"), QSerialPort::Data5);
//    ui->dataBitsBox->addItem(QStringLiteral("6"), QSerialPort::Data6);
//    ui->dataBitsBox->addItem(QStringLiteral("7"), QSerialPort::Data7);
//    ui->dataBitsBox->addItem(QStringLiteral("8"), QSerialPort::Data8);
//    ui->dataBitsBox->setCurrentIndex(3);

//    ui->parityBox->addItem(tr("None"), QSerialPort::NoParity);
//    ui->parityBox->addItem(tr("Even"), QSerialPort::EvenParity);
//    ui->parityBox->addItem(tr("Odd"), QSerialPort::OddParity);
//    ui->parityBox->addItem(tr("Mark"), QSerialPort::MarkParity);
//    ui->parityBox->addItem(tr("Space"), QSerialPort::SpaceParity);

//    ui->stopBitsBox->addItem(QStringLiteral("1"), QSerialPort::OneStop);
//#ifdef Q_OS_WIN
//    ui->stopBitsBox->addItem(tr("1.5"), QSerialPort::OneAndHalfStop);
//#endif
//    ui->stopBitsBox->addItem(QStringLiteral("2"), QSerialPort::TwoStop);

//    ui->flowControlBox->addItem(tr("None"), QSerialPort::NoFlowControl);
//    ui->flowControlBox->addItem(tr("RTS/CTS"), QSerialPort::HardwareControl);
//    ui->flowControlBox->addItem(tr("XON/XOFF"), QSerialPort::SoftwareControl);
}

void SettingsDialog::fillPortsInfo()
{
    ui->serialPortInfoListBox->clear();
    QString description;
    QString manufacturer;
    QString serialNumber;
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        QStringList list;
        description = info.description();
        manufacturer = info.manufacturer();
        serialNumber = info.serialNumber();
        list << info.portName()
             << (!description.isEmpty() ? description : blankString)
             << (!manufacturer.isEmpty() ? manufacturer : blankString)
             << (!serialNumber.isEmpty() ? serialNumber : blankString)
             << info.systemLocation()
             << (info.vendorIdentifier() ? QString::number(info.vendorIdentifier(), 16) : blankString)
             << (info.productIdentifier() ? QString::number(info.productIdentifier(), 16) : blankString);

        ui->serialPortInfoListBox->addItem(list.first(), list);
    }

    ui->serialPortInfoListBox->addItem(tr("Custom"));
}

void SettingsDialog::updateSettings()
{
    currentSettings.name = ui->serialPortInfoListBox->currentText();

    if (ui->baudRateBox->currentIndex() == 4) {
        currentSettings.baudRate = ui->baudRateBox->currentText().toInt();
    } else {
        currentSettings.baudRate = static_cast<QSerialPort::BaudRate>(
                    ui->baudRateBox->itemData(ui->baudRateBox->currentIndex()).toInt());
    }
//    currentSettings.stringBaudRate = QString::number(currentSettings.baudRate);

    currentSettings.dataBits = static_cast<QSerialPort::DataBits>(8);
//    currentSettings.stringDataBits = ui->dataBitsBox->currentText(QString::number(8));

    currentSettings.parity = static_cast<QSerialPort::Parity>(2);
//    currentSettings.stringParity = ui->parityBox->currentText();

    currentSettings.stopBits = static_cast<QSerialPort::StopBits>(1);
//    currentSettings.stringStopBits = ui->stopBitsBox->currentText();

    currentSettings.flowControl = static_cast<QSerialPort::FlowControl>(QSerialPort::FlowControl::NoFlowControl);
//    currentSettings.stringFlowControl = ui->flowControlBox->currentText();
}

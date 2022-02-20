#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QWidget>
#include <QDialog>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include <QRadioButton>
#include <QGroupBox>
#include <QListView>
#include <QStyledItemDelegate>
#include <QDialogButtonBox>
#include <QListWidgetItem>

class SettingsDialog : public QDialog
{
    Q_OBJECT
public:

    explicit SettingsDialog(QWidget *parent = nullptr);

private:

    QLabel * txtFram2;
    QLineEdit * leFram;
    QLineEdit * leFramGraphics;
    QLineEdit * legravity;
    QLineEdit * lestopForces;

private slots:
    void frameRateSlot();
    void frameRateTextSlot(const QString &text);
    void plotRateSlot();
    void gravitySlot();
    void stopForcesSlot();

signals:
    void frameRateChanged(int frame);
    void plotframeRateChanged(int frame);
    void gravityChanged(float value);
    void antialiasingChanged(int checked);
    void stopForcesChanged(int frame);



};

#endif // SETTINGSDIALOG_H

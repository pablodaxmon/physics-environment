#ifndef INITIALDIALOG_H
#define INITIALDIALOG_H

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
#include "src/core/Session.h"


class InitialDialog : public QDialog
{
    Q_OBJECT
public:

    explicit InitialDialog(QWidget *parent = nullptr);

private:

    QPushButton* createNewButton;
    QListView* listSavedEnvironments;
    QLineEdit* nameEdit;
    QLineEdit* descriptionEdit;

    QRadioButton *option1;
    QRadioButton *option2;
    QCheckBox *isGravity;
    QWidget *createListSessions();
    QWidget *itemListWidget(const QString &text, const QString &text2);
    QGroupBox *createTypeBox();
    QGroupBox *createViewBox();
    QListWidgetItem *itemNow = nullptr;
    QPushButton * loadButton;
private slots:
    void createNewSesionSlot();
    void loadSesionSlot();
    void loadLastSesionSlot();
    void setCurrentItem(QListWidgetItem *item);
    void setEnabledLoadButton();
signals:
    void createNewSesion(ViewSession _view, QString _name, QString _description, bool isBox2d, bool gravity);
    void loadSesion(QString url);


};

#endif // INITIALDIALOG_H

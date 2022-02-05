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
#include "core/Session.h"


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

    QGroupBox *createTypeBox();
    QGroupBox *createViewBox();

private slots:
    void createNewSesionSlot();
    void loadSesionSlot();
    void loadLastSesionSlot();

signals:
    void createNewSesion(Session * session);
    void loadSesion();
    void loadLastSesion();


};

#endif // INITIALDIALOG_H

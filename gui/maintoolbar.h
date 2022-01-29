#ifndef MAINTOOLBAR_H
#define MAINTOOLBAR_H

#include <QWidget>
#include <QPushButton>

class MainToolBar : public QWidget
{
    Q_OBJECT
public:
    explicit MainToolBar(QWidget *parent = nullptr);
protected:
    void paintEvent(QPaintEvent *event) override;

private:

    QPushButton * statsButton;
    QPushButton * clockButton;
    QPushButton * debugButton;
    QPushButton * playButton;
    QPushButton * pauseButton;
    QPushButton * stopButton;

    void createButtons();
    void setIconsButtons();


signals:

};

#endif // MAINTOOLBAR_H

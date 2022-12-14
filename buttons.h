//
// Created by twak on 11/11/2019.
//

#ifndef BUTTONS_H
#define BUTTONS_H

#include <QPushButton>
#include <QUrl>
#include <QtWidgets/QLineEdit>
#include <QString>

#include <vector>

class TheButtonInfo {

public:
    QUrl* url; // video file to play
    QIcon* icon; // icon to display
    QString videoname;

    TheButtonInfo ( QUrl* url, QIcon* icon, QString videoname) : url (url), icon (icon) ,videoname(videoname) {}
};

class TheButton : public QPushButton {
    Q_OBJECT

public:
    TheButtonInfo* info;
    int index;

     TheButton(QWidget *parent) :  QPushButton(parent) {
         //setIconSize(QSize(200,110));
         connect(this, SIGNAL(released()), this, SLOT (clicked() )); // if QPushButton clicked...then run clicked() below
    }

    void init(TheButtonInfo* i);

private slots:
    void clicked();

signals:
    void jumpTo(TheButtonInfo*);
    void returnindex(int index);
};
\

#endif //BUTTONS_H

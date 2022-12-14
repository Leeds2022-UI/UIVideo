#ifndef VIDEOWIDGET_H
#define VIDEOWIDGET_H

#include <QVideoWidget>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QDebug>

class VideoWidget : public QVideoWidget {
    Q_OBJECT

public:
    explicit VideoWidget(QWidget *parent = nullptr);

protected:
    void keyPressEvent(QKeyEvent *event) override;
    void mouseDoubleClickEvent(QMouseEvent *event) override;
};

#endif // VIDEOWIDGET_H

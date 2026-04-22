#ifndef BUBBLEWINDOW_H
#define BUBBLEWINDOW_H

#include <QMainWindow>

class BubbleWindow : public QMainWindow
{
    Q_OBJECT

public:
    BubbleWindow(QWidget *parent = nullptr);
    ~BubbleWindow();
};
#endif // BUBBLEWINDOW_H

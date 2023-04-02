#ifndef GAMEFINISH_H
#define GAMEFINISH_H

#include <QWidget>
#include "widget.h"

namespace Ui {
class GameFinish;
}

class GameFinish : public QWidget
{
    Q_OBJECT

public:
    explicit GameFinish(QWidget *parent = nullptr);
    ~GameFinish();
    Widget * pt;

private slots:
    void on_pushButton_clicked();

private:
    Ui::GameFinish *ui;
    void Initialize();
};

#endif // GAMEFINISH_H

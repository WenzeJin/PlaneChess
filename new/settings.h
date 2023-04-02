#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>
#include "widget.h"

namespace Ui {
class Settings;
}

class Settings : public QWidget
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = nullptr);
    ~Settings();
    Widget * pt = NULL;



private slots:
    void on_applyButton_clicked();

    void on_playernum_textChanged(const QString &arg1);

private:
    Ui::Settings *ui;
};

#endif // SETTINGS_H

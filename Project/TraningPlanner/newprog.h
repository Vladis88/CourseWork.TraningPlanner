#ifndef NEWPROG_H
#define NEWPROG_H

#include "human.h"
#include <QDebug>
#include <QPushButton>
#include <QDialog>

namespace Ui {
class NewProg;
}

class NewProg : public QDialog, public Human
{
    Q_OBJECT
public:
    explicit NewProg(QWidget *parent = 0);
    ~NewProg();
private:
    Ui::NewProg *ui;
private slots:
    void okClicked();
    void on_pushButton_clicked();
    void dataRecordingText();
};
#endif // NEWPROG_H

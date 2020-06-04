#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <human.h>
#include <newprog.h>
#include <QTextCodec>
#include <QDebug>
#include <QFileDialog>
#include <QDir>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow, public Human
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int LevelPerson(int age,int height, int weight, QString levelWorkout);

private slots:
    void on_newP_triggered();

    void on_exit_triggered();

    void on_about_triggered();

    void on_pushButtonCreate_clicked();

    void on_pushButtonQuit_clicked();

    void creatingPlan();

    void on_pushButtonOpen_clicked();

    void on_save_triggered();

    void on_SaveFile_clicked();

    void on_open_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

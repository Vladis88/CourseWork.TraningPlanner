#ifndef HUMAN_H
#define HUMAN_H

#include <QApplication>
#include <QString>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

class Human
{
private:
    QString height;
    QString weight;
    QString age;
    QString workoutDiff;
    QString workoutWeekCount;
    QString gender;
    QString name;

public:
   Human();
//******************GETTERS*********************
    QString GetHeight() const;
    QString GetWeight() const;
    QString GetAge() const;
    QString GetWorkoutDiff() const;
    QString GetWorkoutWeekCount() const;
    QString GetGender() const;
    QString GetName() const;
//******************SETTERS*********************
    void SetHeight(QString str);
    void SetWeight(QString str);
    void SetAge(QString str);
    void SetWorkoutDiff(QString str);
    void SetWorkoutWeekCount(QString str);
    void SetGender(QString str);
    void SetName(QString str);

};
#endif // HUMAN_H

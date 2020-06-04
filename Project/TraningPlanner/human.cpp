#include "human.h"

Human::Human(){
    this->workoutWeekCount = nullptr;
    this->workoutDiff = nullptr;
    this->weight = nullptr;
    this->height = nullptr;
    this->gender = nullptr;
    this->age = nullptr;
}

//******************GETTERS*************
QString Human::GetHeight() const
{
    return height;
}

QString Human::GetName() const
{
    return name;
}

QString Human::GetWeight() const
{
    return weight;
}

QString Human::GetAge() const
{
    return age;
}

QString Human::GetWorkoutDiff() const
{
    return workoutDiff;
}

QString Human::GetWorkoutWeekCount() const
{
    return workoutWeekCount;
}

QString Human::GetGender() const
{
    return gender;
}

//******************SETTERS*************
void Human::SetHeight(QString str)
{
    height = str;
}

void Human::SetName(QString str)
{
    name = str;
}

void Human::SetWeight(QString str)
{
    weight = str;
}

void Human::SetAge(QString str)
{
    age = str;
}

void Human::SetWorkoutDiff(QString str)
{
    workoutDiff = str;
}

void Human::SetWorkoutWeekCount(QString str)
{
    workoutWeekCount = str;
}

void Human::SetGender(QString str)
{
    gender = str;
}

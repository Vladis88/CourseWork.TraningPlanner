#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->newP->setShortcut(QKeySequence::New); //Ctr+N
    ui->exit->setShortcut(QKeySequence::Quit); //Ctr+Q
    ui->open->setShortcut(QKeySequence::Open); //Ctr+O
    ui->save->setShortcut(QKeySequence::SaveAs); //Ctr+Shift+S
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_exit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_newP_triggered()
{
    NewProg *wnd = new NewProg(this);
    wnd->show();
    connect(wnd, SIGNAL(rejected()),this, SLOT(creatingPlan())); // Information from temp Data Recording
}

void MainWindow::on_about_triggered()
{
     QMessageBox::information(this,"Информация","    Здесь вы сможете подобирать себе "
                                                "индивидуальные комплексы упражнений для дома(улицы) и сохранять их. "
                                                "Для этого вам просто нужно заполните анкету.\n\nПредупреждение:"
                                                "\n    Эта программа не сможет учесть всех нюансов вашего организма.\n\nПримечание к тренировкам:\n"
                                                "3-4x10-15 значит: 3-4 РАБОЧИХ подхода по 10-15 повторений."
                                                "Порядок упражнений имеет значение. И без большой необходимости лучше его не менять.");
}

void MainWindow::on_pushButtonCreate_clicked()
{
    ui->textBrowser->clear();
    NewProg *wnd = new NewProg(this);
    wnd->show();
    connect(wnd, SIGNAL(rejected()),this, SLOT(creatingPlan())); // Information from temp Data Recording
}

int MainWindow::LevelPerson(int age, int height, int weight, QString levelWorkout)
{
    double prelvl = 0, result = 0;
    int sqrHei = height*height, level = 0;
    if(GetGender() == "МУЖ.") {
        prelvl = (double(weight)/double(sqrHei))*(double)100;
        result = prelvl*age;
        level = result;
        if(age > 40){ while (level != 4) { level--; } }
        if(levelWorkout == "Нормально") { level+=2; }
        if(levelWorkout == "Сложно") { level+=4; }
        if(levelWorkout == "Очень сложно"){
                while(level != 11)
                    level++;
        }
    } else {
        prelvl = (double(weight)/double(sqrHei))*(double)100;
        result = prelvl*age;
        level = result;
        if(age > 40){ while (level != 3) { level--; } }
        if(levelWorkout == "Легко" && level > 1) { level-=1; }
        if(levelWorkout == "Нормально"){ level+=1; }
        if(levelWorkout == "Сложно"){ level+=3; }
        if(levelWorkout == "Очень сложно"){
            while(level != 7)
                level++;
        }
    }
    return level;
}

void MainWindow::creatingPlan() // Temp Data Recording
{
    bool ok;
    QFile fileData("/home/vlad/Desktop/CursWork/Project/Data/TempDataRecord.txt");
    if(!(fileData.open(QFile::ReadWrite) | QFile::Text)){
        QMessageBox::information(this,"Error!","Sorry!");
        return;
    }
    QTextStream stream(&fileData);
    QString text = stream.readLine();
    SetName(text);

    text = stream.readLine();
    SetAge(text);
    int age = GetAge().toInt(&ok,10);

    text = stream.readLine();
    SetGender(text);

    text = stream.readLine();
    SetHeight(text);
    int height = GetHeight().toInt(&ok,10);

    text = stream.readLine();
    SetWeight(text);
    int weight = GetWeight().toInt(&ok,10);

    text = stream.readLine();
    SetWorkoutDiff(text);

    text = stream.readLine();
    SetWorkoutWeekCount(text);
    int workoutWeekCount = GetWorkoutWeekCount().toInt(&ok,10);

    fileData.close();
//******************************************************************************************************************
    QString fileName[5] = {"WarmUp.txt", "PushUps.txt", "Squats.txt", "HorizontParallelBars.txt", "Press.txt"};
            QFile fileUser("/home/vlad/Desktop/CursWork/Project/Data/Programs/"+ GetName() + ".txt");
                    if(!(fileUser.open(QFile::Append) | QFile::Text)){
                        QMessageBox::information(this,"Ошибка!","Извините, что-то пошло не так с открытием файла.");
                        return;
                    }

             QTextStream in(&fileUser);

             QString result = "   Имя: " + GetName() + "\nВозраст: " + GetAge() + "\nПол: " +
                              GetGender()+ "\nРост: " + GetHeight()+"\nВес: " + GetWeight() +
                              "\nУровень тренировок: " + GetWorkoutDiff() + "\nКоличество тренировок: " +
                              GetWorkoutWeekCount() + "\n\n";
             in << result;
             fileUser.close();

        int levelNum = LevelPerson(age, height, weight, GetWorkoutDiff()), countT = 0;
        int levelNumCopy = levelNum;
        while(levelNum > 10) { levelNum--; }

        while(countT != workoutWeekCount) {
            if(levelNumCopy >= 2){
                levelNum--;
            }

            for(int i = 0; i < 5; i++) {
                QFile fileTraning("/home/vlad/Desktop/CursWork/Project/Data/Exercises/" + fileName[i]);
                       if(!(fileTraning.open(QFile::ReadWrite) | QFile::Text)){
                           QMessageBox::information(this,"Ошибка!","Извините, что-то пошло не так с открытием файла.");
                           return;
                       }
                QFile fileUser("/home/vlad/Desktop/CursWork/Project/Data/Programs/"+ GetName() + ".txt");
                        if(!(fileUser.open(QFile::Append) | QFile::Text)){
                            QMessageBox::information(this,"Ошибка!","Извините, что-то пошло не так с открытием файла.");
                            return;
                        }


                int count = 1;
                QTextStream in(&fileUser);

                in.setCodec(QTextCodec::codecForName("UTF-8"));
                if(countT == 0 && i == 0) {
                    fileUser.write("\t\tВАШ ПЛАН ТРЕНИРОВОК\n\n\t ПЕРВАЯ ТРЕНИРОВОКА:\n\n");
                } else if (countT == 1 && i == 0) {
                    fileUser.write("\n\n\t ВТОРАЯ ТРЕНИРОВОКА:\n\n");
                } else if (countT == 2 && i == 0){
                    fileUser.write("\n\n\t ТРЕТЬЯ ТРЕНИРОВОКА:\n\n");
                }
                    QString result = NULL;
                    while(count <= levelNum) {
                        result = fileTraning.readLine();
                        count++;
                    }
                    in << result;
                    if(countT > 1 && i == 0){
                        levelNum-=2;
                    }
                    if(levelNumCopy >= 2 && i == 4 && levelNumCopy != 10){
                    levelNum+=2;
                    } else if (levelNumCopy == 1 && i == 4){
                        levelNum++;
                    }

                    fileUser.close();
                    fileTraning.close();
            }
                countT++;
        }
        QFile fileUserDisplay("/home/vlad/Desktop/CursWork/Project/Data/Programs/"+ GetName() + ".txt");
                if(!(fileUserDisplay.open(QFile::ReadOnly) | QFile::Text)){
                    QMessageBox::information(this,"Ошибка!","Извините, что-то пошло не так с открытием файла.");
                    return;
                }

         ui->textBrowser->setText(fileUserDisplay.readAll());
         fileUserDisplay.close();
}

void MainWindow::on_pushButtonQuit_clicked()
{
        QApplication::quit();
}

void MainWindow::on_pushButtonOpen_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),QDir::homePath(),tr("Text files (*.txt)"));
    QFile fileUserDisplay(fileName);
            if(!(fileUserDisplay.open(QFile::ReadOnly) | QFile::Text)){
                QMessageBox::information(this,"Ошибка!","Извините, что-то пошло не так с открытием файла.");
                return;
            }

     ui->textBrowser->setText(fileUserDisplay.readAll());
     fileUserDisplay.close();
}

void MainWindow::on_save_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), "/home/vlad/" + GetName() + ".txt", tr("Text files (*.txt)"));
           QFile file(fileName);
           if(!(file.open(QFile::WriteOnly) | QFile::Text)){
               QMessageBox::information(this,"Ошибка!","Извините, что-то пошло не так с открытием файла.");
               return;
           }

           QTextStream in(&file);
           in << ui->textBrowser->toPlainText();
}

void MainWindow::on_SaveFile_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),  "/home/vlad/" + GetName() + ".txt", tr("Text files (*.txt)"));

           QFile file(fileName);
           if(!(file.open(QFile::WriteOnly) | QFile::Text)){
               QMessageBox::information(this,"Ошибка!","Извините, что-то пошло не так с открытием файла.");
               return;
           }

           QTextStream in(&file);
           in << ui->textBrowser->toPlainText();
}

void MainWindow::on_open_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),QDir::homePath(),tr("Text files (*.txt)"));
    QFile fileUserDisplay(fileName);
            if(!(fileUserDisplay.open(QFile::ReadOnly) | QFile::Text)){
                QMessageBox::information(this,"Ошибка!","Извините, что-то пошло не так с открытием файла.");
                return;
            }

     ui->textBrowser->setText(fileUserDisplay.readAll());
     fileUserDisplay.close();
}

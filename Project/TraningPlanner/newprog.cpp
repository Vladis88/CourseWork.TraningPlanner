#include "newprog.h"
#include "ui_newprog.h"

NewProg::NewProg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewProg)
{
    ui->setupUi(this);

    for(int i = 10; i <= 70; i++)
    ui->comboBoxAge->addItem(QString::number(i));
    ui->comboBoxAge->modelColumn();

    for(int i = 30; i <= 120; i++)
    ui->comboBoxWei->addItem(QString::number(i));

    for(int i = 136; i <= 200; i++)
    ui->comboBoxHei->addItem(QString::number(i));

    connect(ui->Ready, SIGNAL(clicked()), SLOT(okClicked()));
}

void NewProg::okClicked()
{
    int f = 0;

    if(ui->comboBoxAge->currentIndex()){
        f++;
        emit SetAge(ui->comboBoxAge->currentText()); //FileData(ui->comboBoxAge->currentText());
    }

    if(ui->comboBoxWei->currentIndex()){
        f++;
        emit SetWeight(ui->comboBoxWei->currentText()); //FileData(ui->comboBoxWei->currentText());
    }

    if(ui->comboBoxHei->currentIndex()){
        f++;
        emit SetHeight(ui->comboBoxHei->currentText()); //FileData(ui->comboBoxHei->currentText());
    }

    if(ui->comboBoxCountTrn->currentIndex()){
        f++;
        emit SetWorkoutWeekCount(ui->comboBoxCountTrn->currentText()); //FileData(ui->comboBoxCountTrn->currentText());
    }

    if(ui->comboBoxDiff->currentIndex()){
        f++;
        emit SetWorkoutDiff(ui->comboBoxDiff->currentText()); //FileData(ui->comboBoxDiff->currentText());
    }

    if(ui->comboBoxGend->currentIndex()){
        f++;
        emit SetGender(ui->comboBoxGend->currentText()); //FileData(ui->comboBoxGend->currentText());
    }
    if(ui->lineEdit->isModified())
    {
        f++;
        emit SetName(ui->lineEdit->displayText());
        static QString nikname = GetName();
//        QFile fileName("/home/vlad/Desktop/CursWork/Project/Data/FileNames.txt");
//        if(!(fileName.open(QFile::Append) | QFile::Text)){
//            QMessageBox::information(this,"Ошибка!","Извините, что-то пошло не так с открытием файла.");
//            return;
//        }
//        QTextStream stream(&fileName);
//        stream.setCodec("UTF-8");
//        stream << ui->lineEdit->displayText() << endl;
//        fileName.close();

        static int i = 0;
        if(ui->lineEdit->text() == nikname && i != 0){
            f--;
            QMessageBox::information(this,"Ошибка!", "Такое имя уже существует!\nВведите другое.");
        }
        i++;
    }
    if(f == 7){
            //Information from comBox in file
        dataRecordingText();
         close();
    }
}

void NewProg::dataRecordingText()
{

    QString strUser =  GetName() + "\n" + GetAge() + "\n" + GetGender() + "\n" + GetHeight() + "\n" + GetWeight() + "\n" +
            GetWorkoutDiff() + "\n" + GetWorkoutWeekCount();

    QFile fileData("/home/vlad/Desktop/CursWork/Project/Data/TempDataRecord.txt");
    if(!(fileData.open(QFile::WriteOnly) | QFile::Text)){
        QMessageBox::information(this,"Ошибка!","Извините, что-то пошло не так с открытием файла.");
        return;
    }

    QTextStream stream(&fileData);
    stream.setCodec("UTF-8");
    stream << strUser;
    fileData.flush();
    fileData.close();

    close();
}

NewProg::~NewProg()
{
    delete ui;
}

void NewProg::on_pushButton_clicked()
{
    this->hide();
}

#include "mainwindow.h"
#include "ui_mainwindow.h"

#define SIZE 50

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setCheckable(true);

    connect(&timer,SIGNAL(timeout()),this,SLOT(cycle()));

    connect(ui->widget,SIGNAL(mousePress(QMouseEvent*)), SLOT(clickedCell(QMouseEvent*)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::countNeighbors(int x, int y)
{
    int neighbors=0;
    for(int i=-1;i<2;i++){
        for(int j=-1;j<2;j++){
            int col=(x+i+SIZE)%SIZE;
            int row=(y+j+SIZE)%SIZE;
            neighbors+=ui->widget->cellCur[col][row];
        }
    }
    neighbors-=ui->widget->cellCur[x][y];
    return neighbors;
}

void MainWindow::cycle()
{
    int neighbors;
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            neighbors=countNeighbors(i,j);

            //B3S23 Conway's rules
            if(ui->widget->cellCur[i][j]==false)
            {
                if(neighbors==0&&b0||neighbors==1&&b1||neighbors==2&&b2||neighbors==3&&b3||neighbors==4&&b4||neighbors==5&&b5||neighbors==6&&b6||neighbors==7&&b7||neighbors==8&&b8)
                    ui->widget->cellNew[i][j]=true;
                else
                    ui->widget->cellNew[i][j]=false;
            }
            else
            {
                if(neighbors==0&&s0||neighbors==1&&s1||neighbors==2&&s2||neighbors==3&&s3||neighbors==4&&s4||neighbors==5&&s5||neighbors==6&&s6||neighbors==7&&s7||neighbors==8&&s8)
                    ui->widget->cellNew[i][j]=true;
                else
                    ui->widget->cellNew[i][j]=false;
            }
        }
    }
    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++)
            ui->widget->cellCur[i][j]=ui->widget->cellNew[i][j];
    ui->widget->updateGL();
}

void MainWindow::conway()
{
    ui->checkBox_6->setCheckState(Qt::Checked);
    ui->checkBox_7->setCheckState(Qt::Checked);
    ui->checkBox_8->setCheckState(Qt::Checked);

    ui->checkBox->setCheckState(Qt::Unchecked);
    ui->checkBox_2->setCheckState(Qt::Unchecked);
    ui->checkBox_3->setCheckState(Qt::Unchecked);
    ui->checkBox_4->setCheckState(Qt::Unchecked);
    ui->checkBox_5->setCheckState(Qt::Unchecked);
    ui->checkBox_9->setCheckState(Qt::Unchecked);
    ui->checkBox_10->setCheckState(Qt::Unchecked);
    ui->checkBox_11->setCheckState(Qt::Unchecked);
    ui->checkBox_12->setCheckState(Qt::Unchecked);
    ui->checkBox_13->setCheckState(Qt::Unchecked);
    ui->checkBox_14->setCheckState(Qt::Unchecked);
    ui->checkBox_15->setCheckState(Qt::Unchecked);
    ui->checkBox_16->setCheckState(Qt::Unchecked);
    ui->checkBox_17->setCheckState(Qt::Unchecked);
    ui->checkBox_18->setCheckState(Qt::Unchecked);
}



void MainWindow::on_verticalSlider_valueChanged(int value)
{
    this->timer.setInterval(1000/value);
}

void MainWindow::on_pushButton_toggled(bool checked)
{
    if(checked){
        this->timer.start(1000/ui->verticalSlider->value());
        ui->pushButton->setText("Стоп");
    }
    else{
        this->timer.stop();
        ui->pushButton->setText("Старт");
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    cycle();
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->pushButton->setChecked(false);
    ui->widget->clear();
    ui->widget->makeGlider();
    conway();
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->widget->clear();
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->pushButton->setChecked(false);
    ui->widget->clear();
    ui->widget->makeGliderGun();
    conway();
}

void MainWindow::on_checkBox_stateChanged(int arg1)
{
    b0=arg1;
}

void MainWindow::on_checkBox_3_stateChanged(int arg1)
{
    b1=arg1;
}

void MainWindow::on_checkBox_5_stateChanged(int arg1)
{
    b2=arg1;
}

void MainWindow::on_checkBox_7_stateChanged(int arg1)
{
    b3=arg1;
}

void MainWindow::on_checkBox_9_stateChanged(int arg1)
{
    b4=arg1;
}

void MainWindow::on_checkBox_11_stateChanged(int arg1)
{
    b5=arg1;
}

void MainWindow::on_checkBox_13_stateChanged(int arg1)
{
    b6=arg1;
}

void MainWindow::on_checkBox_15_stateChanged(int arg1)
{
    b7=arg1;
}

void MainWindow::on_checkBox_17_stateChanged(int arg1)
{
    b8=arg1;
}

void MainWindow::on_checkBox_2_stateChanged(int arg1)
{
    s0=arg1;
}

void MainWindow::on_checkBox_4_stateChanged(int arg1)
{
    s1=arg1;
}

void MainWindow::on_checkBox_6_stateChanged(int arg1)
{
    s2=arg1;
}

void MainWindow::on_checkBox_8_stateChanged(int arg1)
{
    s3=arg1;
}

void MainWindow::on_checkBox_10_stateChanged(int arg1)
{
    s4=arg1;
}

void MainWindow::on_checkBox_12_stateChanged(int arg1)
{
    s5=arg1;
}

void MainWindow::on_checkBox_14_stateChanged(int arg1)
{
    s6=arg1;
}

void MainWindow::on_checkBox_16_stateChanged(int arg1)
{
    s7=arg1;
}

void MainWindow::on_checkBox_18_stateChanged(int arg1)
{
    s8=arg1;
}

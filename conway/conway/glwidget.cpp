#include "glwidget.h"

#define SQUARE 800
#define SIZE 50
GLWidget::GLWidget(QWidget *parent) :
    QGLWidget(parent)
{
    //включение таймера
    //connect(&timer,SIGNAL(timeout()),this,SLOT(updateGL()));

    //заполнение клеток
    for (int i=0;i<SIZE;i++) {
        for(int j=0;j<SIZE;j++){
            cellCur[i][j]=false;
            cellNew[i][j]=false;
        }
    }
}

void GLWidget::initializeGL(){
    glClearColor(1,1,1,1);
}
void GLWidget::paintGL(){
    glClear(GL_COLOR_BUFFER_BIT);



    //шаг для рисования
    double step=(double)2/SIZE;

    //сетка
    glLoadIdentity();
    glLineWidth(2);
    glColor3f(0,0,0);
    for(int i=0;i<SIZE+1;i++){
        glBegin(GL_LINES);
        if(i==SIZE/2)
            glColor3f(0,0,0);
        else
            glColor3f(.4,.4,.4);
        //vertical
        glVertex2f(-1+step*i,-1);
        glVertex2f(-1+step*i,1);
        //horizontal
        glVertex2f(-1,-1+step*i);
        glVertex2f(1,-1+step*i);
        glEnd();
    }


    //клетки
    glColor3f(0,0,0);
    glLoadIdentity();
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            if(cellCur[i][j]==true){
                glLoadIdentity();
                glTranslatef(-1+step*i, 1-step*j,0);
                glBegin(GL_QUADS);
                    glVertex2f(0,0);
                    glVertex2f(step,0);
                    glVertex2f(step,-step);
                    glVertex2f(0,-step);
                glEnd();
            }
        }
    }
}
void GLWidget::resizeGL(int w, int h){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glViewport(0,0,w,h);

    qreal aspectratio=qreal(w)/qreal(h);
    glOrtho(-1*aspectratio,1*aspectratio,-1,1,1,-1);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    updateGL();
}

void GLWidget::clear()
{
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            cellCur[i][j]=false;
        }
    }
    updateGL();
}

void GLWidget::makeGlider()
{
    cellCur[2][0]=cellCur[0][1]=cellCur[2][1]=cellCur[1][2]=cellCur[2][2]=true;
    updateGL();
}

void GLWidget::makeGliderGun()
{
    cellCur[5][4]=
    cellCur[5][5]=
    cellCur[6][4]=
    cellCur[6][5]=
    cellCur[15][4]=
    cellCur[15][5]=
    cellCur[15][6]=
    cellCur[16][3]=
    cellCur[16][7]=
    cellCur[17][2]=
    cellCur[17][8]=
    cellCur[18][2]=
    cellCur[18][8]=
    cellCur[19][5]=
    cellCur[20][3]=
    cellCur[20][7]=
    cellCur[21][4]=
    cellCur[21][5]=
    cellCur[21][6]=
    cellCur[22][5]=
    cellCur[25][2]=
    cellCur[25][3]=
    cellCur[25][4]=
    cellCur[26][2]=
    cellCur[26][3]=
    cellCur[26][4]=
    cellCur[27][1]=
    cellCur[27][5]=
    cellCur[29][0]=
    cellCur[29][1]=
    cellCur[29][5]=
    cellCur[29][6]=
    cellCur[39][2]=
    cellCur[39][3]=
    cellCur[40][2]=
    cellCur[40][3]=true;
    updateGL();
}

void GLWidget::mousePressEvent(QMouseEvent *event)
{
    onMouseEvent(event->pos());
    QWidget::mousePressEvent(event);
}

void GLWidget::onMouseEvent(const QPoint &pos)
{
    int i=(int)pos.x()/(SQUARE/SIZE);
    int j=(int)pos.y()/(SQUARE/SIZE);
    cellCur[i][j]=!cellCur[i][j];
    updateGL();
}

#ifndef GLWIDGET_H
#define GLWIDGET_H


#include <QGLWidget>
#include <QTimer>
#include <QMouseEvent>
#include <QDebug>

class GLWidget : public QGLWidget
{
    Q_OBJECT
public:
    GLWidget(QWidget *parent = 0);

    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);
    bool cellCur[50][50];
    bool cellNew[50][50];
    void clear();
    void makeGlider();
    void makeGliderGun();
    //QTimer timer;
protected:
    void mousePressEvent(QMouseEvent *event) override;
private:
    void onMouseEvent(const QPoint &pos);


};

#endif // GLWIDGET_H

#include<io.h>
#include<iostream>
#include<cmath>
#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
using namespace std;

    int xarr[100], yarr[100];
    int x,y,r,pk,i=1;

void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-200.0, 200.0, -200.0, 200.0);
}

void MyDisplay()
{
    glClear (GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
    glColor3ub (0, 0, 0);

    x=0;
    y=r;
    xarr[0]=x;
    yarr[0]=y;
    pk=(1-r);
    while(x<y){
            if(pk<0){
                x++;
            }
            else {
                x++;
                y--;
            }
        xarr[i]=x;
        yarr[i]=y;
        pk=pk+2*(xarr[i-1]+1)+((yarr[i]*yarr[i])-(yarr[i-1]*yarr[i-1]))-(yarr[i]-yarr[i-1])+1;


        i++;
    }

    for(int j=0;j<i-1;j++)
    {
        glVertex2i(xarr[j],yarr[j]);
        glVertex2i(yarr[i-j-2],xarr[i-j-2]);
        glVertex2i(yarr[j],-1*xarr[j]);
        glVertex2i(xarr[i-j-2],-1*yarr[i-j-2]);
        glVertex2i(-1*xarr[j],-1*yarr[j]);
        glVertex2i(-1*yarr[i-j-2],-1*xarr[i-j-2]);
        glVertex2i(-1*yarr[j],xarr[j]);
        glVertex2i(-1*xarr[i-j-2],yarr[i-j-2]);
    }
    glEnd();
    glFlush ();

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (400, 400);
    glutInitWindowPosition (200, 200);
    glutCreateWindow ("");

    cout<<"Mid Point Circle Algorithm!!!"<<endl<<endl;
    cout<<"value of Radius:";
    cin>>r;
    glutDisplayFunc(MyDisplay);

    myInit ();
    glutMainLoop();
}

#include<windows.h>
#include<GL/glut.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

float xa,xb,ya,yb,m,i,j,p;
int dx=0;
int dy=0;

void display (void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POINTS);
     p=(2*dy)-dx;
    for(i=xa,j=ya;i<=xb,j<=yb; ){
        if(p>=0){
            i=i+1;
            j=j+1;
            if((i>xb)||(j>yb)){
                break;
            }
            printf("%0.2f %0.2f\n",i,j);
            glVertex3f ((i/100), (j/100), 0.0);
            p=p+(2*dy)-(2*dx);
            }
            else if(p<0){
            i=i+1;
            if((i>xb)||(j>yb)){
                break;
            }
            printf("%0.2f %0.2f\n",i,j);
            glVertex3f ((i/100), (j/100), 0.0);
            p=p+(2*dy);
            }
        }

    glEnd();
    glFlush();

    }

void init(void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
// initialize viewing values
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}


int main(int argc, char** argv)
{
    cout<<("Enter the points\n(X1,Y1,X2,Y2):-\n");
    cin>>xa>>ya>>xb>>yb;
    dx = xb-xa;
    dy = yb-ya;
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Bresenham Line");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;

}

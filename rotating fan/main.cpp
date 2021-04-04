#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <vector>
#include <GL/glut.h>
using namespace std;

static GLfloat spin = 0.0;
static GLfloat spin_speed = 1.0;
float spin_x = 0;
float spin_y = 1;
float spin_z = 0;

float translate_x = 0.0;
float translate_y = 0.0;
float translate_z = -30.0;


void init()
{

    	glClearColor(0,0,0,0);


	glShadeModel(GL_SMOOTH);	// Enable Smooth Shading
	glClearDepth(1.0f);			// Depth Buffer Setup
	glEnable(GL_DEPTH_TEST);	// Enables Depth Testing

}



void setSpin(float x, float y, float z)
{
	spin_x = x;
	spin_y = y;
	spin_z = z;
}

void reset()
{
	spin_x = 0;
	spin_y = 1;
	spin_z = 0;
	translate_x = 0.0;
	translate_y = 0.0;
	translate_z = -30.0;
}


void reshape(int w,int h)
{
	glViewport(0,0, (GLsizei)w,(GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(100.0f, (GLfloat)w/(GLfloat)h, 1.0f, 100.0f);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}


void mygraph()
{
    glBegin(GL_LINE_LOOP);
        glVertex2f(0,0);
        glVertex2f(3,-5);
        glVertex2f(5,-5);
        glVertex2f(7,-8);
        glVertex2f(4,-8);
        glVertex2f(7,-11);
        glVertex2f(9,-11);
        glVertex2f(11,-14);
        glVertex2f(6,-14);
        glVertex2f(8,-16);
        glVertex2f(9,-16);
        glVertex2f(10,-18);
        glVertex2f(6,-18);
        glVertex2f(8,-20);

        glVertex2f(-8,-20);
        glVertex2f(-6,-18);
        glVertex2f(-10,-18);
        glVertex2f(-9,-16);
         glVertex2f(-8,-16);
         glVertex2f(-6,-14);
         glVertex2f(-11,-14);
         glVertex2f(-9,-11);
          glVertex2f(-7,-11);
          glVertex2f(-4,-8);
          glVertex2f(-7,-8);
           glVertex2f(-5,-5);
           glVertex2f(-3,-5);
           glVertex2f(0,0);


    glEnd();
}

void f2()
{
    mygraph();
    glRotatef(270,0.0,0.0,1.0);
    mygraph();
    glRotatef(180,0.0,0.0,1.0);
    mygraph();
    glRotatef(90,0.0,0.0,1.0);
    mygraph();


}
void myDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(translate_x, translate_y, translate_z);
	glRotatef(spin,spin_x,spin_y,spin_z);

   f2();

	glFlush();
	glutSwapBuffers();
}

void spinDisplay(void)
{
	spin=spin+spin_speed;
	if(spin>360.0)
	{
		spin=spin-360.0;
	}
	glutPostRedisplay();
}

void spinDisplayReverse(void)
{
	spin=spin-spin_speed;
	if(spin<360.0)
	{
		spin=spin+360.0;
	}
	glutPostRedisplay();
}

void mouse(int button,int state,int x,int y)
{
	switch(button)
	{
		case GLUT_LEFT_BUTTON:
			if(state==GLUT_DOWN)
            {
              glutIdleFunc(NULL);
            }

		break;

		break;
		case GLUT_RIGHT_BUTTON:
			if(state==GLUT_DOWN)
            {
                setSpin(0.0,0.0,1.0);
                glutIdleFunc(spinDisplayReverse);
            }

		break;

		default:
		break;
	}
}

void keyboard(unsigned char key, int x, int y)
{

	 if(key=='i')
	{
		translate_z++;
		glutPostRedisplay();
	}
	else if(key=='o')
	{
		translate_z--;
		glutPostRedisplay();
	}
	//-------- zoom --------

	//-------- reset -------
	else if(key=='r')
	{
		reset();
		glutPostRedisplay();
	}
	//-------- reset -------
}


int main(int argc, char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

glutInitWindowPosition(0,0);

glutInitWindowSize(640,480);
glutCreateWindow("Rotating Fan ");



init();
glutReshapeFunc(reshape);
glutMouseFunc(mouse);
glutKeyboardFunc(keyboard);
glutDisplayFunc(myDisplay);
glutMainLoop();

}

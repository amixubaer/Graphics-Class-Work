#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
//press W for start and stop rotation and S for speed
static GLfloat spin = 0.0;


void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glTranslatef(0.0f ,0.0f, 0.0f);

    glPointSize(3.0);
    glLineWidth(3.0);

	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.0, 0.0); //x,y
	glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0, 0);
	glVertex2f(-5, -10);

    glVertex2f(-5, -10);
	glVertex2f(-10, -10);


	glVertex2f(0, 0);
	glVertex2f(5, -10);

    glVertex2f(5, -10);
	glVertex2f(10, -10);

    glVertex2f(-10, -10);
	glVertex2f(-12, -20);

    glVertex2f(10, -10);
	glVertex2f(12, -20);

    glVertex2f(-12, -20);
	glVertex2f(-5, -20);

	glVertex2f(12, -20);
	glVertex2f(5, -20);

    glVertex2f(-5, -20);
	glVertex2f(-7, -30);

	glVertex2f(5, -20);
	glVertex2f(7, -30);

    glVertex2f(-7, -30);
    glVertex2f(-12, -30);

    glVertex2f(7, -30);
    glVertex2f(12, -30);

    glVertex2f(-12, -30);
    glVertex2f(-15, -40);

    glVertex2f(12, -30);
    glVertex2f(15, -40);

    glVertex2f(-15, -40);
    glVertex2f(-3, -40);

    glVertex2f(15, -40);
    glVertex2f(3, -40);

    glVertex2f(-3, -40);
    glVertex2f(-7, -50);

    glVertex2f(3, -40);
    glVertex2f(7, -50);

    glVertex2f(-7, -50);
    glVertex2f(7, -50);
	glEnd();

    glPopMatrix();
    glFlush();
}


void spinDisplay_right1(void)
{
   spin = -.20;
			glutPostRedisplay();
			glRotatef(spin, 0.0, 0.0, 1.0);
}


void init(void)
{
	glClearColor (1.0, 0.0, 0.0, 0.0);
	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
}

int a=0;
void my_keyboard(unsigned char key, int x, int y)
{

	switch (key) {

		case 'w': //normal speed
                {
                    if(a==0)
                {
		            glutIdleFunc(spinDisplay_right1);
		             a=1;
                }

         else
         {
              glutIdleFunc(NULL);
              a=0;
         }
         }
			case 's':   //fast speed
			{


			glRotatef(-10, 0.0, 0.0, 1.0);
			       break;
			}
            case 'i':
                glRotatef(3, 0.0, 0.0, 1.0);
                break;

	  default:
			break;
	}
}


int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (250, 250);
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("Rotating Fan");
	init();

	glutDisplayFunc(display);
	glutKeyboardFunc(my_keyboard);

	glutMainLoop();
	return 0;
}

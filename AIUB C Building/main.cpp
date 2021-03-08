#include<windows.h>
#include<GL/glut.h>
#include<math.h>
#define PI 3.14159

void display(){
glClearColor(0.9f,0.9f,1.0f,1.0f);
glClear(GL_COLOR_BUFFER_BIT);
 //circle
 int i;

	GLfloat x=.0f; GLfloat y=.0f; GLfloat radius =.735f;
	int triangleAmount = 40;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(181,213,223);
    glVertex2f(x,y);
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f
			(
                x + (radius * cos(i * twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

 //Antina
 glBegin(GL_QUADS);
 glColor3ub(33,47,61);
 glVertex2f(-0.2,0.705);
 glVertex2f(-0.204,0.705);
 glVertex2f(-0.204,0.8);
 glVertex2f(-0.2,0.8);
 glEnd();

 //MainBase
 glBegin(GL_QUADS);
 glColor3ub(25,21,24);
 glVertex2f(-1,-0.9);
 glVertex2f(-1,-1);
 glVertex2f(1,-1);
 glVertex2f(1,-0.9);
 glEnd();

 //grass
 glBegin(GL_QUADS);
 glColor3ub(0,255,18);
 glVertex2f(-1,-0.9);
 glVertex2f(-1,-0.7);
 glVertex2f(1,-0.7);
 glVertex2f(1,-0.9);
 glEnd();

 //background
 glBegin(GL_QUADS);
 glColor3ub(250,240,128);
 glVertex2f(-1,-0.7);
 glVertex2f(-1,-0.5);
 glVertex2f(-0.7,-0.5);
 glVertex2f(-0.7,-0.7);
 glEnd();

  glBegin(GL_QUADS);
 glColor3ub(150,140,128);
 glVertex2f(-0.65,-0.7);
 glVertex2f(-0.65,-0.6);
 glVertex2f(-0.45,-0.6);
 glVertex2f(-0.45,-0.7);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub(250,150,110);
 glVertex2f(1,-0.7);
 glVertex2f(1,-0.3);
 glVertex2f(0.7,-0.3);
 glVertex2f(0.7,-0.7);
 glEnd();

 //Main Building
 glBegin(GL_QUADS);
 glColor3ub(157,203,218);
 glVertex2f(-0.23,-0.7);
 glVertex2f(-0.23,-0.9);
 glVertex2f(0.23,-0.9);
 glVertex2f(0.23,-0.7);
 glEnd();

 //FloorBase
 glBegin(GL_QUADS);
 glColor3ub(0,102,204);
 glVertex2f(-0.23,-0.76);
 glVertex2f(-0.23,-0.84);
 glVertex2f(0.23,-0.84);
 glVertex2f(0.23,-0.76);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3ub(0,102,204);
 glVertex2f(-0.536,-0.5);
 glVertex2f(-0.435,-0.59);
 glVertex2f(0.435,-0.59);
 glVertex2f(0.536,-0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3ub(0,102,204);
 glVertex2f(-0.67,-0.3);
 glVertex2f(-0.615,-0.4);
 glVertex2f(0.615,-0.4);
 glVertex2f(0.67,-0.3);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3ub(0,102,204);
 glVertex2f(-0.734,-0.02);
 glVertex2f(-0.709,-0.19);
 glVertex2f(0.709,-0.19);
 glVertex2f(0.734,-0.02);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3ub(0,102,204);
 glVertex2f(-0.728,0.1);
 glVertex2f(-0.706,0.2);
 glVertex2f(0.706,0.2);
 glVertex2f(0.728,0.1);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3ub(0,102,204);
 glVertex2f(-0.66,0.32);
 glVertex2f(-0.59,0.44);
 glVertex2f(0.59,0.44);
 glVertex2f(0.66,0.32);
 glEnd();

 glLoadIdentity();

 //AIUB TEXT
 //A
 glBegin(GL_QUADS);
 glColor3ub(18,178,225);
 glVertex2f(-0.14,-0.99);
 glVertex2f(-0.15,-0.995);
 glVertex2f(-0.14,-0.91);
 glVertex2f(-0.13,-0.91);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub(18,178,225);
 glVertex2f(-0.14,-0.945);
 glVertex2f(-0.14,-0.955);
 glVertex2f(-0.12,-0.955);
 glVertex2f(-0.12,-0.945);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub(18,178,225);
 glVertex2f(-0.11,-0.99);
 glVertex2f(-0.12,-0.99);
 glVertex2f(-0.13,-0.91);
 glVertex2f(-0.12,-0.91);
 glEnd();

 //I
 glBegin(GL_QUADS);
 glColor3ub(18,178,225);
 glVertex2f(-0.05,-0.99);
 glVertex2f(-0.06,-0.99);
 glVertex2f(-0.06,-0.91);
 glVertex2f(-0.05,-0.91);
 glEnd();

 //U
 glBegin(GL_QUADS);
 glColor3ub(18,178,225);
 glVertex2f(0.01,-0.91);
 glVertex2f(0.01,-0.99);
 glVertex2f(0.02,-0.99);
 glVertex2f(0.02,-0.91);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub(18,178,225);
 glVertex2f(0.02,-0.98);
 glVertex2f(0.02,-0.99);
 glVertex2f(0.05,-0.99);
 glVertex2f(0.05,-0.98);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub(18,178,225);
 glVertex2f(0.05,-0.91);
 glVertex2f(0.05,-0.99);
 glVertex2f(0.06,-0.99);
 glVertex2f(0.06,-0.91);
 glEnd();


 //B
 glBegin(GL_QUADS);
 glColor3ub(18,178,225);
 glVertex2f(0.11,-0.91);
 glVertex2f(0.11,-0.99);
 glVertex2f(0.12,-0.99);
 glVertex2f(0.12,-0.91);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub(18,178,225);
 glVertex2f(0.14,-0.91);
 glVertex2f(0.14,-0.99);
 glVertex2f(0.145,-0.99);
 glVertex2f(0.145,-0.91);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub(18,178,225);
 glVertex2f(0.11,-0.91);
 glVertex2f(0.11,-0.92);
 glVertex2f(0.14,-0.92);
 glVertex2f(0.14,-0.91);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub(18,178,225);
 glVertex2f(0.11,-0.945);
 glVertex2f(0.11,-0.955);
 glVertex2f(0.14,-0.955);
 glVertex2f(0.14,-0.945);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub(18,178,225);
 glVertex2f(0.11,-0.98);
 glVertex2f(0.11,-0.99);
 glVertex2f(0.14,-0.99);
 glVertex2f(0.14,-0.98);
 glEnd();


 //flag stand

 glBegin(GL_QUADS);
 glColor3ub(33,47,61);
 glVertex2f(-0.92,-0.9);
 glVertex2f(-0.9,-0.9);
 glVertex2f(-0.9,0.00);
 glVertex2f(-0.92,0.00);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub(33,47,61);
 glVertex2f(-0.59,-0.9);
 glVertex2f(-0.57,-0.9);
 glVertex2f(-0.57,0.00);
 glVertex2f(-0.59,0.00);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub(33,47,61);
 glVertex2f(-0.26,-0.9);
 glVertex2f(-0.24,-0.9);
 glVertex2f(-0.24,0.00);
 glVertex2f(-0.26,0.00);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub(33,47,61); // National Flag Stand
 glVertex2f(0.07,-0.9);
 glVertex2f(0.09,-0.9);
 glVertex2f(0.09,0.20);
 glVertex2f(0.07,0.20);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub(33,47,61);
 glVertex2f(0.40,-0.9);
 glVertex2f(0.42,-0.9);
 glVertex2f(0.42,0.00);
 glVertex2f(0.40,0.00);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub(33,47,61);
 glVertex2f(0.73,-0.9);
 glVertex2f(0.75,-0.9);
 glVertex2f(0.75,0.00);
 glVertex2f(0.73,0.00);
 glEnd();

 //Flags

 glBegin(GL_QUADS);
 glColor3ub(18,178,225); //blue flag
 glVertex2f(-0.9,0.0);
 glVertex2f(-0.9,-0.25);
 glVertex2f(-0.6,-0.25);
 glVertex2f(-0.6,0.0);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub(0,225,18); //green flag
 glVertex2f(-0.57,0.0);
 glVertex2f(-0.57,-0.25);
 glVertex2f(-0.27,-0.25);
 glVertex2f(-0.27,0.0);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub(255,255,255); //white flag
 glVertex2f(-0.24,0.0);
 glVertex2f(-0.24,-0.25);
 glVertex2f(0.06,-0.25);
 glVertex2f(0.06,0.0);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub(245,42,60); //red flag
 glVertex2f(0.42,0.0);
 glVertex2f(0.42,-0.25);
 glVertex2f(0.72,-0.25);
 glVertex2f(0.72,0.0);
 glEnd();

 glBegin(GL_QUADS);
 glColor3ub(255,255,18); //yellow flag
 glVertex2f(0.75,0.0);
 glVertex2f(0.75,-0.25);
 glVertex2f(1.0,-0.25);
 glVertex2f(1.0,0.0);
 glEnd();


 //national flag


 glBegin(GL_QUADS);
 glColor3ub(0,106,77); //green square
 glVertex2f(0.09,0.20);
 glVertex2f(0.09,-0.05);
 glVertex2f(0.39,-0.05);
 glVertex2f(0.39,0.20);
 glEnd();

 //red circle
int in;
	GLfloat xn=0.23f;
	GLfloat yn=0.075f;
	GLfloat radiusn =.08f;
	int triangleAmountn = 100;
	GLfloat twicePin = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(248,22,60);
    glVertex2f(xn, yn);
    for(in = 0; in <= triangleAmountn; in++)
    {
        glVertex2f(xn+(radiusn*cos(in*twicePin/triangleAmountn)), yn+(radiusn*sin(in*twicePin/triangleAmountn)));
    }
	glEnd();


 glFlush();



}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("AIUB C Building");
	glutInitWindowSize(680, 680);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

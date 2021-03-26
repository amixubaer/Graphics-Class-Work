#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <vector>
#include <GL/glut.h>
using namespace std;

/*-----------------------Translation-------------------------*/
int pntX1, pntY1,edges,x,y;
vector<int> pntX;
vector<int> pntY;

void drawPolygon()
{
	glBegin(GL_POLYGON);
	glColor3ub(30.0, 176.0, 166.0);
	for (int i = 0; i < edges; i++)
	{
		glVertex2i(pntX[i], pntY[i]);
	}
	glEnd();
}

void drawPolygonTranslate()
{
    glTranslatef(x,y,1);
    glBegin(GL_POLYGON);
	glColor3ub(103.0, 83.0, 153.0);
	for (int i = 0; i < edges; i++)
	{
		glVertex2i(pntX[i] + x, pntY[i] + y);
	}
	glEnd();
}
void translate(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);

		drawPolygon();
		drawPolygonTranslate();
	glFlush();
}
/*-----------------------Translation Ends-------------------------*/



/*-----------------------Scaling-------------------------*/

void drawPolygonScale()
{
    glScalef(x,y,1);
    glBegin(GL_POLYGON);
	glColor3ub(106.0, 191.0, 99.0);
	for (int i = 0; i < edges; i++)
	{
		glVertex2i(pntX[i] + x, pntY[i] + y);
	}
	glEnd();
}
void scaling(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);

		drawPolygon();
		drawPolygonScale();
	glFlush();
}
/*-----------------------Scaling Ends-------------------------*/



/*-----------------------Rotation-------------------------*/
GLfloat a;

void Idle()
{
    glutPostRedisplay();
}
void drawPolygonRotation()
{
    glRotatef(a,0,0.0,0.1);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 1.0);
	for (int i = 0; i < edges; i++)
	{
		glVertex2i(pntX[i] + x, pntY[i] + y);
	}
	glEnd();
}
void rotation(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);

		drawPolygon();
		drawPolygonRotation();
	glFlush();
}
/*-----------------------Rotation Ends-------------------------*/




/*-----------------------Mirror-------------------------*/
char reflectionAxis;

void drawPolygonMirrorReflection(char reflectionAxis)
{
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);

	if (reflectionAxis == 'x' || reflectionAxis == 'X')
	{
		for (int i = 0; i < edges; i++)
		{
			glVertex2i(round(pntX[i]), round(pntY[i] * -1));

		}
	}
	else if (reflectionAxis == 'y' || reflectionAxis == 'Y')
	{
		for (int i = 0; i < edges; i++)
		{
			glVertex2i(round(pntX[i] * -1), round(pntY[i]));
		}
	}
	glEnd();
}

void mirror(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3ub(255.0, 87.0, 87.0);

		drawPolygon();
		drawPolygonMirrorReflection(reflectionAxis);
	glFlush();
}
/*-----------------------Mirror Ends-------------------------*/




/*-----------------------Shearing-------------------------*/
char shearingAxis;
int shearingX, shearingY;

void drawPolygonShearing()
{
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);

	if (shearingAxis == 'x' || shearingAxis == 'X')
	{
		glVertex2i(pntX[0], pntY[0]);

		glVertex2i(pntX[1] + shearingX, pntY[1]);
		glVertex2i(pntX[2] + shearingX, pntY[2]);

		glVertex2i(pntX[3], pntY[3]);
	}
	else if (shearingAxis == 'y' || shearingAxis == 'Y')
	{
		glVertex2i(pntX[0], pntY[0]);
		glVertex2i(pntX[1], pntY[1]);

		glVertex2i(pntX[2], pntY[2] + shearingY);
		glVertex2i(pntX[3], pntY[3] + shearingY);
	}
	glEnd();
}

void shearing(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);

		drawPolygon();
		drawPolygonShearing();


	glFlush();
}
/*-----------------------Shearing Ends-------------------------*/

void myInit(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-640.0, 640.0, -480.0, 480.0);
}


int main(int argc, char **argv)

{
    while(true)
    {
     int choice;
     cout<<"Please Choose an option: \n"<<endl;
     cout<<"1)Translation."<<endl;
     cout<<"2)Scaling."<<endl;
     cout<<"3)Rotation."<<endl;
     cout<<"4)Mirror Reflection."<<endl;
     cout<<"5)Shearing."<<endl;
     cout<<"6)exit \n"<<endl;
     cout<<"Enter choice: ";
     cin>>choice;
     cout<<endl;

     switch(choice)
     {

     case 1:
        {
            cout << "Translation." << endl;

	cout << "\n\nFor Polygon:" << endl;

	cout << "Enter no of edges: "; cin >> edges;

	for (int i = 0; i < edges; i++)
	{
		cout << "Enter co-ordinates for vertex " << i + 1 << " : "; cin >> pntX1 >> pntY1;
		pntX.push_back(pntX1);
		pntY.push_back(pntY1);
	}
	cout<<"Give the value and translate the object.\n"<<endl;
	cout<<"Enter value of x: ";
	cin>>x;
	cout<<"Enter value of y: ";
	cin>>y;

    glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Translation");
	glutDisplayFunc(translate);
	myInit();
	glutMainLoop();

        }

     case 2:
        {
             cout << "Scaling." << endl;

	cout << "\n\nFor Polygon:" << endl;

	cout << "Enter no of edges: "; cin >> edges;

	for (int i = 0; i < edges; i++)
	{
		cout << "Enter co-ordinates for vertex " << i + 1 << " : "; cin >> pntX1 >> pntY1;
		pntX.push_back(pntX1);
		pntY.push_back(pntY1);
	}
	cout<<"give the value and scale the object."<<endl;
	cout<<"Enter value of x: ";
	cin>>x;
	cout<<"Enter value of y: ";
	cin>>y;

    glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Scaling");
	glutDisplayFunc(scaling);
	myInit();
	glutMainLoop();
        }

     case 3:
        {
            cout << "Rotation." << endl;

	cout << "\n\nFor Polygon:" << endl;

	cout << "Enter no of edges: "; cin >> edges;

	for (int i = 0; i < edges; i++)
	{
		cout << "Enter co-ordinates for vertex " << i + 1 << " : "; cin >> pntX1 >> pntY1;
		pntX.push_back(pntX1);
		pntY.push_back(pntY1);
	}

	cout<<"Enter the value of the angle: "<<endl;
	cin>>a;

    glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Rotation");
	glutDisplayFunc(rotation);
	myInit();
	glutMainLoop();
        }

     case 4:
        {
           cout << "Mirror Reflection" << endl;

	cout << "\n\nFor Polygon:" << endl;

	cout << "Enter no of edges: "; cin >> edges;

	for (int i = 0; i < edges; i++)
	{
		cout << "Enter co-ordinates for vertex " << i + 1 << " : "; cin >> pntX1 >> pntY1;
		pntX.push_back(pntX1);
		pntY.push_back(pntY1);
	}

		cout << "Enter reflection axis ( x or y ): "; cin >> reflectionAxis;

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Mirror Reflection");
	glutDisplayFunc(mirror);
	myInit();
	glutMainLoop();

	break;
        }

     case 5:
        {
            cout << "Shearing" << endl;


    cout << "\n------------\n" << endl;

	cout << "Enter no of edges for a Polygon: "; cin >> edges;

	for (int i = 0; i < edges; i++)
	{
		cout << "Enter co-ordinates for vertex  " << i + 1 << " : "; cin >> pntX1 >> pntY1;
		pntX.push_back(pntX1);
		pntY.push_back(pntY1);
	}
		cout << "Enter reflection axis ( x or y ): "; cin >> shearingAxis;
		if (shearingAxis == 'x' || shearingAxis == 'X')
		{
			cout << "Enter the shearing factor for X: "; cin >> shearingX;
		}
		else
		{
			cout << "Enter the shearing factor for Y: "; cin >> shearingY;
		}


	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Shearing");
	glutDisplayFunc(shearing);
	myInit();
	glutMainLoop();

	break;
        }

     case 6:
        {
            cout<<"Thank You!!!"<<endl;
            return 0;
        }
     }
   }
}

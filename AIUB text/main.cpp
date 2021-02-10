#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(5);
    // Draw a Red 1x1 Square centered at origin
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to white and opaque
    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f); // white
    //Line Drawing For A//
    glVertex2f(-1.0f, -0.8f);
    glVertex2f(-0.9f, -0.8f);

    glVertex2f(-0.7f, -0.8f);
    glVertex2f(-0.6f, -0.8f);

    glVertex2f(-0.9f, -0.3f);
    glVertex2f(-0.7f, -0.3f);

    glVertex2f(-0.9f, 0.0f);
    glVertex2f(-0.7f, 0.0f);

    glVertex2f(-0.85f, 0.5f);
    glVertex2f(-0.75f, 0.5f);

    glVertex2f(-0.9f, 0.8f);
    glVertex2f(-0.7f, 0.8f);

    glVertex2f(-1.0f, -0.8f);
    glVertex2f(-0.9f, 0.8f);

    glVertex2f(-0.9f, -0.8f);
    glVertex2f(-0.9f, -0.3f);

    glVertex2f(-0.7f, -0.8f);
    glVertex2f(-0.7f, -0.3f);

    glVertex2f(-0.6f, -0.8f);
    glVertex2f(-0.7f, 0.8f);

    glVertex2f(-0.9f, 0.0f);
    glVertex2f(-0.85f, 0.5f);

    glVertex2f(-0.7f, 0.0f);
    glVertex2f(-0.75f, 0.5f);
    //Line Drawing For I ///
    glVertex2f(-0.5f, -0.8f);
    glVertex2f(-0.2f, -0.8f);

    glVertex2f(-0.5f, 0.8f);
    glVertex2f(-0.2f, 0.8f);

    glVertex2f(-0.5f, -0.7f);
    glVertex2f(-0.4f, -0.7f);

    glVertex2f(-0.2f, -0.7f);
    glVertex2f(-0.3f, -0.7f);

    glVertex2f(-0.5f, 0.7f);
    glVertex2f(-0.4f, 0.7f);

    glVertex2f(-0.2f, 0.7f);
    glVertex2f(-0.3f, 0.7f);

    glVertex2f(-0.5f, -0.7f);
    glVertex2f(-0.5f, -0.8f);

    glVertex2f(-0.2f, -0.7f);
    glVertex2f(-0.2f, -0.8f);

    glVertex2f(-0.5f, 0.7f);
    glVertex2f(-0.5f, 0.8f);

    glVertex2f(-0.2f, 0.7f);
    glVertex2f(-0.2f, 0.8f);

    glVertex2f(-0.4f, -0.7f);
    glVertex2f(-0.4f, 0.7f);

    glVertex2f(-0.3f, -0.7f);
    glVertex2f(-0.3f, 0.7f);


    //Line Drawing For U////
    glVertex2f(0.0f, -0.8f);
    glVertex2f(0.4f, -0.8f);

    glVertex2f(0.15f, -0.65f);
    glVertex2f(0.25f, -0.65f);

    glVertex2f(0.0f, 0.8f);
    glVertex2f(0.15f, 0.8f);

    glVertex2f(0.25f, 0.8f);
    glVertex2f(0.4f, 0.8f);

    glVertex2f(0.0f, -0.8f);
    glVertex2f(0.0f, 0.8f);

    glVertex2f(0.15f, 0.8f);
    glVertex2f(0.15f, -0.65f);

    glVertex2f(0.25f, 0.8f);
    glVertex2f(0.25f, -0.65f);

    glVertex2f(0.4f, -0.8f);
    glVertex2f(0.4f, 0.8f);

    //Line Drawing For B/////////
    glVertex2f(0.5f, 0.8f);
    glVertex2f(0.5f, -0.8f);

    glVertex2f(0.5f, 0.8f);
    glVertex2f(1.0f, 0.8f);

    glVertex2f(1.0f, 0.1f);
    glVertex2f(1.0f, 0.8f);

    glVertex2f(0.6f, 0.1f);
    glVertex2f(1.0f, 0.1f);

    glVertex2f(0.6f, -0.1f);
    glVertex2f(1.0f, -0.1f);

    glVertex2f(0.6f, 0.1f);
    glVertex2f(0.6f, -0.1f);

    glVertex2f(1.0f, -0.1f);
    glVertex2f(1.0f, -0.8f);

    glVertex2f(1.0f, -0.8f);
    glVertex2f(0.5f, -0.8f);

    glVertex2f(0.6f, 0.7f);
    glVertex2f(0.9f, 0.7f);

    glVertex2f(0.6f, 0.7f);
    glVertex2f(0.6f, 0.3f);

    glVertex2f(0.6f, 0.3f);
    glVertex2f(0.9f, 0.3f);

    glVertex2f(0.9f, 0.3f);
    glVertex2f(0.9f, 0.7f);

    glVertex2f(0.6f, -0.7f);
    glVertex2f(0.9f, -0.7f);

    glVertex2f(0.6f, -0.7f);
    glVertex2f(0.6f, -0.3f);

    glVertex2f(0.6f, -0.3f);
    glVertex2f(0.9f, -0.3f);

   glVertex2f(0.9f, -0.3f);
    glVertex2f(0.9f, -0.7f);
    glEnd();

    glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv)
{
    glutInit(&argc, argv);                 // Initialize GLUT
    glutCreateWindow("OpenGL Setup"); // Create a window with the given title
    glutInitWindowSize(320, 320);   // Set the window's initial width & height
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop();           // Enter the event-processing loop
    return 0;
}

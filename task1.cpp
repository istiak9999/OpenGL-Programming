#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

//Program to create an empty Widdow
void init(){

    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	//Line C
	glutInitWindowSize(500,500);
	glutInitWindowPosition(200,200);
	glutCreateWindow("Task 1: House ");
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();



}

void display()
{
    gluOrtho2D(0.0, 400.0, 0.0, 400.0);

    glClearColor(0.0,0.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
    //top triangle
    glBegin(GL_TRIANGLES);
    glColor3f (0, 1, 0);
    glVertex2i(50, 250);
    glVertex2i(350, 250);
    glVertex2i(200, 320);
    glEnd();
     //main body of hut
    glBegin(GL_POLYGON);
    glColor3f (1,0, 0);

    glVertex2i(50, 250);
    glVertex2i(50, 0);

    glVertex2i(50, 0);
    glVertex2i(350, 0);

    glVertex2i(350, 0);
    glVertex2i(350, 250);

    glVertex2i(350, 250);
    glVertex2i(50, 250);
    glEnd();

    //door
    glBegin(GL_POLYGON);
    glColor3f (0,0, 1);

    glVertex2i(150,0);
    glVertex2i(150, 200);

    glVertex2i(150, 0);
    glVertex2i(250, 0);

    glVertex2i(150, 200);
    glVertex2i(250, 200);

    glVertex2i(250, 200);
    glVertex2i(250, 0);
    glEnd();

    //left window
    glBegin(GL_POLYGON);
    glColor3f (0,0, 1);

    glVertex2i(80,150);
    glVertex2i(80,180);

    glVertex2i(80, 150);
    glVertex2i(120, 150);

    glVertex2i(120, 150);
    glVertex2i(120, 180);

    glVertex2i(80, 180);
    glVertex2i(120, 180);
    glEnd();

    //right window
    glBegin(GL_POLYGON);
    glColor3f (0,0, 1);

    glVertex2i(280,150);
    glVertex2i(320,180);

    glVertex2i(280, 150);
    glVertex2i(320, 150);

    glVertex2i(320, 150);
    glVertex2i(320, 180);

    glVertex2i(280, 180);
    glVertex2i(320, 180);
    glEnd();

	glFlush();
}

int main(int argc,char **argv)
{
	glutInit(&argc,argv);		//Line A
	init();					//Line B
	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}

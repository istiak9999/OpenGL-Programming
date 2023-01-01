#include <GL/glut.h>
#include <math.h>



void DrawCircle(float rx, float ry, float cx, float cy)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy);

    for (int i = 0;i <= 100;i++) {
        float angle = 2 * 3.1416f * i / 100;
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();


}
void Draw() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 0, 1.0);
    DrawCircle(5, 5, 0, 0);

    glFlush();
}


void Initialize() {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-15, 15, -15, 15, -15, 15);
}

int main(int iArgc, char** cppArgv) {
    glutInit(&iArgc, cppArgv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Universum");
    Initialize();
    glutDisplayFunc(Draw);
    glClear(GL_COLOR_BUFFER_BIT);
    glutMainLoop();
    return 0;

}
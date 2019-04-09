/*Headers*/
#include <windows.h>
#include <GL/glut.h>
/*End of headers*/
/* Check Compiler*/
#ifdef __FLAT__
#include <Windows.h>
#endif
/*End of Check*/
/*Preloaded  Functions*/
void myInit(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glShadeModel(GL_FLAT);
}
void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex2f(0.90 , 0.50);
        glVertex2f(0.50 , 0.90);
        glVertex2f(0.10 , 0.50);
        glVertex2f(0.50 , 0.10);
    glEnd();
    glutSwapBuffers();
}
/*End of preloaded functions*/
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Window Title -- Tamrin");
    myInit();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return 0;
}


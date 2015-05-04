#include <stdio.h>
//#include<windows.h>
#include<GL/glut.h>
#include<string.h>
#include<math.h>
#include<string.h>
#include "mouse.h"
#include "common.h"
//#include "gymoutside.h"

//#include "displayfunc.h"
//---------------------------------------------------------------------------------
int main(int argc, char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode ( GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
glutInitWindowPosition(0,0);
glutInitWindowSize(1400,1000);
glutCreateWindow ("Simulation of Gym");
glClearColor(0.39, 0.58, 0.92, 0.25);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glOrtho(0.0, 12.0, 0.0, 10.0, -1.0, 1.0);
//glutDisplayFunc(Welcome);
func();
glutMouseFunc(mouse_w);
glutSwapBuffers();
glutMainLoop();
return 0;
}

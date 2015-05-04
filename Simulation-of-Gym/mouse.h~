#ifndef MOUSE_H
#define MOUSE_H
#include <stdio.h>
#include<GL/glut.h>
#include<string.h>
#include<math.h>
#include<string.h>
#include "common.h"
#include "displayfunc.h"
void mouse_r2(int btn,int state,int x,int y);
void mouse_i2(int btn,int state,int x,int y);
void mouse_i(int btn,int state,int x,int y);
void mouse_w(int btn,int state,int x,int y);
void mouse_h2(int btn,int state,int x,int y);
//void mouse_i(int btn,int state,int x,int y)

//-----------------------------------------------------------------------------------------------
void func()
{
glutHideWindow();
/*
glutInitWindowSize(1400,1000);
glutCreateWindow ("GYM");
//glClear(GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 12.0, 0.0, 10.0, -1.0, 1.0);
glPointSize(3.0);
glutDisplayFunc(func1);
glutMouseFunc(mouse_h2);
glFlush();*/
glutInitDisplayMode ( GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
glutInitWindowPosition(0,0);
glutInitWindowSize(1400,1000);
glutCreateWindow ("Simulation of Gym");
glClearColor(1.0, 0.75, 0.25, 0.25);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glOrtho(0.0, 12.0, 0.0, 10.0, -1.0, 1.0);
glutDisplayFunc(func1);
//glutMouseFunc(mouse);
glutSwapBuffers();
}
//------------------------------------------------page 5:room2---------
void mouse_r2(int btn,int state,int x,int y)
{
    x=x*1400/glutGet(GLUT_SCREEN_WIDTH);
    y=y*1000/glutGet(GLUT_SCREEN_HEIGHT);
    printf("MOUSE COORDINATES INTRO SCREEN %d %d \n",x,y);
    if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
    {
        if((x>= 175 && x<=270 && y>=820  && y<=870))  //prev
        {
            func();
        }
    }
}
//---------------------------------page 4 :gym inside----------------

void mouse_h2(int btn,int state,int x,int y) //gym
{
x=x*1400/glutGet(GLUT_SCREEN_WIDTH);
y=y*1000/glutGet(GLUT_SCREEN_HEIGHT);
printf("MOUSE COORDINATES INTRO SCREEN %d %d \n",x,y);
if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN) //exit
{
if((x>= 1070 && x<=1170 && y>=820 && y<=870))
{
exit(0);
glFlush();
}
else if((x>= 175 && x<=270 && y>=820 && y<=870)) //prev
{
glutHideWindow();
glutCreateWindow ("Gym-outside");
glClearColor(1.0, 0.75, 0.25, 0.25);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glOrtho(0.0, 12.0, 0.0, 10.0, -1.0, 1.0);
glutDisplayFunc(page2);
glutMouseFunc(mouse_i2);
}
else if(x>= 285 && x<=332 && y>=180 && y<=400) //room2
{
 glutSwapBuffers();
printf("Clicked! ENter Room2");
glutHideWindow();
glutCreateWindow ("ROom2");
glClearColor(1.0, 0.75, 0.25, 0.25);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glOrtho(0.0, 12.0, 0.0, 10.0, -1.0, 1.0);
glutDisplayFunc(room2);
glutMouseFunc(mouse_r2);
}
}
}

//---------------------------------------page 2 : gym outside no mouse func---------

void mouse_i2(int btn,int state,int x,int y)
{
//x=(x/glutGet(GLUT_SCREEN_WIDTH))*1400;
//y=y*1000/glutGet(GLUT_SCREEN_HEIGHT);
x=x*1400/glutGet(GLUT_SCREEN_WIDTH);
y=y*1000/glutGet(GLUT_SCREEN_HEIGHT);
printf("MOUSE COORDINATES INTRO SCREEN %d %d \n",x,y);
}
//--------------------------------------page 2 :intro------------------------------
void mouse_i(int btn,int state,int x,int y)
{
x=x*1400/glutGet(GLUT_SCREEN_WIDTH);
y=y*1000/glutGet(GLUT_SCREEN_HEIGHT);
printf("MOUSE COORDINATES INTRO SCREEN %d %d \n",x,y);
if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
{
if((x>= 1070 && x<=1170 && y>=820 && y<=870)) //next
{
glutHideWindow();
glutCreateWindow ("Gym-outside");
glClearColor(1.0, 0.75, 0.25, 0.25);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glOrtho(0.0, 12.0, 0.0, 10.0, -1.0, 1.0);
glutDisplayFunc(page2);
glutMouseFunc(mouse_i2);
}
else if((x>= 170 && x<=270 && y>=820 && y<=870)) //prev
{
glutHideWindow();
glutCreateWindow ("Simulation of Gym");
glClearColor(1.0, 0.75, 0.25, 0.25);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glOrtho(0.0, 12.0, 0.0, 10.0, -1.0, 1.0);
glutDisplayFunc(Welcome);
glutMouseFunc(mouse_w);
}
else if((x>= 255 && x<=490 && y>=435 && y<=485)) //button 1
{
glBegin(GL_POLYGON);
glPointSize(5.0);
glColor3f(0.71, 0.5, 0.55);
glVertex2f(6.2,8.0);glVertex2f(11.2,8.0);
glVertex2f(11.2,3.0);
glVertex2f(6.2,3.0);
glEnd();
dumbells(6.2,4.0,0,0);
//glFlush();
glutSwapBuffers();
}
else if((x>= 255 && x<=490 && y>=530 && y<=585)) //button 2
{
glBegin(GL_POLYGON);
glPointSize(5.0);
glColor3f(0.71, 0.5, 0.55);
glVertex2f(6.2,8.0);
glVertex2f(11.2,8.0);
glVertex2f(11.2,3.0);
glVertex2f(6.2,3.0);
glEnd();
punchb(7,0);
//glFlush();
glutSwapBuffers();
}
else if((x>= 255 && x<=490 && y>=630 && y<=680)) //button 3
{
glBegin(GL_POLYGON);glPointSize(5.0);
glColor3f(0.71, 0.5, 0.55);
glVertex2f(6.2,8.0);
glVertex2f(11.2,8.0);
glVertex2f(11.2,3.0);
glVertex2f(6.2,3.0);
glEnd();
bench(2,2);
//glFlush();
glutSwapBuffers();
}
}
}
//--------------------------------------------------page 1 :welcome page----------------------------------------
void mouse_w(int btn,int state,int x,int y)
{
x=x*1400/glutGet(GLUT_SCREEN_WIDTH);
y=y*1000/glutGet(GLUT_SCREEN_HEIGHT);
printf("MOUSE COORDINATES INTRO SC848REEN %d %d \n",x,y);
if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
{
if((x>= 1070 && x<=1170 && y>=820 && y<=870))
{
glutHideWindow();
glutInitWindowSize(1400,1000);
glutCreateWindow ("Intro");
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 12.0, 0.0, 10.0, -1.0, 1.0);
glPointSize(3.0);
glutDisplayFunc(intro1);
glutMouseFunc(mouse_i);
glFlush();
}
}
}



//---------------------------------------end----------------------------------------
#endif

#ifndef ROOM2_H
#define ROOM2_H
#include "common.h"
#include <stdio.h>
//#include<windows.h>
#include<GL/glut.h>
#include<string.h>
#include<math.h>
#include<string.h>


void colorlegs(float x,float y)
{
glBegin(GL_POLYGON); // leg color
glColor3f(1.0,0.86,0.70);
glVertex2f(x-0.06,y-0.5);
glVertex2f(x+0.45,y-0.9);
glVertex2f(x+0.65,y-1.0);
glVertex2f(x+0.19,y-0.5);
glEnd();
glBegin(GL_POLYGON); //thigh color
glColor3f(1.0,0.86,0.70);
glVertex2f(x-0.075,y);
glVertex2f(x-0.06,y-0.5);
glVertex2f(x+0.19,y-0.5);
glVertex2f(x+0.25,y);
glEnd();
glBegin(GL_POLYGON); // foot color
glColor3f(1.0,0.86,0.70);
glVertex2f(x+0.45,y-0.9);
glVertex2f(x+0.30,y-1.3);
glVertex2f(x+0.65,y-1.0);
glEnd();
}
void legs(float x,float y)
{
colorlegs(x,y);
glBegin(GL_LINE_LOOP); //left leg outline
glColor3f(0.0,0.0,0.0);
glVertex2f(x-0.075,y);
glVertex2f(x-0.06,y-0.5);
glVertex2f(x+0.45,y-0.9);
glVertex2f(x+0.30,y-1.3);
glVertex2f(x+0.65,y-1.0);
glVertex2f(x+0.19,y-0.5);
glVertex2f(x+0.25,y);
glEnd();
x=x+0.5;
colorlegs(x,y);
glBegin(GL_LINE_LOOP); //right leg outline
glColor3f(0.0,0.0,0.0);
glVertex2f(x-0.075,y);
glVertex2f(x-0.06,y-0.5);
glVertex2f(x+0.45,y-0.9);
glVertex2f(x+0.30,y-1.3);
glVertex2f(x+0.65,y-1.0);
glVertex2f(x+0.19,y-0.5);
glVertex2f(x+0.25,y);glEnd();
}
void colorfist()
{
glBegin(GL_POLYGON); //fist
glColor3f(0.0,0.0,0.0);
glVertex2f(6.2,8.72);
glVertex2f(6.2+0.2,8.72);
glVertex2f(6.2+0.2,8.72-0.3);
glVertex2f(6.2,8.72-0.3);
glVertex2f(6.2,8.72);
glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(6.2+1.5,8.72);
glVertex2f(6.2+1.7,8.72);
glVertex2f(6.2+1.7,8.72-0.3);
glVertex2f(6.2+1.5,8.72-0.3);
glVertex2f(6.2+1.5,8.72);
glEnd();
}
//gymguy
void gymguy(float x,float y)
{
//left handglBegin(GL_LINE_LOOP); //hand
glColor3f(0.0,0.0,0.0);
glVertex2f(6.2+0.02,8.72-0.3);
glVertex2f(6.2-0.01,8.72-0.65);
glEnd();
glBegin(GL_LINE_LOOP); //hand
glColor3f(0.0,0.0,0.0);
glVertex2f(6.2-0.01,8.72-0.65);
glVertex2f(x+0.25,y-1.05);
glEnd();
glBegin(GL_LINE_LOOP); //hand
glColor3f(0.0,0.0,0.0);
glVertex2f(6.2+0.18,8.72-0.3);
glVertex2f(x+0.21,y-0.65);
glEnd();
glBegin(GL_LINE_LOOP); //hand lower
glColor3f(0.0,0.0,0.0);
glVertex2f(x+0.25,y-1.05);
glVertex2f(x+0.65,y-1.05);
glEnd();
//right hand-------------------------------------------------------
glBegin(GL_LINE_LOOP); //hand
glColor3f(0.0,0.0,0.0);
glVertex2f(6.2+1.52,8.72-0.3);
glVertex2f(x+1.49,y-0.65);
glEnd();
glBegin(GL_LINE_LOOP); //hand
glColor3f(0.0,0.0,0.0);
glVertex2f(6.2+1.68,8.72-0.3);
glVertex2f(6.2+1.72,8.72-0.65);
glEnd();
glBegin(GL_LINE_LOOP); //hand
glColor3f(0.0,0.0,0.0);
glVertex2f(6.2+1.72,8.72-0.65);
glVertex2f(x+1.46,y-1.05);
glEnd();
glBegin(GL_LINE_LOOP); //hand lower
glColor3f(0.0,0.0,0.0);
glVertex2f(x+1.46,y-1.05);
glVertex2f(x+1.0,y-1.05);
glEnd();
glColor3f(1.0,0.86,0.70); //biceps
drawCircle(x+0.43,y-1.15,0.6,40,135);
drawCircle(x+1.23,y-1.15,0.6,58,185);
//face
glColor3f(0,0,0);
drawCircle(x+0.84,y-0.395,0.3,0,360);
//body left
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(x+1.28,y-1.05);
glVertex2f(x+1.15,y-1.95);
glEnd();
//body right
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(x+0.43,y-1.05);
glVertex2f(x+0.58,y-1.95);
glEnd();
//waist
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(x+1.15,y-1.95);
glVertex2f(x+0.58,y-1.95);
glEnd();
//trouser
glBegin(GL_POLYGON);glColor3f(0.41,0.41,0.41);
glVertex2f(x+1.15,y-1.95);
glVertex2f(x+1.30,y-2.65);
glVertex2f(x+0.9,y-2.65);
glVertex2f(x+0.85,y-2.55);
glVertex2f(x+0.8,y-2.65);
glVertex2f(x+0.4,y-2.65);
glVertex2f(x+0.58,y-1.95);
glEnd();
glutSwapBuffers();
legs(x+0.5,y-2.65);
glBegin(GL_POLYGON); //color body
glColor3f(1.0,0.86,0.70);
glVertex2f(x+0.43,y-1.05);
glVertex2f(x+0.58,y-1.95);
glVertex2f(x+1.15,y-1.95);
glVertex2f(x+1.28,y-1.05);
glVertex2f(x+0.43,y-1.05);
glEnd();
glBegin(GL_POLYGON); //color body 2
glVertex2f(x+0.21,y-0.65);
glVertex2f(6.2+0.18,8.72-0.3);
glVertex2f(6.2+0.02,8.72-0.3);
glVertex2f(6.2-0.01,8.72-0.65);
glVertex2f(x+0.25,y-1.05);
glVertex2f(x+1.46,y-1.05);
glVertex2f(6.2+1.72,8.72-0.65);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(6.2+1.72,8.72-0.65);
glVertex2f(6.2+1.68,8.72-0.3);
glVertex2f(6.2+1.52,8.72-0.3);
glVertex2f(x+1.49,y-0.65);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(x+1.49,y-0.65);
glVertex2f(6.2-0.01,8.72-0.65);
glVertex2f(6.2+1.72,8.72-0.65);
glVertex2f(x+0.25,y-1.05);
glEnd();
colorfist();
}

void room()
{
float i,y=0;
//glClear(GL_COLOR_BUFFER_BIT);
//glClearColor(0.0,0.0,1.0,0.25);
glColor3f(0.0,0.0,1.0);
//making walls paint
glBegin(GL_POLYGON);
glColor3f(1.0,0.3,0.0);
glVertex2f(0,0.0);
glVertex2f(2.32,5.5);
glVertex2f(2.32,10);
glVertex2f(0,10);
glEnd();glBegin(GL_POLYGON);
glColor3f(1.0,0.3,0.0);
glVertex2f(2.32,5.5);
glVertex2f(9.68,5.5);
glVertex2f(9.68,10);
glVertex2f(2.32,10);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1.0,0.3,0.0);
glVertex2f(9.68,10);
glVertex2f(9.68,5.5);
glVertex2f(12,0);
glVertex2f(12,10);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1.0,0.3,0.0);
glVertex2f(0,0);
glVertex2f(2.32,5.5);
glVertex2f(9.68,5.5);
glVertex2f(12,0);
glEnd();
//wall outline
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(0,0.0);
glVertex2f(2.32,5.5);
glVertex2f(2.32,10);
glVertex2f(0,10);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(2.32,5.5);
glVertex2f(9.68,5.5);
glVertex2f(9.68,10);
glVertex2f(2.32,10);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(9.68,10);
glVertex2f(9.68,5.5);
glVertex2f(12,0);
glVertex2f(12,10);
glEnd();
//pull up hangs
glBegin(GL_POLYGON);
glColor3f(0.16,0.16,0.16);
glVertex2f(2.32,8.7);
glVertex2f(9.68,8.7);
glVertex2f(9.68,8.5);
glVertex2f(2.32,8.5);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(1.5,1.0);
glVertex2f(2.32,1.0);
glVertex2f(2.32,1.5);
glVertex2f(1.5,1.5);
glEnd();
drawString(GLUT_BITMAP_TIMES_ROMAN_24,"PREV",1.57,1.2);
}


void room2()
{
float i=0;
//----------------
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glClear(GL_COLOR_BUFFER_BIT);
glPushMatrix();
for(i=0;i<=0.30;i+=0.01)
{
room();
gymguy(6.2,8.72+i);
glutSwapBuffers();
delay(90);
//glFlush();
}
for(i=0.30;i>0;i-=0.01){
room();
gymguy(6.2,8.72+i);
glutSwapBuffers();
delay(50);
//glFlush();
}
glPopMatrix();
//room2();
glutPostRedisplay();
glFinish();
glutSwapBuffers();
}
#endif

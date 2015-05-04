#ifndef INTRO_H
#define INTRO_H

#include "common.h"
#include <stdio.h>
//#include<windows.h>
#include<GL/glut.h>
#include<string.h>
#include<math.h>
#include<string.h>


void intro1()
{
glClearColor(0.71, 0.5, 0.55,0.25); // black background
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.0,0.0,0.0);
glColor3f(1.0,0.0,0.0);
//button NEXT
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(9.18,1.0);
glVertex2f(10,1.0);
glVertex2f(10,1.5);
glVertex2f(9.18,1.5);
glEnd();
// Button PREV
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(1.5,1.0);
glVertex2f(2.32,1.0);
glVertex2f(2.32,1.5);
glVertex2f(1.5,1.5);
glEnd();
//button 1
glBegin(GL_POLYGON);
glColor3f(0.2,0.6,0.8);
glVertex2f(2.2,5.0);
glVertex2f(4.2,5.0);
glVertex2f(4.2,5.5);
glVertex2f(2.2,5.5);
glEnd();
//button 2
glBegin(GL_POLYGON);
glColor3f(0.2,0.6,0.8);
glVertex2f(2.2,4.0);
glVertex2f(4.2,4.0);
glVertex2f(4.2,4.5);
glVertex2f(2.2,4.5);
glEnd();
//button 3
glBegin(GL_POLYGON);
glColor3f(0.2,0.6,0.8);
glVertex2f(2.2,3.0);
glVertex2f(4.2,3.0);
glVertex2f(4.2,3.5);
glVertex2f(2.2,3.5);
glEnd();
//mini display
glBegin(GL_POLYGON);
glPointSize(5.0);
glColor3f(0.71, 0.5, 0.55);
glVertex2f(6.2,8.0);
glVertex2f(11.2,8.0);
glVertex2f(11.2,3.0);
glVertex2f(6.2,3.0);
glEnd();
glColor3f(0.0,0.0,0.0);
drawString(GLUT_BITMAP_TIMES_ROMAN_24,"NEXT",9.25,1.2);
drawString(GLUT_BITMAP_TIMES_ROMAN_24,"PREV",1.57,1.2);
drawString(GLUT_BITMAP_TIMES_ROMAN_24,"DUMBLES",2.4,5.2);
drawString(GLUT_BITMAP_TIMES_ROMAN_24,"PUNCHING BAG",2.4,4.2);
drawString(GLUT_BITMAP_TIMES_ROMAN_24,"WORKOUT BENCH",2.25,3.2);
drawString(GLUT_BITMAP_TIMES_ROMAN_24,"Check out some of our equipments",1.0,6.5);
drawString(GLUT_BITMAP_TIMES_ROMAN_24,"'MOTIVATION is what gets you started, HABIT is what keeps you going!'",0.5,8.5);
drawString(GLUT_BITMAP_TIMES_ROMAN_24,"WELCOME TO THE WORLD OF GYM",1.5,9.5);
drawString(GLUT_BITMAP_TIMES_ROMAN_24,"***************************************",1.3,9.0);
//glFlush();
glutSwapBuffers();
}
#endif

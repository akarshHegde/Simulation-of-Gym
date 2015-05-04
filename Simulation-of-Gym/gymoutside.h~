#ifndef GYMOUTSIDE_H
#define GYMOUTSIDE_H
#include "common.h"
#include "mouse.h"
#include "gyminside.h"
#include <stdio.h>
//#include<windows.h>
#include<GL/glut.h>
#include<string.h>
#include<math.h>
#include<string.h>
//------------------------------------funcs required-------------------------------------
void movebackhand(float i,float j){
glBegin(GL_POLYGON);
glColor3f(0.96,0.80,0.69);
glVertex2f(1.47+6.5,1.8+1.0);
glVertex2f(1.49+6.5,1.8+1.0);
glVertex2f(1.49+6.5+(0.50*i),1.5+1.0+j);
glVertex2f(1.47+6.5+(0.50*i),1.5+1.0+j);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.96,0.80,0.69);
glVertex2f(1.07+6.5,1.8+1.0);
glVertex2f(1.09+6.5,1.8+1.0);
glVertex2f(1.09+6.5-(0.50*i),1.5+1.0+j);
glVertex2f(1.07+6.5-(0.50*i),1.5+1.0+j);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(1.47+6.5,1.8+1.0);
glVertex2f(1.49+6.5,1.8+1.0);
glVertex2f(1.49+6.5+(0.50*i),1.5+1.0+j);
glVertex2f(1.47+6.5+(0.50*i),1.5+1.0+j);
glEnd();
glBegin(GL_LINE_LOOP);glColor3f(0.0,0.0,0.0);
glVertex2f(1.07+6.5,1.8+1.0);
glVertex2f(1.09+6.5,1.8+1.0);
glVertex2f(1.09+6.5-(0.50*i),1.5+1.0+j);
glVertex2f(1.07+6.5-(0.50*i),1.5+1.0+j);
glEnd();
glColor3f(0.96,0.80,0.69);
drawCircle(7.98+(0.50*i),2.5+j,0.02,0,360);
glColor3f(0.96,0.80,0.69);
drawCircle(7.58-(0.50*i),2.5+j,0.02,0,360);
}

void house()
{
glClearColor(1.0, 0.75, 0.25, 0.25);
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_POLYGON); //sky
glColor3f(0.0,0.7,0.7);
glVertex2f(0.0,5.0);glVertex2f(12.0,5.0);
glColor3f(0.0,0.0,0.7);
glVertex2f(12.0,10.0);
glVertex2f(0.0,10.0);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.4,0.4,0.4);
glVertex2f(4.8,9.1);
glColor3f(1.0,1.0,1.0);
glVertex2f(10.7,9.1);
glColor3f(0.4,0.4,0.4);
glVertex2f(10.7,9.6);
glColor3f(1.0,1.0,1.0);
glVertex2f(4.8,9.6);
glEnd();
glBegin(GL_POLYGON); //parking board
glColor3f(0.0,0.0,0.0);
glVertex2f(1.0,4.5);
glVertex2f(1.1,4.5);
glVertex2f(1.1,6.0);
glVertex2f(1.0,6.0);
glEnd();glBegin(GL_POLYGON);
glColor3f(1.0,1.0,1.0);
glVertex2f(0.5,6.0);
glVertex2f(1.7,6.0);
glVertex2f(1.7,6.4);
glVertex2f(0.5,6.4);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(0.5,6.0);
glVertex2f(1.7,6.0);
glVertex2f(1.7,6.4);
glVertex2f(0.5,6.4);
glEnd();
drawString(GLUT_BITMAP_TIMES_ROMAN_24,"PARKING",0.6,6.1);
glBegin(GL_POLYGON); //gym name
glColor3f(1.0,1.0,1.0);
glVertex2f(4.8,9.1);
glColor3f(1.0,1.0,1.0);
glVertex2f(10.7,9.1);
glColor3f(0.4,0.4,0.4);glVertex2f(10.7,9.6);
glColor3f(1.0,1.0,1.0);
glVertex2f(4.8,9.6);
glEnd();
glColor3f(0.0,0.0,0.0);
drawString(GLUT_BITMAP_TIMES_ROMAN_24,"GYM WORLD",7.0,9.2);
glBegin(GL_POLYGON); //gym building
glColor3f(1.0,0.0,0.0);
glVertex2f(4.5,9.1);
glVertex2f(11,9.1);
glVertex2f(10.9,9.0);
glVertex2f(4.6,9.0);
glEnd();
glBegin(GL_LINE_LOOP); //gym building
glColor3f(0.0,0.0,0.0);
glVertex2f(4.5,9.1);
glVertex2f(11,9.1);
glVertex2f(10.9,9.0);
glVertex2f(4.6,9.0);
glEnd();glBegin(GL_POLYGON); //top floor
glColor3f(1.0,0.75,0.25);
glVertex2f(4.6,9.0);
glColor3f(1.0,0.0,0.0);
glVertex2f(4.6,7.0);
glColor3f(1.0,0.75,0.25);
glVertex2f(10.9,7.0);
glColor3f(1.0,0.0,0.0);
glVertex2f(10.9,9.0);
glEnd();
glBegin(GL_LINE_LOOP); //top floor
glColor3f(0.0,0.0,0.0);
glVertex2f(4.6,9.0);
glVertex2f(4.6,7.0);
glVertex2f(10.9,7.0);
glVertex2f(10.9,9.0);
glEnd();
glBegin(GL_POLYGON); //window1
glColor3f(0.10,0.90,1.0);
glVertex2f(5.0,7.3);
glColor3f(1.0,1.0,1.0);glVertex2f(6.0,7.3);
glColor3f(0.10,0.90,1.0);
glVertex2f(6.0,8.5);
glColor3f(1.0,1.0,1.0);
glVertex2f(5.0,8.5);
glEnd();
glBegin(GL_LINE_LOOP); //window1
glColor3f(0.0,0.0,0.0);
glVertex2f(5.0,7.3);
glVertex2f(6.0,7.3);
glVertex2f(6.0,8.5);
glVertex2f(5.0,8.5);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.10,0.90,1.0);
glVertex2f(5.0,8.5);
glVertex2f(4.9,8.6);
glVertex2f(5.5,8.8);
glVertex2f(6.1,8.6);
glVertex2f(6.0,8.5);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(5.0,8.5);
glVertex2f(4.9,8.6);
glVertex2f(5.5,8.8);
glVertex2f(6.1,8.6);
glVertex2f(6.0,8.5);
glEnd();
glBegin(GL_POLYGON); //window2
glColor3f(0.10,0.90,1.0);
glVertex2f(9.4,7.3);
glColor3f(1.0,1.0,1.0);
glVertex2f(10.4,7.3);
glColor3f(0.10,0.90,1.0);
glVertex2f(10.4,8.5);
glColor3f(1.0,1.0,1.0);
glVertex2f(9.4,8.5);
glEnd();
glBegin(GL_LINE_LOOP); //window2
glColor3f(0.0,0.0,0.0);
glVertex2f(9.4,7.3);
glVertex2f(10.4,7.3);
glVertex2f(10.4,8.5);
glVertex2f(9.4,8.5);glEnd();
glBegin(GL_POLYGON);
glColor3f(0.10,0.90,1.0);
glVertex2f(9.4,8.5);
glVertex2f(9.3,8.6);
glVertex2f(9.9,8.8);
glVertex2f(10.5,8.6);
glVertex2f(10.4,8.5);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(9.4,8.5);
glVertex2f(9.3,8.6);
glVertex2f(9.9,8.8);
glVertex2f(10.5,8.6);
glVertex2f(10.4,8.5);
glEnd();
glBegin(GL_POLYGON); //ground floor
glColor3f(0.10,0.90,0.10);
glVertex2f(4.3,7.0);
glVertex2f(11.2,7.0);
glVertex2f(11.1,6.7);
glVertex2f(4.4,6.7);
glEnd();
glBegin(GL_LINE_LOOP); //ground floor
glColor3f(0.0,0.0,0.0);
glVertex2f(4.3,7.0);
glVertex2f(11.2,7.0);
glVertex2f(11.1,6.7);
glVertex2f(4.4,6.7);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1.0,0.75,0.25);
glVertex2f(4.4,6.7);
glColor3f(1.0,0.0,0.0);
glVertex2f(4.4,2.5);
glColor3f(1.0,0.75,0.25);
glVertex2f(11.1,2.5);
glColor3f(1.0,0.0,0.0);
glVertex2f(11.1,6.7);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);glVertex2f(4.4,6.7);
glVertex2f(4.4,2.5);
glVertex2f(11.1,2.5);
glVertex2f(11.1,6.7);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.10,0.90,1.0);
glVertex2f(4.7,2.5);
glColor3f(1.0,1.0,1.0);
glVertex2f(4.7,5.5);
glColor3f(0.10,0.90,1.0);
glVertex2f(10.7,5.5);
glColor3f(0.10,0.90,1.0);
glVertex2f(10.7,2.5);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(4.7,2.5);
glVertex2f(4.7,5.5);
glVertex2f(10.7,5.5);
glVertex2f(10.7,2.5);
glEnd();glBegin(GL_POLYGON);
glColor3f(0.10,0.90,1.0);
glVertex2f(4.7,5.5);
glVertex2f(4.6,5.6);
glVertex2f(4.6,5.7);
glVertex2f(7.7,6.2);
glVertex2f(10.8,5.7);
glVertex2f(10.8,5.6);
glVertex2f(10.7,5.5);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(4.7,5.5);
glVertex2f(4.6,5.6);
glVertex2f(4.6,5.7);
glVertex2f(7.7,6.2);
glVertex2f(10.8,5.7);
glVertex2f(10.8,5.6);
glVertex2f(10.7,5.5);
glEnd();
//delay();
}

void grass()//pot with grass
{
glColor3f(0.7,0.4,0.2);
glBegin(GL_POLYGON);
glVertex2f(4.2,2.5);
glVertex2f(4.15,2.8);
glVertex2f(4.55,2.8);
glVertex2f(4.5,2.5);
glEnd();
glColor3f(0.0,0.7,0.0);drawCircle(4.2,2.9,0.15,0,360);
drawCircle(4.3,2.95,0.15,0,360);
drawCircle(4.5,2.9,0.15,0,360);
drawCircle(4.4,2.85,0.15,0,360);
glColor3f(0.7,0.4,0.2);
glBegin(GL_POLYGON);
glVertex2f(11,2.5);
glVertex2f(10.95,2.8);
glVertex2f(11.35,2.8);
glVertex2f(11.3,2.5);
glEnd();
glColor3f(0.0,0.7,0.0);
drawCircle(11,2.9,0.15,0,360);
drawCircle(11.1,2.95,0.15,0,360);
drawCircle(11.3,2.9,0.15,0,360);
drawCircle(11.2,2.85,0.15,0,360);
}
void cloud()
{
glColor3f(1.0,1.0,1.0);
drawCircle(2,8.5,0.45,0,360);
drawCircle(2,9.3,0.45,0,360);
drawCircle(2.5,8.8,0.4,0,360);
drawCircle(1.5,8.9,0.4,0,360);
drawCircle(1.3,8.6,0.4,0,360);
}

void door(float i)
{
//glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_POLYGON);
glColor3f(1.0,0.75,0.25);
glVertex2f(6.7,2.5);
glVertex2f(7.7,2.5);glVertex2f(7.7,4.5);
glVertex2f(6.7,4.5);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.4,0.4,0.4);
glVertex2f(6.7,2.5);
glColor3f(1.0,1.0,1.0);
glVertex2f(7.7-(0.25*i),2.5+(0.25*i));
glColor3f(0.4,0.4,0.4);
glVertex2f(7.7-(0.25*i),4.5+(0.25*i));
glColor3f(1.0,1.0,1.0);
glVertex2f(6.7,4.5);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(6.7,2.5);
glVertex2f(7.7-(0.25*i),2.5+(0.25*i));
glVertex2f(7.7-(0.25*i),4.5+(0.25*i));
glVertex2f(6.7,4.5);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1.0,0.75,0.25);
glVertex2f(7.7,2.5);glVertex2f(8.7,2.5);
glVertex2f(8.7,4.5);
glVertex2f(7.7,4.5);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.4,0.4,0.4);
glVertex2f(7.7+(0.25*i),2.5+(0.25*i));
glColor3f(1.0,1.0,1.0);
glVertex2f(8.7,2.5);
glColor3f(0.4,0.4,0.4);
glVertex2f(8.7,4.5);
glColor3f(1.0,1.0,1.0);
glVertex2f(7.7+(0.25*i),4.5+(0.25*i));
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(7.7+(0.25*i),2.5+(0.25*i));
glVertex2f(8.7,2.5);
glVertex2f(8.7,4.5);
glVertex2f(7.7+(0.25*i),4.5+(0.25*i));
glEnd();
}
void car1()
{
float i=8.5;
glColor3f(1.0,0.0,0.0); //car
glBegin(GL_POLYGON);
glVertex2f(9-i,3.5);
glVertex2f(9.2-i,4);
glVertex2f(9.8-i,4);
glVertex2f(9.6-i,3.4);
glEnd();
glBegin(GL_POLYGON);//front
glVertex2f(8.5-i,3);
glVertex2f(9-i,3.5);
glVertex2f(9.6-i,3.4);
glVertex2f(9-i,2.8);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(9-i,2.5);
glVertex2f(9-i,2.8);
glVertex2f(9.6-i,3.4);
glVertex2f(10.9-i,3.4);
glVertex2f(11-i,2.5);glEnd();
glBegin(GL_POLYGON);
glVertex2f(9.6-i,3.4);
glVertex2f(9.8-i,4);
glVertex2f(10.7-i,4);
glVertex2f(10.9-i,3.4);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(8.5-i,2.7);
glVertex2f(8.5-i,3);
glVertex2f(9-i,2.8);
glVertex2f(9-i,2.5);
glEnd();
glColor3f(0.0,0.6,0.9);
glBegin(GL_POLYGON);//windows
glVertex2f(9.8-i,3.45);
glVertex2f(9.9-i,3.8);
glVertex2f(10.2-i,3.8);
glVertex2f(10.2-i,3.45);
glEnd();
glBegin(GL_POLYGON);//windows
glVertex2f(10.3-i,3.45);
glVertex2f(10.4-i,3.8);
glVertex2f(10.7-i,3.8);
glVertex2f(10.7-i,3.45);glEnd();
glColor3f(0.0,0.0,0.0);
glBegin(GL_LINE_LOOP);
glVertex2f(9-i,3.5);
glVertex2f(9.2-i,4);
glVertex2f(9.8-i,4);
glVertex2f(9.6-i,3.4);
glEnd();
glBegin(GL_LINE_LOOP);//front
glVertex2f(8.5-i,3);
glVertex2f(9-i,3.5);
glVertex2f(9.6-i,3.4);
glVertex2f(9-i,2.8);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2f(9-i,2.5);
glVertex2f(9-i,2.8);
glVertex2f(9.6-i,3.4);
glVertex2f(10.9-i,3.4);
glVertex2f(11-i,2.5);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2f(9.6-i,2.4);
glVertex2f(9.8-i,4);
glVertex2f(10.7-i,4);
glVertex2f(10.9-i,3.4);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2f(8.5-i,2.7);
glVertex2f(8.5-i,3);
glVertex2f(9-i,2.8);
glVertex2f(9-i,2.5);
glEnd();
glColor3f(0.0,0.0,0.0);//wheels
drawCircle(9.5-i,2.6,0.3,0,360);
drawCircle(10.5-i,2.6,0.3,0,360);
glColor3f(0.3,0.3,0.3);
drawCircle(9.5-i,2.6,0.2,0,360);
drawCircle(10.5-i,2.6,0.2,0,360);
//delay();
// glFlush();
}
int flagz=0;
float l,k;

void backman(float i,float j,int move){
glBegin(GL_POLYGON); //body
glColor3f(0.94,0.81,0.99);
glVertex2f(1.1+i,2.2+j); //glVertex2f(1.0,6.2);
glVertex2f(1.46+i,2.2+j); //glVertex2f(1.36,6.2);
glVertex2f(1.46+i,1.5+j); //1.36,6.2
glVertex2f(1.1+i,1.5+j);//1.0
glEnd();
glBegin(GL_LINE_LOOP); //body
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i,2.2+j); //glVertex2f(1.0,6.2);
glVertex2f(1.46+i,2.2+j); //glVertex2f(1.36,6.2);
glVertex2f(1.46+i,1.5+j); //1.36,6.2
glVertex2f(1.1+i,1.5+j);//1.0
glEnd();
glBegin(GL_POLYGON); //head
glColor3f(0,0,0.0);
glVertex2f(1.15+i,2.2+j);
glVertex2f(1.41+i,2.2+j);
glVertex2f(1.46+i,2.45+j);
glVertex2f(1.46+i,2.55+j);
glVertex2f(1.28+i,2.65+j);
glVertex2f(1.1+i,2.55+j);
glVertex2f(1.1+i,2.45+j);
glEnd();
if(move)
{
if(abs(j*10)%2==0){
k=0;l=0.2;}
else
{
k=0.2;l=0;}
glBegin(GL_POLYGON); //legs
glColor3f(0.52,0.37,0.26);
glVertex2f(1.1+i,1.5+j);
glVertex2f(1.46+i,1.5+j);
glVertex2f(1.47+i,0.5+j+k);
glVertex2f(1.30+i,0.5+j+k);
glVertex2f(1.29+i,1.2+j);
glVertex2f(1.25+i,0.5+j+l);
glVertex2f(1.09+i,0.5+j+l);
glEnd();
glBegin(GL_LINE_LOOP); //legs
glColor3f(0,0,0);
glVertex2f(1.1+i,1.5+j);
glVertex2f(1.46+i,1.5+j);
glVertex2f(1.47+i,0.5+j+k);
glVertex2f(1.30+i,0.5+j+k);
glVertex2f(1.29+i,1.0+j);
glVertex2f(1.25+i,0.5+j+l);
glVertex2f(1.09+i,0.5+j+l);
glEnd();
}
else
{
glBegin(GL_POLYGON); //legs
glColor3f(0.52,0.37,0.26);
glVertex2f(1.1+i,1.5);
glVertex2f(1.46+i,1.5);
glVertex2f(1.51+i,0.5);
glVertex2f(1.4+i,0.5);
glVertex2f(1.29+i,1.0);
glVertex2f(1.15+i,0.5);
glVertex2f(1.04+i,0.5);
glEnd();
glBegin(GL_LINE_LOOP); //legs
glColor3f(0,0,0);
glVertex2f(1.1+i,1.5);
glVertex2f(1.46+i,1.5);
glVertex2f(1.51+i,0.5);
glVertex2f(1.4+i,0.5);
glVertex2f(1.29+i,1.0);
glVertex2f(1.15+i,0.5);
glVertex2f(1.04+i,0.5);
glEnd();

}
glBegin(GL_POLYGON);
//hand
glColor3f(0.0,0.0,0.0);
//glColor3f(0.94,0.81,0.99);
glVertex2f(1.06+i,2.2+j);
glVertex2f(1.1+i,1.8+j);
glVertex2f(1.06+i,1.8+j);
glVertex2f(1.1+i,2.2+j);
glEnd();
glBegin(GL_POLYGON);
 glColor3f(0.0,0.0,0.0);
//glColor3f(0.94,0.81,0.99);
glVertex2f(1.50+i,2.2+j);
glVertex2f(1.46+i,2.2+j);
glVertex2f(1.46+i,1.8+j);
glVertex2f(1.50+i,1.8+j);
glEnd();
glBegin(GL_LINE_LOOP);
//hand
glColor3f(0.0,0.0,0.0);
glVertex2f(1.06+i,2.2+j);
glVertex2f(1.1+i,2.2+j);
glVertex2f(1.1+i,1.8+j);
glVertex2f(1.06+i,1.8+j);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(1.50+i,2.2+j);
glVertex2f(1.46+i,2.2+j);
glVertex2f(1.46+i,1.8+j);
glVertex2f(1.50+i,1.8+j);
glEnd();
}

void backmanhand(float i,float j)
{
glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glColor3f(0.96,0.80,0.69);
glVertex2f(1.47+i,1.8+j);
glVertex2f(1.49+i,1.8+j);
glVertex2f(1.49+i,1.5+j);
glVertex2f(1.47+i,1.5+j);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.94,0.81,0.99);
//glColor3f(0.96,0.80,0.69);
glVertex2f(1.07+i,1.8+j);
glVertex2f(1.09+i,1.8+j);
glVertex2f(1.09+i,1.5+j);
glVertex2f(1.07+i,1.5+j);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(1.47+i,1.8+j);
glVertex2f(1.49+i,1.8+j);
glVertex2f(1.49+i,1.5+j);
glVertex2f(1.47+i,1.5+j);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(1.07+i,1.8+j);
glVertex2f(1.09+i,1.8+j);
glVertex2f(1.09+i,1.5+j);
glVertex2f(1.07+i,1.5+j);
glEnd();
glColor3f(0.96,0.80,0.69);
drawCircle(1.48+i,1.5+j,0.04,0,360);
glColor3f(0.96,0.80,0.69);
drawCircle(1.08+i,1.5+j,0.04,0,360);
}

void car(float i)
{
glColor3f(0.556863,0.137255,0.419608);  //car


glBegin(GL_POLYGON);
    glVertex2f(9-i,1.5);
    glVertex2f(9.2-i,2);
    glVertex2f(9.8-i,1.9);
    glVertex2f(9.6-i,1.4);
    glEnd();
glBegin(GL_POLYGON);
    glVertex2f(9.2-i,2);
    glVertex2f(9.8-i,1.9);
    glVertex2f(10.75-i,1.9);
    glVertex2f(10.15-i,2);
    glEnd();
glBegin(GL_POLYGON);//windsheild
glColor3f(0.4,0.4,0.4);
    glVertex2f(9-i+0.01,1.5+0.01);
    glVertex2f(9.2-i+0.01,2-0.01);
    glVertex2f(9.8-i-0.01,1.9-0.01);
    glVertex2f(9.6-i-0.01,1.4+0.01);
    glEnd();
    glBegin(GL_POLYGON);//front
glColor3f(0.556863,0.137255,0.419608);
	glVertex2f(8.5-i,1);
    glVertex2f(9-i,1.5);
     glVertex2f(9.6-i,1.4);
    glVertex2f(9-i,0.8);
     glEnd();
     glBegin(GL_POLYGON);
      glVertex2f(9-i,0.5);
    glVertex2f(9-i,0.8);
    glVertex2f(9.6-i,1.4);
     glVertex2f(10.75-i,1.4);
    glVertex2f(10.85-i,0.5);
    glEnd();
   glBegin(GL_POLYGON);
    glVertex2f(9.6-i,1.4);
    glVertex2f(9.8-i,1.9);
     glVertex2f(10.7-i,1.9);
    glVertex2f(10.75-i,1.4);
     glEnd();
     glBegin(GL_POLYGON);
    glVertex2f(8.5-i,0.7);
    glVertex2f(8.5-i,1);
     glVertex2f(9-i,0.8);
    glVertex2f(9-i,0.5);
     glEnd();

    glColor3f(0.0,0.6,0.9);
  glBegin(GL_POLYGON);//windows
    glVertex2f(9.8-i,1.45);
    glVertex2f(9.9-i,1.8);
     glVertex2f(10.2-i,1.8);
    glVertex2f(10.1-i,1.45);
     glEnd();
     glBegin(GL_POLYGON);//windows
    glVertex2f(10.2-i,1.45);
    glVertex2f(10.3-i,1.8);
     glVertex2f(10.6-i,1.8);
    glVertex2f(10.5-i,1.45);
     glEnd();

     glColor3f(0.0,0.0,0.0);
      glBegin(GL_LINE_LOOP);
    glVertex2f(9-i,1.5);
    glVertex2f(9.2-i,2);
    glVertex2f(9.8-i,1.9);
    glVertex2f(9.6-i,1.4);
    glEnd();
    glBegin(GL_LINE_LOOP);//front
    glVertex2f(8.5-i,1);
    glVertex2f(9-i,1.5);
     glVertex2f(9.6-i,1.4);
    glVertex2f(9-i,0.8);
     glEnd();
     glBegin(GL_LINE_LOOP);
      glVertex2f(9-i,0.5);
    glVertex2f(9-i,0.8);
    glVertex2f(9.6-i,1.4);
     glVertex2f(10.75-i,1.4);
    glVertex2f(10.85-i,0.5);
    glEnd();
     glBegin(GL_LINE_LOOP);
    glVertex2f(9.6-i,1.4);
    glVertex2f(9.8-i,1.9);
     glVertex2f(10.7-i,1.9);
    glVertex2f(10.75-i,1.4);
     glEnd();
     glBegin(GL_LINE_LOOP);
    glVertex2f(8.5-i,0.7);
    glVertex2f(8.5-i,1);
     glVertex2f(9-i,0.8);
    glVertex2f(9-i,0.5);
     glEnd();
glBegin(GL_LINE_LOOP);
    glVertex2f(9.2-i,2);
    glVertex2f(9.8-i,1.9);
    glVertex2f(10.70-i,1.9);
    glVertex2f(10.10-i,2);
    glEnd();
     glColor3f(0.0,0.0,0.0);//wheels
     drawCircle(9.5-i,0.6,0.3,0,360);
     drawCircle(10.5-i,0.6,0.3,0,360);
     glColor3f(0.3,0.3,0.3);
     drawCircle(9.5-i,0.6,0.2,0,360);
     drawCircle(10.5-i,0.6,0.2,0,360);

// glFlush();
}

int x=0;
void sideman(float i)
{
glBegin(GL_POLYGON); //hair
glColor3f(0.0,0.0,0.0);
glVertex2f(1.4+i,2.65);
glVertex2f(1.45+i,2.8);
glVertex2f(1.0+i,2.8);
glVertex2f(1.0+i,2.4);
glVertex2f(1.1+i,2.3);
glVertex2f(1.1+i,2.65);
glEnd();
glBegin(GL_POLYGON); //face
glColor3f(0.96,0.80,0.69);
glVertex2f(1.1+i,2.65); // glVertex2f(1.0,6.75);
glVertex2f(1.4+i,2.65); // glVertex2f(1.3,6.75);
glVertex2f(1.4+i,2.5);
// glVertex2f(1.3,6.5);
glVertex2f(1.45+i,2.4); //glVertex2f(1.35,6.4);
glVertex2f(1.4+i,2.3);
glVertex2f(1.35+i,2.2);
glVertex2f (1.2+i,2.2);
glVertex2f(1.1+i,2.3);
//glVertex2f(1.3,6.3);
//glVertex2f(1.25,6.2);
// (1.1,6.2);
//1.0,6.3
//glVertex2f(0.75,6.75);
glEnd();
glColor3f(0.0,0.0,0.0);
drawCircle(1.32+i,2.55,0.03,0,360);
glBegin(GL_LINE_LOOP); //head outline
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i,2.75); // glVertex2f(1.0,6.75);
glVertex2f(1.4+i,2.75); // glVertex2f(1.3,6.75);
glVertex2f(1.4+i,2.5);
// glVertex2f(1.3,6.5);
glVertex2f(1.45+i,2.4); //glVertex2f(1.35,6.4);
glVertex2f(1.4+i,2.3);
glVertex2f(1.35+i,2.2);
glVertex2f (1.2+i,2.2);
glVertex2f(1.1+i,2.3);
glEnd();
glBegin(GL_POLYGON); //body
glColor3f(0.94,0.81,0.99);
glVertex2f(1.1+i,2.2); //glVertex2f(1.0,6.2);
glVertex2f(1.46+i,2.2); //glVertex2f(1.36,6.2);
glVertex2f(1.46+i,1.5); //1.36,6.2
glVertex2f(1.1+i,1.5);//1.0
glEnd();
glBegin(GL_LINE_LOOP); //body
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i,2.2); //glVertex2f(1.0,6.2);
glVertex2f(1.46+i,2.2); //glVertex2f(1.36,6.2);
glVertex2f(1.46+i,1.5); //1.36,6.2
glVertex2f(1.1+i,1.5);//1.0
glEnd();
/*glBegin(GL_LINE_LOOP); // left hand
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i,2.2);
glVertex2f(1.2+i,2.2);
glVertex2f(1.2+i,1.9);
glVertex2f(1.1+i,1.9);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.96,0.80,0.69);
glVertex2f(1.12+i,1.9);
glVertex2f(1.18+i,1.9);
glVertex2f(1.18+i,1.5);
glVertex2f(1.12+i,1.5);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(1.12+i,1.9);
glVertex2f(1.18+i,1.9);
glVertex2f(1.18+i,1.5);
glVertex2f(1.12+i,1.5);
glEnd();
*/
if(abs(i*10)%2==0){
glBegin(GL_POLYGON); //legs
glColor3f(0.52,0.37,0.26);
glVertex2f(1.1+i,1.5);
glVertex2f(1.46+i,1.5);
glVertex2f(1.38+i,0.5);
glVertex2f(1.20+i,0.5);
glEnd();
glBegin(GL_LINE_LOOP); //legs
glColor3f(0,0,0);
glVertex2f(1.1+i,1.5);
glVertex2f(1.46+i,1.5);
glVertex2f(1.38+i,0.5);
glVertex2f(1.20+i,0.5);
glEnd();

glBegin(GL_POLYGON); // left hand
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i,2.2);
glVertex2f(1.2+i,2.2);
glVertex2f(1.25+i,1.9);
glVertex2f(1.15+i,1.9);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.96,0.80,0.69);
glVertex2f(1.17+i,1.9);
glVertex2f(1.23+i,1.9);
glVertex2f(1.28+i,1.5);
glVertex2f(1.22+i,1.5);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(1.17+i,1.9);
glVertex2f(1.23+i,1.9);
glVertex2f(1.28+i,1.5);
glVertex2f(1.22+i,1.5);
glEnd();
glColor3f(0.96,0.80,0.69);
drawCircle(1.22+i,1.5,0.05,0,360);
}
else
{
glBegin(GL_POLYGON); //legs
glColor3f(0.52,0.37,0.26);
glVertex2f(1.1+i,1.5);
glVertex2f(1.46+i,1.5);
glVertex2f(1.51+i,0.5);
glVertex2f(1.4+i,0.5);
glVertex2f(1.29+i,1.0);
glVertex2f(1.15+i,0.5);
glVertex2f(1.04+i,0.5);
glEnd();
glBegin(GL_LINE_LOOP); //legs
glColor3f(0,0,0);
glVertex2f(1.1+i,1.5);
glVertex2f(1.46+i,1.5);
glVertex2f(1.51+i,0.5);
glVertex2f(1.4+i,0.5);
glVertex2f(1.29+i,1.0);
glVertex2f(1.15+i,0.5);
glVertex2f(1.04+i,0.5);
glEnd();

glBegin(GL_POLYGON); // left hand
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i,2.2);
glVertex2f(1.2+i,2.2);
glVertex2f(1.15+i,1.9);
glVertex2f(1.05+i,1.9);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.96,0.80,0.69);
glVertex2f(1.07+i,1.9);
glVertex2f(1.13+i,1.9);
glVertex2f(1.11+i,1.5);
glVertex2f(1.06+i,1.5);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(1.07+i,1.9);
glVertex2f(1.13+i,1.9);
glVertex2f(1.11+i,1.5);
glVertex2f(1.06+i,1.5);
glEnd();
glColor3f(0.96,0.80,0.69);
drawCircle(1.06+i,1.5,0.05,0,360);
//
}
/*glBegin(GL_POLYGON); //back shoes
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i,0.65);
glVertex2f(1.30+i,0.65);
glVertex2f(1.4+i,0.5);
glVertex2f(1.1+i,0.5);glEnd();
glBegin(GL_POLYGON); // front shoes
glColor3f(0.0,0.0,0.0);
glVertex2f(1.30+i,0.65);
glVertex2f(1.36+i,0.65);
glVertex2f(1.46+i,0.5);
glVertex2f(1.30+i,0.5);
glEnd();*/

}



//-------------------------------------display func-----------------------------------------
void page2()//page two
{
float j,m;
float i;
glMatrixMode(GL_PROJECTION);
//glClearColor(1.0, 0.75, 0.25, 0.25);
glLoadIdentity();
//glPointSize(3.0);
///glOrtho(0.0,12.0,0.0,10.0,-1.0,1.0);
glClear(GL_COLOR_BUFFER_BIT);
glPushMatrix();
for(i=0;i<=8.5;i+=0.2)
{
house();
grass();
door(0);
cloud();
car(i);
car1();
glutSwapBuffers();
delay(100);
//glFlush();}
glPopMatrix();
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glClear(GL_COLOR_BUFFER_BIT);
glPushMatrix();
}
for(i=0;i<=6.5;i+=0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
house();
door(0);
grass();
cloud();
car1();
sideman(i);
delay(100);
car(8.5);
glutSwapBuffers();
//delay(100);
//glFlush();
}
for(i=0;i<=1;i+=0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
house();door(0);
grass();
cloud();
car1();
backman(6.5,i,1);
backmanhand(6.5,i);
car(8.5);
glutSwapBuffers();
delay(200);
//glFlush();
}
/*
for(i=0.0;i<=0.5;i+=0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
house();
door(0);
grass();
cloud();
backman(6.5,1.0,);
//backmanhand(6.5,1.0);
movebackhand(i,i);
car1();
car(8.5);delay(100);
//glFlush();
//delay(100);
glFlush();
}*/
for(i=0;i<=2;i+=0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
house();
door(i);
grass();
cloud();
car1();
backman(6.5,1.0,1);
car(8.5);
glutSwapBuffers();
delay(100);
//glFlush();
}
for(i=1;i<=2.5;i+=0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
house();
door(2);
grass();
cloud();
car1();
backman(6.5,i,1);
car(8.5);
glutSwapBuffers();
delay(200);
//glFlush();
}

//glutDisplayFunc(house);
glPopMatrix();
glFlush();
glFinish();
glutSwapBuffers();
//glutHideWindow();
func();

}


#endif

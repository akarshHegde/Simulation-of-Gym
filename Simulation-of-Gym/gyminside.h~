
#ifndef GYMINSIDE_H
#define GYMINSIDE_H

#include <stdio.h>
//#include<windows.h>
#include<GL/glut.h>
#include<string.h>
#include<math.h>
#include<string.h>
#include "common.h"
#include "mouse.h"


int count3=0;

void intro()
{
// glClear(GL_COLOR_BUFFER_BIT);
glClearColor(1.0, 0.75, 0.25, 0.25); // black background
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.0,0.0,0.0);
// drawString(GLUT_BITMAP_TIMES_ROMAN_24,"WELCOME TO THE WORLD OF GYM",1.5,9.5);
//drawString(GLUT_BITMAP_TIMES_ROMAN_24,"***************************************",1.3,9.0);
//EXTRA
glBegin(GL_POLYGON);
glColor3f(0.90,0.90,.90);
glVertex2f(-1.0,-1.0);
glVertex2f(0,3.0);
glVertex2f(3,5.0);
glVertex2f(12,5.0);
glVertex2f(12,0);
glEnd();
// Button PREV
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(1.5,1.0);
glVertex2f(2.32,1.0);
glVertex2f(2.32,1.5);
glVertex2f(1.5,1.5);
glEnd();
glBegin(GL_POLYGON); //room1
glColor3f(1.0,1.0,1.0);
glVertex2f(2.5,4.65);
glColor3f(1.0,1.0,1.0);
glVertex2f(2.9,4.91);
glColor3f(1.0,1.0,1.0);
glVertex2f(2.9,8.6);
glColor3f(1.0,1.0,1.0);
glVertex2f(2.5,8.3);
glEnd();
glFlush();
glBegin(GL_LINE_LOOP); //room1 door outline
glColor3f(1.0,0.0,0.0);
glVertex2f(2.5,4.65);
glVertex2f(2.9,4.91);
glVertex2f(2.9,8.6);
glVertex2f(2.5,8.3);
glEnd();
glFlush();
//drawString(GLUT_BITMAP_TIMES_ROMAN_10,"ROOM 2",2.55,7.25);
//----extra
glBegin(GL_POLYGON); //window1
glColor3f(0.10,0.90,1.0);
glVertex2f(3.2,8.0);
glColor3f(0.10,0.90,1.0);
glVertex2f(5.2,8.0);
glColor3f(0.0,1.0,0.0);
glVertex2f(5.2,6.0);
glColor3f(0.0,1.0,0.0);
glVertex2f(3.2,6.0);
glEnd();
glFlush();
glBegin(GL_POLYGON); //window2
glColor3f(0.10,0.90,1.0);
glVertex2f(9.2,8.0);
glColor3f(0.10,0.90,1.0);
glVertex2f(11.2,8.0);
glColor3f(0.0,1.0,0.0);
glVertex2f(11.2,6.0);
glColor3f(0.0,1.0,0.0);
glVertex2f(9.2,6.0);
glEnd();
/*
glBegin(GL_POLYGON); //door
glColor3f(1.0,1.0,1.0);
glVertex2f(6.2,8.0);
//glColor3f(0.10,0.90,1.0);
glVertex2f(7.7,8.0);
//glColor3f(0.0,1.0,0.0);
glVertex2f(7.7,5.0);
//glColor3f(0.0,1.0,0.0);
glVertex2f(6.2,5.0);
glEnd();glBegin(GL_LINE_LOOP); //door
glColor3f(1.0,1.0,1.0);
glPointSize(10);
glVertex2f(6.2,8.0);
//glColor3f(0.10,0.90,1.0);
glVertex2f(7.7,8.0);
//glColor3f(0.0,1.0,0.0);
glVertex2f(7.7,5.0);
//glColor3f(0.0,1.0,0.0);
glVertex2f(6.2,5.0);
glEnd();*/
glBegin(GL_LINES);
//3D view of gym,divider
glColor3f(0.0,0.0,0.0);
glVertex2f(3.0,10.0);
glVertex2f(3.0,5.0);
glVertex2f(3.0,5.0);
glVertex2f(0.0,3.0);
glVertex2f(3.0,5.0);
glVertex2f(12.0,5.0);
//glVertex2f(3.0,10.0);
// glVertex2f(0.0,9.0);
glEnd();
bench(0,0);
//------
glBegin(GL_POLYGON); //running machine
glColor3f(0.5,0.5,0.5);
glVertex2f(9.0,5.0);
glColor3f(1.0,1.0,1.0);
glVertex2f(11.0,5.0);
glColor3f(0.0,0.0,0.0);
glVertex2f(10.5,4.0);
glColor3f(1.0,1.0,1.0);
glVertex2f(8.5,4.0);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,1.0);
glVertex2f(8.5,4.0);
glVertex2f(8.5,3.75);
glVertex2f(10.5,3.75);
glVertex2f(10.5,4.0);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,1.0);
glVertex2f(11.0,5.0);
glVertex2f(11.0,4.75);
glVertex2f(10.5,3.75);
glVertex2f(10.5,4.0);
glEnd();
//bottom part of running mach
glBegin(GL_POLYGON); //vertical part1
glColor3f(0.0,0.0,1.0);
glVertex2f(8.4,3.75);
glColor3f(0.0,0.0,0.0);
glVertex2f(8.4,7.0);
glColor3f(0.0,0.0,1.0);
glVertex2f(8.5,7.0);
glColor3f(0.0,0.0,0.0);
glVertex2f(8.5,3.75);
glEnd();
glBegin(GL_POLYGON);//vertical part2
glColor3f(0.0,0.0,1.0);
glVertex2f(8.9,4.8);
glColor3f(0.0,0.0,0.0);
glVertex2f(8.9,7.0);
glColor3f(0.0,0.0,1.0);
glVertex2f(9.0,7.0);
glColor3f(0.0,0.0,0.0);
glVertex2f(9.0,5.0);
glEnd();
glBegin(GL_POLYGON); //connector
glColor3f(1.0,0.0,0.0);
glVertex2f(8.5,6.5);
glColor3f(0.0,0.0,0.0);
glVertex2f(8.5,5.75);
glColor3f(1.0,1.0,1.0);
glVertex2f(8.9,5.75);
glColor3f(1.0,0.0,0.0);
glVertex2f(8.9,6.5);
glEnd();
glBegin(GL_POLYGON); //horizontal part1
glColor3f(0.5,0.5,0.5);
glVertex2f(9.2,5.5);
glColor3f(1.0,1.0,1.0);
glVertex2f(10.49,5.5);
glColor3f(0.0,0.0,0.0);
glVertex2f(10.39,5.6);
glColor3f(1.0,1.0,1.0);
glVertex2f(9.1,5.6);
glEnd();
glBegin(GL_POLYGON); //its leg
glColor3f(0.0,0.0,0.0);
glVertex2f(9.2,5.5);
glVertex2f(9.2,5.0);
// glColor3f(1.0,1.0,1.0);
glVertex2f(9.1,5.0);
glVertex2f(9.1,5.6);
glEnd();glBegin(GL_POLYGON); //other leg
glColor3f(0.0,0.0,0.0);
glVertex2f(10.49,5.5);
glVertex2f(10.49,5.0);
//glColor3f(1.0,1.0,1.0);
glVertex2f(10.39,5.0);
glVertex2f(10.39,5.6);
glEnd();
glBegin(GL_POLYGON); //horixontal prt2
glColor3f(0.5,0.5,0.5);
glVertex2f(9.2,4.7);
glColor3f(1.0,1.0,1.0);
glVertex2f(10.49,4.7);
glColor3f(0.0,0.0,0.0);
glVertex2f(10.39,4.8);
glColor3f(1.0,1.0,1.0);
glVertex2f(9.1,4.8);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(9.2,4.7);
glVertex2f(9.2,4.0);
glVertex2f(9.1,4.0);
glVertex2f(9.1,4.8);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(10.49,4.7);
glVertex2f(10.49,4.0);
glVertex2f(10.39,4.0);
glVertex2f(10.39,4.8);
glEnd();
/*dumbells(1,0,0,0);*/
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(9.18,1.0);
glVertex2f(10,1.0);
glVertex2f(10,1.5);
glVertex2f(9.18,1.5);
glEnd();
// drawString(GLUT_BITMAP_TIMES_ROMAN_24,"CONTINUE",1.1,1.2);
glColor3f(0.0,0.0,0.0);
drawString(GLUT_BITMAP_TIMES_ROMAN_24,"QUIT",9.25,1.2);
drawString(GLUT_BITMAP_TIMES_ROMAN_24,"PREV",1.57,1.2);
glEnd();
//glFlush();
glEnd();
//glutSwapBuffers();
}

void straithand(float i,float j,float k,float l,float r)
{
glBegin(GL_POLYGON); //hand
glColor3f(0.94,0.81,0.99);
glVertex2f(1.1+i+k,6.2+j+l);
glVertex2f(1.2+i+k,6.2+j+l);
//1.0
//0.8
glVertex2f(1.2+i+k,5.6+j+l);//1.42
glVertex2f(1.1+i+k,5.6+j+l);
glEnd();
glBegin(GL_POLYGON); //hand
glColor3f(0.96,0.80,0.69);
glVertex2f(1.12+i+k,5.6+j+l);
//0.8
glVertex2f(1.18+i+k,5.6+j+l);//1.42
glVertex2f(1.18+i+k,5.0+j+l+r);
glVertex2f(1.12+i+k,5.0+j+l+r);
glEnd();
glBegin(GL_LINE_LOOP); //hand
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i+k,6.2+j+l);
glVertex2f(1.2+i+k,6.2+j+l);
//1.0
//0.8
glVertex2f(1.2+i+k,5.6+j+l);//1.42
glVertex2f(1.1+i+k,5.6+j+l);
glEnd();
glBegin(GL_LINE_LOOP); //hand
glColor3f(0.0,0.0,0.0);
glVertex2f(1.12+i+k,5.6+j+l);
//0.8
glVertex2f(1.18+i+k,5.6+j+l);//1.42
glVertex2f(1.18+i+k,5.0+j+l+r);
glVertex2f(1.12+i+k,5.0+j+l+r);
glEnd();
glColor3f(0.96,0.80,0.69);
drawCircle(1.15+i+k,5.0+j+l+r,0.08,0,360);
}
void man2sidehand(float i,float j,float k, float l,int x) //x =1 means move hands
{
float k1,k2=0;
if(x!=0)
{if(x%2==0)
{k1=0.3;}
else
k1=0;k2=-0.5;
}
else
k1=0;
glBegin(GL_POLYGON); //hand
//glColor3f(0.94,0.81,0.99);
glColor3f(0.94,0.81,0.99);
glVertex2f(1.36+i+k,6.2+j+l);
glVertex2f(1.46+i+k,6.2+j+l);
//1.0
//0.8
glVertex2f(1.46+i+k+k1,5.6+j+l);//1.42
glVertex2f(1.36+i+k+k1,5.6+j+l);
glEnd();
glBegin(GL_POLYGON); //hand
glColor3f(0.96,0.80,0.69);
glVertex2f(1.38+i+k+k1,5.6+j+l);
//0.8
glVertex2f(1.44+i+k+k1,5.6+j+l);//1.42
glVertex2f(1.44+i+k-k1+k2,5.3+j+l);
glVertex2f(1.38+i+k-k1+k2,5.45+j+l);
glEnd();
/*glBegin(GL_LINE_LOOP); //hand
glColor3f(0.0,0.0,0.0);
glVertex2f(1.36+i+k,6.2+j+l);
glVertex2f(1.46+i+k,6.2+j+l);
//1.0
//0.8
glVertex2f(1.46+i+k,5.6+j+l);//1.42
glVertex2f(1.36+i+k,5.6+j+l);
glEnd();
glBegin(GL_LINE_LOOP); //hand
glColor3f(0.0,0.0,0.0);glVertex2f(1.38+i+k,5.6+j+l);
//0.8
glVertex2f(1.44+i+k,5.6+j+l);//1.42
glVertex2f(1.44+i+k,5.0+j+l);
glVertex2f(1.38+i+k,5.0+j+l);
glEnd();
glColor3f(0.96,0.80,0.69);
drawCircle(1.41+i+k,5.0+j+l,0.08,0,360);*/
}
void benchdumbell(float x,float y,float m,float n)
{
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,1.0);
glVertex2f(x+5.75+m,y+2.5+1.2+n);
glVertex2f(x+5.75+m,y+2.6+1.2+n);glVertex2f(x+7.5+m,y+2.6+1.2+n);
glVertex2f(x+7.5+m,y+2.5+1.2+n);
glEnd();
glColor3f(0.0,0.0,0.0);
drawCircle(x+5.75+m,y+2.55+1.2+n,0.2,0,360);
drawCircle(x+7.5+m,y+2.55+1.2+n,0.2,0,360); //8.0
}
void opendoor(float x)
{glBegin(GL_POLYGON); //door
glColor3f(1.0,1.0,1.0);
glVertex2f(6.2,9.0);
glColor3f(0.10,0.90,1.0);
glVertex2f(7.7,9.0);
glColor3f(0.0,1.0,0.0);
glVertex2f(7.7,5.0);
glColor3f(0.0,1.0,0.0);
glVertex2f(6.2,5.0);
glEnd();
glBegin(GL_POLYGON); //door
glColor3f(0.4,0.4,0.4);
glVertex2f(6.2,9.0);
glColor3f(1.0,1.0,1.0);
glVertex2f(7.7+(0.25*x),9.0+(0.25*x));
glColor3f(0.4,0.4,0.4);
glVertex2f(7.7+(0.25*x),5.0+(0.25*x));
glColor3f(1.0,1.0,1.0);
glVertex2f(6.2,5.0);
glEnd();
glBegin(GL_LINE_LOOP); //door
glColor3f(0.0,0.0,0.0);
//glPointSize(10);
glVertex2f(6.2,9.0);
//glColor3f(0.10,0.90,1.0);
glVertex2f(7.7+(0.25*x),9.0+(0.25*x));
//glColor3f(0.0,1.0,0.0);
glVertex2f(7.7+(0.25*x),5.0+(0.25*x));
// glColor3f(0.0,1.0,0.0);
glVertex2f(6.2,5.0);
glEnd();
}
void man2(float i,float j,float k,float l,int x) //x=1 means the side movement	
{

float m1,m2,m3,m4;
if(x==0)
{m1=0;m2=0;m3=0;m4=0;}
else
{if(x%3==0)
{m1=0.2;m2=0;m3=0,m4=-0.2;}
else if(x%3==1)
{m1=0;m2=0.2;m3=-0.2,m4=0;}
else
{m1=0;m2=0;m3=0;m4=0;
}
}

glBegin(GL_POLYGON); //hair
glColor3f(0.0,0.0,0.0);
glVertex2f(1.4+i+k,6.75+j+l);
glVertex2f(1.45+i+k,6.9+j+l);
glVertex2f(1.0+i+k,6.9+j+l);
glVertex2f(1.0+i+k,6.4+j+l);
glVertex2f(1.1+i+k,6.3+j+l);
glVertex2f(1.1+i+k,6.75+j+l);
glEnd();glBegin(GL_POLYGON); //face
glColor3f(0.96,0.80,0.69);
glVertex2f(1.1+i+k,6.75+j+l); // glVertex2f(1.0,6.75);
glVertex2f(1.4+i+k,6.75+j+l); // glVertex2f(1.3,6.75);
glVertex2f(1.4+i+k,6.5+j+l);
// glVertex2f(1.3,6.5);
glVertex2f(1.45+i+k,6.4+j+l); //glVertex2f(1.35,6.4);
glVertex2f(1.4+i+k,6.3+j+l);
glVertex2f(1.35+i+k,6.2+j+l);
glVertex2f (1.2+i+k,6.2+j+l);
glVertex2f(1.1+i+k,6.3+j+l);
//glVertex2f(1.3,6.3);
//glVertex2f(1.25,6.2);
// (1.1,6.2);
//1.0,6.3
//glVertex2f(0.75,6.75);
glEnd();
glColor3f(0.0,0.0,0.0);
drawCircle(1.32+i+k,6.55+j+l,0.03,0,360);
glBegin(GL_LINE_LOOP); //head outline
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i+k,6.75+j+l); // glVertex2f(1.0,6.75);
glVertex2f(1.4+i+k,6.75+j+l); // glVertex2f(1.3,6.75);
glVertex2f(1.4+i+k,6.5+j+l);
// glVertex2f(1.3,6.5);
glVertex2f(1.45+i+k,6.4+j+l); //glVertex2f(1.35,6.4);
glVertex2f(1.4+i+k,6.3+j+l);
glVertex2f(1.35+i+k,6.2+j+l);
glVertex2f (1.2+i+k,6.2+j+l);
//glVertex2f(1.3,6.3);
//glVertex2f(1.25,6.2);
// (1.1,6.2);
glVertex2f(1.1+i+k,6.3+j+l);
//1.0,6.3
//glVertex2f(0.75,6.75);
glEnd();
glBegin(GL_POLYGON); //body
glColor3f(0.84,0.91,0.79);
glVertex2f(1.1+i+k,6.2+j+l); //glVertex2f(1.0,6.2);
glVertex2f(1.46+i+k,6.2+j+l); //glVertex2f(1.36,6.2);
glVertex2f(1.46+i,5.0+j); //1.36,6.2
glVertex2f(1.1+i,5.0+j);//1.0
glEnd();
glBegin(GL_LINE_LOOP); //body
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i+k,6.2+j+l); //glVertex2f(1.0,6.2);
glVertex2f(1.46+i+k,6.2+j+l); //glVertex2f(1.36,6.2);
glVertex2f(1.46+i,5.0+j); //1.36,6.2
glVertex2f(1.1+i,5.0+j);//1.0
glEnd();
/* glBegin(GL_LINE_LOOP);
glVertex2f(1.66,5.8); //1.36
glVertex2f(1.66,5.7);
//1.36
glVertex2f(1.76,5.7); //1.46
glVertex2f(1.76,5.8);
glEnd(); */
//1.46

//-----------------------------leg movement-------------
if(x==0){

glBegin(GL_POLYGON); //leg 1
glColor3f(0.52,0.37,0.26);
glVertex2f(1.1+i,5.0+j);
glVertex2f(1.46+i,5.0+j);
glVertex2f(1.36+i,3.5+j); 
glVertex2f(1.15+i,3.5+j);
//1.0
//1.36
//1.26
//1.20
glEnd();
glBegin(GL_LINE_LOOP); //leg 1
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i,5.0+j);
glVertex2f(1.46+i,5.0+j);
glVertex2f(1.36+i,3.5+j);
glVertex2f(1.15+i,3.5+j);
//1.0
//1.36
//1.26
//1.20
glEnd();

glBegin(GL_POLYGON);// leg2
glColor3f(0.52,0.37,0.26);
glVertex2f(1.1+i,5.0+j); // 1.0
glVertex2f(1.1+i,3.5+j); //1.0
glVertex2f(1.30+i,3.5+j);
//1.20
glEnd();
glBegin(GL_LINE_LOOP);// leg2
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i,5.0+j); // 1.0
glVertex2f(1.1+i,3.5+j); //1.0
glVertex2f(1.30+i,3.5+j);
//1.20
glEnd();

glBegin(GL_POLYGON); //back shoes
glColor3f(0.0,0.0,0.0);
glVertex2f(1.15+i,3.5+j);
glVertex2f(1.30+i,3.5+j);
glVertex2f(1.4+i,3.35+j);
glVertex2f(1.15+i,3.35+j);
glEnd();
glBegin(GL_POLYGON); // front shoes
glColor3f(0.0,0.0,0.0);
glVertex2f(1.30+i,3.5+j);
glVertex2f(1.36+i,3.5+j);
glVertex2f(1.46+i,3.35+j);
glVertex2f(1.30+i,3.35+j);
glEnd();

}

else
{

glBegin(GL_POLYGON); //leg 1
glColor3f(0.52,0.37,0.26);
glVertex2f(1.1+i,5.0+j);
glVertex2f(1.46+i,5.0+j);
glVertex2f(1.43+i+m1,4.25+j);
glVertex2f(1.15+i+m1,4.25+j);
glEnd();
glBegin(GL_POLYGON); 
glVertex2f(1.15+i+m1,4.25+j);
glVertex2f(1.43+i+m1,4.25+j);
glVertex2f(1.41+i+m1/2+m3,3.5+j);
glVertex2f(1.20+i+m1/2+m3,3.5+j);
glEnd();
glBegin(GL_LINE_LOOP); //leg 1
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i,5.0+j);
glVertex2f(1.46+i,5.0+j);
glVertex2f(1.43+i+m1,4.25+j);
glVertex2f(1.15+i+m1,4.25+j);
glEnd();
glBegin(GL_LINE_LOOP); 
glVertex2f(1.15+i+m1,4.25+j);
glVertex2f(1.43+i+m1,4.25+j);
glVertex2f(1.41+i+m1/2+m3,3.5+j);
glVertex2f(1.20+i+m1/2+m3,3.5+j);
glEnd();
glBegin(GL_POLYGON); //leg 2
glColor3f(0.52,0.37,0.26);
glVertex2f(1.1+i,5.0+j);
glVertex2f(1.46+i,5.0+j);
glVertex2f(1.43+i+m2,4.25+j);
glVertex2f(1.15+i+m2,4.25+j);
glEnd();
glBegin(GL_POLYGON); 
glVertex2f(1.15+i+m2,4.25+j);
glVertex2f(1.43+i+m2,4.25+j);
glVertex2f(1.41+i+m2/2+m4,3.5+j);
glVertex2f(1.20+i+m2/2+m4,3.5+j);
glEnd();
glBegin(GL_LINE_LOOP); //leg 2
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i,5.0+j);
glVertex2f(1.46+i,5.0+j);
glVertex2f(1.43+i+m2,4.25+j);
glVertex2f(1.15+i+m2,4.25+j);
glEnd();
glBegin(GL_LINE_LOOP); 
glVertex2f(1.15+i+m2,4.25+j);
glVertex2f(1.43+i+m2,4.25+j);
glVertex2f(1.41+i+m2/2+m4,3.5+j);
glVertex2f(1.20+i+m2/2+m4,3.5+j);
glEnd();
//----hand----
glBegin(GL_POLYGON); //hand
glColor3f(0.94,0.81,0.99);
glVertex2f(1.1+i+k,6.2+j+l);
glVertex2f(1.2+i+k,6.2+j+l);
//1.0
//0.8
glVertex2f(1.2+i+k+m1,5.6+j+l);//1.42
glVertex2f(1.1+i+k+m1,5.6+j+l);
glEnd();
glBegin(GL_POLYGON); //hand
glColor3f(0.96,0.80,0.69);
glVertex2f(1.12+i+k+m1,5.6+j+l);
//0.8
glVertex2f(1.18+i+k+m1,5.6+j+l);//1.42
glVertex2f(1.18+i+k+2*m1,5.0+j+l);
glVertex2f(1.12+i+k+2*m1,5.0+j+l);
glEnd();
glBegin(GL_LINE_LOOP); //hand
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i+k,6.2+j+l);
glVertex2f(1.2+i+k,6.2+j+l);
//1.0
//0.8
glVertex2f(1.2+i+k+m1,5.6+j+l);//1.42
glVertex2f(1.1+i+k+m1,5.6+j+l);
glEnd();
glBegin(GL_LINE_LOOP); //hand
glColor3f(0.0,0.0,0.0);
glVertex2f(1.12+i+k+m1,5.6+j+l);
//0.8
glVertex2f(1.18+i+k+m1,5.6+j+l);//1.42
glVertex2f(1.18+i+k+2*m1,5.0+j+l);
glVertex2f(1.12+i+k+2*m1,5.0+j+l);
glEnd();
glColor3f(0.96,0.80,0.69);
drawCircle(1.15+i+k+2*m1,5.0+j+l,0.08,0,360);

}

}
void man2side(float i,float j,float k,float l,int move){ //move is a flag which decides whether to move or not.
float m1,m2,m3,m4;
if(move==0)
{m1=0;m2=0;m3=0;m4=0;}
else
{if(move%3==0)
{m1=-0.4;m2=0;m3=0,m4=0.2;}
else if(move%3==1)
{m1=0;m2=-0.4;m3=0.2,m4=0;}
else
{m1=0;m2=0;m3=0;m4=0;
}
}

glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0); //hair
glVertex2f(1.1+i,6.75+j);
glVertex2f(1.05+i,6.9+j);
glVertex2f(1.5+i,6.9+j);
glVertex2f(1.5+i,6.4+j);
glVertex2f(1.4+i,6.3+j);
glVertex2f(1.4+i,6.75+j);
glEnd();
glBegin(GL_POLYGON); //face
glColor3f(0.96,0.80,0.69);
glVertex2f(1.1+i+k,6.75+j+l); // glVertex2f(1.0,6.75);
glVertex2f(1.4+i+k,6.75+j+l); // glVertex2f(1.3,6.75);
glVertex2f(1.4+i+k,6.3+j+l);
// glVertex2f(1.3,6.5);
glVertex2f(1.3+i+k,6.2+j+l); //glVertex2f(1.35,6.4);
glVertex2f(1.15+i+k,6.2+j+l);
glVertex2f(1.1+i+k,6.3+j+l);
glVertex2f (1.05+i+k,6.4+j+l);
glVertex2f(1.1+i+k,6.5+j+l);
//glVertex2f(0.75,6.75);
glEnd();

glBegin(GL_LINE_LOOP); //face
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i+k,6.75+j+l); // glVertex2f(1.0,6.75);
glVertex2f(1.4+i+k,6.75+j+l); // glVertex2f(1.3,6.75);
glVertex2f(1.4+i+k,6.3+j+l);
// glVertex2f(1.3,6.5);
glVertex2f(1.3+i+k,6.2+j+l); //glVertex2f(1.35,6.4);
glVertex2f(1.15+i+k,6.2+j+l);
glVertex2f(1.1+i+k,6.3+j+l);
glVertex2f (1.05+i+k,6.4+j+l);
glVertex2f(1.1+i+k,6.5+j+l);
glEnd();
glColor3f(0.0,0.0,0.0);
drawCircle(1.22+i+k,6.55+j+l,0.03,0,360);
glBegin(GL_POLYGON); //body
glColor3f(0.84,0.91,0.79);
glVertex2f(1.1+i+k,6.2+j+l); //glVertex2f(1.0,6.2);
glVertex2f(1.46+i+k,6.2+j+l); //glVertex2f(1.36,6.2);
glVertex2f(1.46+i,5.0+j); //1.36,6.2
glVertex2f(1.1+i,5.0+j);//1.0
glEnd();
glBegin(GL_LINE_LOOP); //body
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i+k,6.2+j+l); //glVertex2f(1.0,6.2);
glVertex2f(1.46+i+k,6.2+j+l); //glVertex2f(1.36,6.2);
glVertex2f(1.46+i,5.0+j); //1.36,6.2
glVertex2f(1.1+i,5.0+j);//1.0
glEnd();

glBegin(GL_POLYGON); //leg 1
glColor3f(0.52,0.37,0.26);
glVertex2f(1.1+i,5.0+j);
glVertex2f(1.46+i,5.0+j);
glVertex2f(1.43+i+m1,4.25+j);
glVertex2f(1.15+i+m1,4.25+j);
glEnd();
glBegin(GL_POLYGON); 
glVertex2f(1.15+i+m1,4.25+j);
glVertex2f(1.43+i+m1,4.25+j);
glVertex2f(1.41+i+m1/2+m3,3.5+j);
glVertex2f(1.20+i+m1/2+m3,3.5+j);
glEnd();
glBegin(GL_LINE_LOOP); //leg 1
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i,5.0+j);
glVertex2f(1.46+i,5.0+j);
glVertex2f(1.43+i+m1,4.25+j);
glVertex2f(1.15+i+m1,4.25+j);
glEnd();
glBegin(GL_LINE_LOOP); 
glVertex2f(1.15+i+m1,4.25+j);
glVertex2f(1.43+i+m1,4.25+j);
glVertex2f(1.41+i+m1/2+m3,3.5+j);
glVertex2f(1.20+i+m1/2+m3,3.5+j);
glEnd();
glBegin(GL_POLYGON); //leg 2
glColor3f(0.52,0.37,0.26);
glVertex2f(1.1+i,5.0+j);
glVertex2f(1.46+i,5.0+j);
glVertex2f(1.43+i+m2,4.25+j);
glVertex2f(1.15+i+m2,4.25+j);
glEnd();
glBegin(GL_POLYGON); 
glVertex2f(1.15+i+m2,4.25+j);
glVertex2f(1.43+i+m2,4.25+j);
glVertex2f(1.41+i+m2/2+m4,3.5+j);
glVertex2f(1.20+i+m2/2+m4,3.5+j);
glEnd();
glBegin(GL_LINE_LOOP); //leg 2
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i,5.0+j);
glVertex2f(1.46+i,5.0+j);
glVertex2f(1.43+i+m2,4.25+j);
glVertex2f(1.15+i+m2,4.25+j);
glEnd();
glBegin(GL_LINE_LOOP); 
glVertex2f(1.15+i+m2,4.25+j);
glVertex2f(1.43+i+m2,4.25+j);
glVertex2f(1.41+i+m2/2+m4,3.5+j);
glVertex2f(1.20+i+m2/2+m4,3.5+j);
glEnd();

}
int c1=0;
void man2back(float i,float j,float k,float l)
{
float j2,j3;
glBegin(GL_POLYGON); //face
glColor3f(0.0,0.0,0.0);glVertex2f(1.1+i,6.8+j); // glVertex2f(1.0,6.75);
glVertex2f(1.46+i,6.8+j); // glVertex2f(1.3,6.75);
//glVertex2f(1.4+i+k,6.5+j+l);
// glVertex2f(1.3,6.5);
//glVertex2f(1.45+i+k,6.4+j+l); //glVertex2f(1.35,6.4);
glVertex2f(1.46+i,6.3+j);
//glVertex2f(1.3,6.3);
glVertex2f(1.36+i,6.2+j);
glVertex2f (1.2+i,6.2+j);
//glVertex2f(1.25,6.2);
// (1.1,6.2);
glVertex2f(1.1+i,6.3+j);
glEnd();
//1.0,6.3
glBegin(GL_POLYGON); //body
glColor3f(0.84,0.91,0.79);
glVertex2f(1.1+i,6.2+j); //glVertex2f(1.0,6.2);
glVertex2f(1.46+i,6.2+j); //glVertex2f(1.36,6.2);
glVertex2f(1.46+i,5.0+j); //1.36,6.2
glVertex2f(1.1+i,5.0+j);//1.0
glEnd();
glBegin(GL_LINE_LOOP); //body
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i,6.2+j); //glVertex2f(1.0,6.2);
glVertex2f(1.46+i,6.2+j); //glVertex2f(1.36,6.2);
glVertex2f(1.46+i,5.0+j); //1.36,6.2
glVertex2f(1.1+i,5.0+j);//1.0
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.0,0.0,0.0); // left hand
glColor3f(0.84,0.91,0.79);
glVertex2f(1.1+i,6.2+j);
glVertex2f(1.0+i,6.2+j);
glVertex2f(1.0+i,5.6+j);
glVertex2f(1.1+i,5.6+j);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glColor3f(0.96,0.80,0.69);
glVertex2f(1.02+i,5.6+j);
glVertex2f(1.08+i,5.6+j);
glVertex2f(1.08+i,5.0+j);
glVertex2f(1.02+i,5.0+j);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0); // left hand
glVertex2f(1.1+i,6.2+j);glVertex2f(1.0+i,6.2+j);
glVertex2f(1.0+i,5.6+j);
glVertex2f(1.1+i,5.6+j);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(1.02+i,5.6+j);
glVertex2f(1.08+i,5.6+j);
glVertex2f(1.08+i,5.0+j);
glVertex2f(1.02+i,5.0+j);
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.0,0.0,0.0); //right hand
glColor3f(0.84,0.91,0.79);
glVertex2f(1.46+i,6.2+j);
glVertex2f(1.56+i,6.2+j);
glVertex2f(1.56+i,5.6+j);
glVertex2f(1.46+i,5.6+j);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.96,0.80,0.69);
//glColor3f(0.0,0.0,0.0);
glVertex2f(1.48+i,5.6+j);glVertex2f(1.54+i,5.6+j);
glVertex2f(1.54+i+k,5.0+j+l);
glVertex2f(1.48+i+k,5.0+j+l);
glEnd();
glColor3f(0.96,0.80,0.69);
drawCircle(1.05+i,5.0+j,0.08,0,360);
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0); //right hand
glVertex2f(1.46+i,6.2+j);
glVertex2f(1.56+i,6.2+j);
glVertex2f(1.56+i,5.6+j);
glVertex2f(1.46+i,5.6+j);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(1.48+i,5.6+j);
glVertex2f(1.54+i,5.6+j);
glVertex2f(1.54+i+k,5.0+j+l);
glVertex2f(1.48+i+k,5.0+j+l);
glEnd();glColor3f(0.96,0.80,0.69);
drawCircle(1.51+i+k,5.0+j+l,0.08,0,360);
if(c1==0)
{c1=1;j2=0;j3=0.2;}
else
{c1=0;j2=0.2;j3=0;}
glBegin(GL_POLYGON); //leg 1
glColor3f(0.52,0.37,0.26);
glVertex2f(1.1+i,5.0+j);
glVertex2f(1.28+i,5.0+j);
glVertex2f(1.28+i,3.5+j2+j);
glVertex2f(1.1+i,3.5+j+j2);
//1.0
//1.36
//1.26
//1.20
glEnd();
glBegin(GL_LINE_LOOP); //leg 1
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i,5.0+j);
glVertex2f(1.28+i,5.0+j);
glVertex2f(1.28+i,3.5+j+j2);
glVertex2f(1.1+i,3.5+j+j2);
//1.0
//1.36
//1.26
//1.20
glEnd();
glBegin(GL_POLYGON); //leg 2
glColor3f(0.52,0.37,0.26);
glVertex2f(1.28+i,5.0+j); //1.0
glVertex2f(1.46+i,5.0+j); //1.36
glVertex2f(1.46+i,3.5+j+j3);
//1.26
glVertex2f(1.28+i,3.5+j+j3);
//1.20
glEnd();
glBegin(GL_LINE_LOOP); //leg 2
glColor3f(0.0,0.0,0.0);
glVertex2f(1.28+i,5.0+j); //1.0
glVertex2f(1.46+i,5.0+j); //1.36
glVertex2f(1.46+i,3.5+j+j3);
glVertex2f(1.28+i,3.5+j+j3);
//1.26
//1.20
glEnd();
}

void man2front(float i,float j,float k,float l,float n,float m,float o)
{
glBegin(GL_POLYGON); //face
//glColor3f(0.0,0.0,0.0);
glColor3f(0.96,0.80,0.69);
glVertex2f(1.1+i+k+n,6.8+j+l+m); // glVertex2f(1.0,6.75);
glVertex2f(1.46+i+k+n,6.8+j+l+m); // glVertex2f(1.3,6.75);
//glVertex2f(1.4+i+k,6.5+j+l);
// glVertex2f(1.3,6.5);
//glVertex2f(1.45+i+k,6.4+j+l);
//glVertex2f(1.35,6.4);
glVertex2f(1.46+i+k+n,6.3+j+l+m);
glVertex2f(1.36+i+k+n,6.2+j+l+m);
glVertex2f (1.2+i+k+n,6.2+j+l+m);
//glVertex2f(1.3,6.3);
//glVertex2f(1.25,6.2);
// (1.1,6.2);
glVertex2f(1.1+i+k+n,6.3+j+l+m);
glEnd();
//1.0,6.3
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i+k+n,6.8+j+l+m);
glVertex2f(1.46+i+k+n,6.8+j+l+m);
glVertex2f(1.46+i+k+n,6.65+j+l+m);
glVertex2f(1.1+i+k+n,6.65+j+l+m);
glEnd();
glColor3f(0.0,0.0,0.0);
drawCircle(1.20+i+k+n,6.55+j+l+m,0.03,0,360);
glColor3f(0.0,0.0,0.0);
drawCircle(1.34+i+k+n,6.55+j+l+m,0.03,0,360);
glColor3f(0.0,0.0,0.0);
drawCircle(1.27+i+k+n,6.40+j+l+m,0.03,0,360);glBegin(GL_POLYGON); //body
glColor3f(0.84,0.91,0.79);
glVertex2f(1.1+i+k+n,6.2+j+l+m); //glVertex2f(1.0,6.2);
glVertex2f(1.46+i+k+n,6.2+j+l+m); //glVertex2f(1.36,6.2);
glVertex2f(1.46+i+k,5.0+j+l); //1.36,6.2
glVertex2f(1.1+i+k,5.0+j+l);//1.0
glEnd();
glBegin(GL_LINE_LOOP); //body
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i+k+n,6.2+j+l+m); //glVertex2f(1.0,6.2);
glVertex2f(1.46+i+k+n,6.2+j+l+m); //glVertex2f(1.36,6.2);
glVertex2f(1.46+i+k,5.0+j+l); //1.36,6.2
glVertex2f(1.1+i+k,5.0+j+l);//1.0
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.0,0.0,0.0); // left hand
glColor3f(0.84,0.91,0.79);
glVertex2f(1.1+i+k+n,6.2+j+l+m);
glVertex2f(1.0+i+k+n,6.2+j+l+m);
glVertex2f(1.0+i+k+n,5.6+j+l+m);
glVertex2f(1.1+i+k+n,5.6+j+l+m);
glEnd();glBegin(GL_POLYGON);
//glColor3f(0.0,0.0,0.0);
glColor3f(0.96,0.80,0.69);
glVertex2f(1.02+i+k+n,5.6+j+l+m);
glVertex2f(1.08+i+k+n,5.6+j+l+m);
glVertex2f(1.08+i+k+n,5.0+j+l+m+o);
glVertex2f(1.02+i+k+n,5.0+j+l+m+o);
glEnd();
glColor3f(0.96,0.80,0.69);
drawCircle(1.05+i+k+n,5.0+j+l+m+o,0.08,0,360);
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0); //right hand
glColor3f(0.84,0.91,0.79);
glVertex2f(1.46+i+k+n,6.2+j+l+m);
glVertex2f(1.56+i+k+n,6.2+j+l+m);
glVertex2f(1.56+i+k+n,5.6+j+l+m);
glVertex2f(1.46+i+k+n,5.6+j+l+m);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.96,0.80,0.69);
//glColor3f(0.0,0.0,0.0);
glVertex2f(1.48+i+k+n,5.6+j+l+m);
glVertex2f(1.54+i+k+n,5.6+j+l+m);
glVertex2f(1.54+i+k+n,5.0+j+l+m+o);
glVertex2f(1.48+i+k+n,5.0+j+l+m+o);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0); // left hand
glVertex2f(1.1+i+k+n,6.2+j+l+m);
glVertex2f(1.0+i+k+n,6.2+j+l+m);
glVertex2f(1.0+i+k+n,5.6+j+l+m);
glVertex2f(1.1+i+k+n,5.6+j+l+m);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(1.02+i+k+n,5.6+j+l+m);
glVertex2f(1.08+i+k+n,5.6+j+l+m);
glVertex2f(1.08+i+k+n,5.0+j+l+m+o);
glVertex2f(1.02+i+k+n,5.0+j+l+m+o);
glEnd();
glColor3f(0.96,0.80,0.69);
drawCircle(1.05+i+k+n,5.0+j+l+m+o,0.08,0,360);
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0); //right hand
glVertex2f(1.46+i+k+n,6.2+j+l+m);
glVertex2f(1.56+i+k+n,6.2+j+l+m);
glVertex2f(1.56+i+k+n,5.6+j+l+m);
glVertex2f(1.46+i+k+n,5.6+j+l+m);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(1.48+i+k+n,5.6+j+l+m);
glVertex2f(1.54+i+k+n,5.6+j+l+m);
glVertex2f(1.54+i+k+n,5.0+j+l+m+o);
glVertex2f(1.48+i+k+n,5.0+j+l+m+o);
glEnd();
glColor3f(0.96,0.80,0.69);
drawCircle(1.51+i+k+n,5.0+j+l+m+o,0.08,0,360);
if(abs(j*10)%2==0)
{
glBegin(GL_POLYGON); //leg 1
glColor3f(0.52,0.37,0.26);
glVertex2f(1.1+i+k,5.0+j+l);
//1.0
glVertex2f(1.28+i+k,5.0+j+l);
glVertex2f(1.28+i,4.25+j);
glVertex2f(1.1+i,4.25+j);
//1.36
//1.26
//1.20
glEnd();
glBegin(GL_POLYGON); //leg 1
glColor3f(0.52,0.37,0.26);
glVertex2f(1.1+i,4.25+j);
//1.0
glVertex2f(1.28+i,4.25+j); //1.36
glVertex2f(1.28+i,3.75+j); //1.26
glVertex2f(1.1+i,3.75+j);
//1.20
glEnd();
glBegin(GL_POLYGON); //leg 2
glColor3f(0.52,0.37,0.26);
glVertex2f(1.28+i+k,5.0+j+l); //1.0
glVertex2f(1.46+i+k,5.0+j+l); //1.36
glVertex2f(1.46+i,4.25+j);
//1.26
glVertex2f(1.28+i,4.25+j);
//1.20
glEnd();
glBegin(GL_POLYGON); //leg 2
glColor3f(0.52,0.37,0.26);
glVertex2f(1.28+i,4.25+j); //1.0
glVertex2f(1.46+i,4.25+j); //1.36
glVertex2f(1.46+i,3.5+j); //1.26
glVertex2f(1.28+i,3.5+j);
//1.20
glEnd();

//----------------line loop

glBegin(GL_LINE_LOOP); //leg 1
glColor3f(0,0,0);
glVertex2f(1.1+i+k,5.0+j+l);
//1.0
glVertex2f(1.28+i+k,5.0+j+l);
glVertex2f(1.28+i,4.25+j);
glVertex2f(1.1+i,4.25+j);
//1.36
//1.26
//1.20
glEnd();
glBegin(GL_LINE_LOOP); //leg 1
glColor3f(0,0,0);
glVertex2f(1.1+i,4.25+j);
//1.0
glVertex2f(1.28+i,4.25+j); //1.36
glVertex2f(1.28+i,3.75+j); //1.26
glVertex2f(1.1+i,3.75+j);
//1.20
glEnd();
glBegin(GL_LINE_LOOP); //leg 2
glColor3f(0,0,0);
glVertex2f(1.28+i+k,5.0+j+l); //1.0
glVertex2f(1.46+i+k,5.0+j+l); //1.36
glVertex2f(1.46+i,4.25+j);
//1.26
glVertex2f(1.28+i,4.25+j);
//1.20
glEnd();
glBegin(GL_LINE_LOOP); //leg 2
glColor3f(0,0,0);
glVertex2f(1.28+i,4.25+j); //1.0
glVertex2f(1.46+i,4.25+j); //1.36
glVertex2f(1.46+i,3.5+j); //1.26
glVertex2f(1.28+i,3.5+j);
//1.20
glEnd();


}
else//----------------------------movement------------------------
{
glBegin(GL_POLYGON); //leg 1
glColor3f(0.52,0.37,0.26);
glVertex2f(1.1+i+k,5.0+j+l);
//1.0
glVertex2f(1.28+i+k,5.0+j+l);
glVertex2f(1.28+i,4.25+j);
glVertex2f(1.1+i,4.25+j);
//1.36
//1.26
//1.20
glEnd();
glBegin(GL_POLYGON); //leg 1
glColor3f(0.52,0.37,0.26);
glVertex2f(1.1+i,4.25+j);
//1.0
glVertex2f(1.28+i,4.25+j); //1.36
glVertex2f(1.28+i,3.5+j); //1.26
glVertex2f(1.1+i,3.5+j);
//1.20
glEnd();


glBegin(GL_LINE_LOOP); //leg 1
glColor3f(0,0,0);
glVertex2f(1.1+i+k,5.0+j+l);
//1.0
glVertex2f(1.28+i+k,5.0+j+l);
glVertex2f(1.28+i,4.25+j);
glVertex2f(1.1+i,4.25+j);
//1.36
//1.26
//1.20
glEnd();
glBegin(GL_LINE_LOOP); //leg 1
glColor3f(0,0,0);
glVertex2f(1.1+i,4.25+j);
//1.0
glVertex2f(1.28+i,4.25+j); //1.36
glVertex2f(1.28+i,3.5+j); //1.26
glVertex2f(1.1+i,3.5+j);
//1.20
glEnd();



glBegin(GL_POLYGON); //leg 2
glColor3f(0.52,0.37,0.26);
glVertex2f(1.28+i+k,5.0+j+l); //1.0
glVertex2f(1.46+i+k,5.0+j+l); //1.36
glVertex2f(1.46+i,4.25+j);
//1.26
glVertex2f(1.28+i,4.25+j);
//1.20
glEnd();
glBegin(GL_POLYGON); //leg 2
glColor3f(0.52,0.37,0.26);
glVertex2f(1.28+i,4.25+j); //1.0
glVertex2f(1.46+i,4.25+j); //1.36
glVertex2f(1.46+i,3.75+j); //1.26
glVertex2f(1.28+i,3.75+j);
//1.20
glEnd();


glBegin(GL_LINE_LOOP); //leg 2
glColor3f(0,0,0);
glVertex2f(1.28+i+k,5.0+j+l); //1.0
glVertex2f(1.46+i+k,5.0+j+l); //1.36
glVertex2f(1.46+i,4.25+j);
//1.26
glVertex2f(1.28+i,4.25+j);
//1.20
glEnd();
glBegin(GL_LINE_LOOP); //leg 2
glColor3f(0,0,0);
glVertex2f(1.28+i,4.25+j); //1.0
glVertex2f(1.46+i,4.25+j); //1.36
glVertex2f(1.46+i,3.75+j); //1.26
glVertex2f(1.28+i,3.75+j);
//1.20
glEnd();


}
}

void backman1(float i,float j)
{
glBegin(GL_POLYGON); //body
glColor3f(0.94,0.81,0.99);
glVertex2f(1.1+i,2.2+j); //glVertex2f(1.0,6.2);
glVertex2f(1.46+i,2.2+j); //glVertex2f(1.36,6.2);
glVertex2f(1.46+i,1.5+j); //1.36,6.2
glVertex2f(1.1+i,1.5+j);//1.0
glEnd();glBegin(GL_LINE_LOOP); //body
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i,2.2+j); //glVertex2f(1.0,6.2);
glVertex2f(1.46+i,2.2+j); //glVertex2f(1.36,6.2);
glVertex2f(1.46+i,1.5+j); //1.36,6.2
glVertex2f(1.1+i,1.5+j);//1.0
glEnd();
glBegin(GL_POLYGON); //head
glColor3f(0.0,0.0,0.0);
glVertex2f(1.15+i,2.2+j);
glVertex2f(1.41+i,2.2+j);
glVertex2f(1.46+i,2.45+j);
glVertex2f(1.46+i,2.55+j);
glVertex2f(1.28+i,2.65+j);
glVertex2f(1.1+i,2.55+j);
glVertex2f(1.1+i,2.45+j);
glEnd();
glBegin(GL_POLYGON); //leg 1
glColor3f(0.52,0.37,0.26);
glVertex2f(1.1+i,1.5+j);
glVertex2f(1.46+i,1.5+j);
glVertex2f(1.36+i,0.5+j);
glVertex2f(1.30+i,0.5+j);
//1.0
//1.36
//1.26
//1.20
glEnd();
glBegin(GL_LINE_LOOP); //leg 1
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i,1.5+j);
//1.0
glVertex2f(1.46+i,1.5+j);
glVertex2f(1.36+i,0.5+j);
glVertex2f(1.30+i,0.5+j);
//1.36
//1.26
//1.20
glEnd();
glBegin(GL_POLYGON);// leg2
glColor3f(0.52,0.37,0.26);
glVertex2f(1.1+i,1.5+j); // 1.0
glVertex2f(1.1+i,0.5+j); //1.0
glVertex2f(1.30+i,0.5+j);
//1.20
glEnd();
glBegin(GL_LINE_LOOP);// leg2
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i,1.5+j); // 1.0
glVertex2f(1.1+i,0.5+j); //1.0
glVertex2f(1.30+i,0.5+j);
//1.20
glEnd();
glBegin(GL_POLYGON);
//glColor3f(0.0,0.0,0.0);
//hand
glColor3f(0.94,0.81,0.99);
glVertex2f(1.06+i,2.2+j);
glVertex2f(1.1+i,2.2+j);
glVertex2f(1.1+i,1.8+j);
glVertex2f(1.06+i,1.8+j);
glEnd();
glBegin(GL_POLYGON);
// glColor3f(0.0,0.0,0.0);
glColor3f(0.94,0.81,0.99);
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
void sideman1(float i)
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
//glVertex2f(0.75,6.75);
glEnd();
//glVertex2f(1.3,6.3);
//glVertex2f(1.25,6.2);
// (1.1,6.2);
//1.0,6.3
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
glBegin(GL_LINE_LOOP); // left hand
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i,2.2);
glVertex2f(1.2+i,2.2);
glVertex2f(1.2+i,1.9);
glVertex2f(1.1+i,1.9);
glEnd();
glBegin(GL_POLYGON);glColor3f(0.96,0.80,0.69);
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
}
void man1backleg(float i)
{
glBegin(GL_POLYGON); //leg 1
glColor3f(0.52,0.37,0.26);
glVertex2f(1.1+i,1.5);
glVertex2f(1.46+i,1.5);
//1.0
//1.36
glVertex2f(1.36+(1.1*i),0.5);
//1.26
glVertex2f(1.30+(1.1*i),0.5);
//1.20
glEnd();
glBegin(GL_LINE_LOOP); //leg 1
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i,1.5);
//1.0
glVertex2f(1.46+i,1.5);
//1.36
glVertex2f(1.36+(1.1*i),0.5);
glVertex2f(1.30+(1.1*i),0.5);
//1.26
//1.20
glEnd();
}
void man1frontleg(float i)
{
glBegin(GL_POLYGON);// leg2
glColor3f(0.52,0.37,0.26);
glVertex2f(1.1+i,1.5);
// 1.0
glVertex2f(1.1+(1.1*i),0.5);
glVertex2f(1.30+(1.1*i),0.5);
glEnd();
glBegin(GL_LINE_LOOP);// leg2
glColor3f(0.0,0.0,0.0);
//1.0
//1.20
glVertex2f(1.1+i,1.5);
// 1.0
glVertex2f(1.1+(1.1*i),0.5);
glVertex2f(1.30+(1.1*i),0.5);
//1.0
//1.20
glEnd();
//glFlush();
}
/* glBegin(GL_POLYGON); //back shoes
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+i,0.65);
glVertex2f(1.30+i,0.65);
glVertex2f(1.4+i,0.5);
glVertex2f(1.1+i,0.5);
glEnd();
glBegin(GL_POLYGON); // front shoes
glColor3f(0.0,0.0,0.0);
glVertex2f(1.30+i,0.65);
glVertex2f(1.36+i,0.65);
glVertex2f(1.46+i,0.5);
glVertex2f(1.30+i,0.5);
glEnd();
glColor3f(0.96,0.80,0.69);
drawCircle(1.15+i,1.5,0.05,0,360); */

void movehand(float i)
{
glBegin(GL_POLYGON); //hand
glColor3f(0.94,0.81,0.99);
glVertex2f(1.1,6.2);
//1.0
glVertex2f(0.9+(0.25*i),5.5);
//0.8
glVertex2f(1.0+(0.25*i),5.6);//1.42
glEnd();
glBegin(GL_POLYGON); //hand
glColor3f(0.96,0.80,0.69);
glVertex2f(0.9+(0.25*i),5.5);
//0.8
glVertex2f(1.0+(0.25*i),5.6);//1.42
glVertex2f(1.6+(0.25*i),5.6);
glVertex2f(1.6+(0.25*i),5.5);
glEnd();
glBegin(GL_LINE_LOOP); //hand outline
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1,6.2);
//1.0
glVertex2f(0.9+(0.25*i),5.5);
//0.8
glVertex2f(1.0+(0.25*i),5.6);//1.42
glEnd();
glBegin(GL_LINE_LOOP); //hand
glColor3f(0.0,0.0,0.0);
glVertex2f(0.9+(0.25*i),5.5);
//0.8
glVertex2f(1.0+(0.25*i),5.6);//1.42
glVertex2f(1.6+(0.25*i),5.6);
glVertex2f(1.6+(0.25*i),5.5);
glEnd();glColor3f(1.0,0.0,0.0);
drawCircle(1.6+(0.25*i),5.55,0.15,0,360);
}

void moveleg(int i)
{
glBegin(GL_POLYGON); //leg 1
glColor3f(0.52,0.37,0.26);
glVertex2f(1.1,5.0);
//1.0
glVertex2f(1.46,5.0);
//1.36
glVertex2f(1.36+(1.25*i),3.5+i);
glVertex2f(1.1+(1.25*i),3.5+i);
//1.26
//1.20
glEnd();
glBegin(GL_LINE_LOOP); //leg 1
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1,5.0);
//1.0
glVertex2f(1.46,5.0);
//1.36
glVertex2f(1.36+(1.25*i),3.5+i);
glVertex2f(1.1+(1.25*i),3.5+i);
//1.26
//1.20
glEnd();
glBegin(GL_POLYGON); // front shoes
glColor3f(0.0,0.0,0.0);
glVertex2f(1.1+(1.25*i),3.5+i);
glVertex2f(1.36+(1.25*i),3.5+i);
glVertex2f(1.46+(1.25*i),3.35+(1.5*i));
glVertex2f(1.1+(1.25*i),3.35+(1.25*i));
glEnd();
}
void movegate(float x)
{
glBegin(GL_POLYGON);//punching bag
glColor3f(1.0,0.0,0.0);
glVertex2f(1.6+x,6.95);
glColor3f(1.0,0.0,0.0);
glVertex2f(1.6+x,4.5);
glColor3f(1.0,0.0,0.0);
glVertex2f(1.8+x,4.4);
glColor3f(1.0,0.0,0.0);
glVertex2f(2.0+x,4.5);
glColor3f(0.10,0.0,0.0);
glVertex2f(2.0+x,6.95);
glColor3f(1.0,0.0,0.0);
glVertex2f(1.8+x,7.20);
glEnd();glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(1.8+x,7.20);
glVertex2f(1.8,10.0);
glEnd();
}
void man3(float s)
{
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(6.8,6.5-s);
glVertex2f(6.75,6.55-s);
glVertex2f(6.74,7.1-s);
glVertex2f(7.25,7.1-s);
glVertex2f(7.25,6.55-s);
glVertex2f(7.2,6.5-s);
glVertex2f(7.2,7.1-s);
glVertex2f(6.8,7.1-s);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.96,0.80,0.69);
glVertex2f(6.8,7.0-s);
glVertex2f(7.2,7.0-s);
glVertex2f(7.2,6.5-s);
glVertex2f(7.0,6.4-s);
glVertex2f(6.8,6.5-s);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.94,0.81,0.99);
glVertex2f(6.8,6.4-s);
glVertex2f(7.2,6.4-s);
glVertex2f(7.2,5.6-s);
glVertex2f(6.8,5.6-s);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.52,0.37,0.26);
glVertex2f(6.8,5.6-s);
glVertex2f(6.8,5.0-s);
glVertex2f(7.0,5.0-s);
glVertex2f(7.0,5.6-s);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.52,0.37,0.26);
glVertex2f(7.0,5.6-s);glVertex2f(7.2,5.6-s);
glVertex2f(7.2,5.0-s);
glVertex2f(7.0,5.0-s);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(6.8,7.0-s);
glVertex2f(7.2,7.0-s);
glVertex2f(7.2,6.5-s);
glVertex2f(7.0,6.4-s);
glVertex2f(6.8,6.5-s);
glEnd();
drawCircle(6.9,6.7-s,0.02,0,360);
drawCircle(7.1,6.7-s,0.02,0,360);
glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(6.8,6.4-s);
glVertex2f(7.2,6.4-s);
glVertex2f(7.2,5.6-s);
glVertex2f(6.8,5.6-s);
glEnd();glBegin(GL_LINE_LOOP);
glColor3f(0.0,0.0,0.0);
glVertex2f(6.8,5.6-s);
glVertex2f(6.8,5.0-s);
glVertex2f(7.0,5.0-s);
glVertex2f(7.0,5.6-s);
glEnd();
glBegin(GL_LINE_LOOP);
glVertex2f(7.0,5.6-s);
glVertex2f(7.2,5.6-s);
glVertex2f(7.2,5.0-s);
glVertex2f(7.0,5.0-s);
glEnd();
}
void func1()
{

float s,k,l,m,r,i,j,z,x,y,n,a,b,c,e,f,g,h,o,p,q;
int k1;
//glClearColor(0.0,0.0,0.0,1.0);
glMatrixMode(GL_PROJECTION);
glPushMatrix();
glLoadIdentity();
// glOrtho(0.0,12.0,0.0,10.0,-1.0,1.0);
//intro();
// glFlush();
int count=0,count1=0,count2=0,count3=0;
do{
for(s=0; s<=1; s=s+1.0)
{
glClear(GL_COLOR_BUFFER_BIT); //punching
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
man2(0,0,0,0,0);
movehand(s);
movegate(s);
//glutSwapBuffers();
opendoor(0);
glutSwapBuffers();
delay(100);
//glFlush();
}
count++;
}
while(count!=15);

do{for(s=0; s<=1; s=s+1.0)
{
glClear(GL_COLOR_BUFFER_BIT); //kicking
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
man2(0,0,0,0,0);
moveleg(s);
movehand(-1.0);
movegate(s);
//
opendoor(0);
glutSwapBuffers();
delay(100);
//glFlush();
}
count1++;
}
while(count1!=15);

for(s=0;s<=1;s++)
{
glClear(GL_COLOR_BUFFER_BIT); //stop the man
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
man2(0,0,0,0,0);
straithand(0,0,0,0,0);
movegate(0);
opendoor(0);
glutSwapBuffers();
delay(100);
//glFlush();
}
for(i=0;i<1.0;i++)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0); //mans front view
movegate(0);
man2front(k,-s,0,0,0,0,0);
opendoor(0);
glutSwapBuffers();
delay(200);
//glFlush();
}

for(i=0;i<=0.5;i=i+0.02)
{
glClear(GL_COLOR_BUFFER_BIT); // move towards dumbell(below)
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
//man2(0,-s,0,0);
//glutSwapBuffers();
//straithand(0,-s,0,0,0);
man2front(k,-s-i,0,0,0,0,0);
movegate(0);
opendoor(0);
glutSwapBuffers();
delay(100);
//glFlush();
}

for(k=0;k<=1.1;k=k+0.1)
{
glClear(GL_COLOR_BUFFER_BIT); //move right
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
movegate(0);
opendoor(0);
man2(k,-s,0,0,k*10);
straithand(k,-s,0,0,0);
glutSwapBuffers();

delay(100);
//glFlush();
}

for(l=0;l<=1.0;l=l+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
movegate(0);
opendoor(0);
man2(k,-s,l,-l,0);
straithand(k,-s,l,-l,0);
glutSwapBuffers();

//bend down to pick dumbell
delay(100);
//glFlush();
}

for(m=0;m<=1.0;m=m+0.1)
//stand straight after picking dumbells
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);
movegate(0);
man2(k,-s,l-m,-l+m,0);
straithand(k,-s,l-m,-l+m,0);
//
dumbells(1,0,-(m),(m));
//movegate(0);
opendoor(0);
glutSwapBuffers();
delay(100);
//glFlush();
}

do{
for(r=0;r<0.9;r=r+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);
//move dumbells
//up
movegate(0);
man2(k,-s,l-m,-l+m,0);
straithand(k,-s,l-m,-l+m,r);

dumbells(1,0,-(m),(m)+r);
movegate(0);
opendoor(0);
glutSwapBuffers();
delay(100);
//glFlush();
}
count2++;
} while(count2!=10);

for(l=1.0;l>=-0.1;l=l-0.1)
{
glClear(GL_COLOR_BUFFER_BIT); //bend down to keep dumbell
//intro();
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
movegate(0);
man2(k,-s,l,-l,0);
//glutSwapBuffers();
straithand(k,-s,l,-l,0);
opendoor(0);
glutSwapBuffers();delay(100);
//glFlush();
}

for(i=0;i<1.0;i++)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0); //mans front view
movegate(0);
man2front(k,-s,0,0,0,0,0);
opendoor(0);
glutSwapBuffers();
delay(100);
//glFlush();
}

for(i=0;i<1.0;i=i+0.02)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
dumbells(1,0,0,0);
benchdumbell(0,0,0,0);
movegate(0);
man2front(k,-s-i,0,0,0,0,0);
//walk
//down
opendoor(0);
glutSwapBuffers();
delay(100);
//glFlush();
}

for(j=0;j<0.5;j=j+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
dumbells(1,0,0,0);
benchdumbell(0,0,0,0);
movegate(0);
man2(k,-s-i,0,0,0);
// side view
straithand(k,-s-i,0,0,0);
opendoor(0);
glutSwapBuffers();
delay(100);
//glFlush();
}

for(j=0;j<4.7;j=j+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);dumbells(1,0,0,0);
movegate(0);
man2(k+j,-s-i,0,0,j*10);
// move right towards working bench
if(abs(j*10)%2==0)
straithand(k+j,-s-i,0,0,0);
opendoor(0);
glutSwapBuffers();
delay(100);
//glFlush();
}

for(z=0;z<0.5;z=z+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
movegate(0);
man2front(k+j,-s-i,0,0,0,0,0);
opendoor(0);
glutSwapBuffers();
delay(100);
//glFlush();
}
for(z=0;z<0.5;z=z+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
movegate(0);
man2front(k+j,-s-i,-(0.5*z),(0.1*z),0,0,0);
opendoor(0);
glutSwapBuffers();
delay(100);
//glFlush();
}

for(x=0;x<=0.5;x=x+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
movegate(0);
man2front(k+j,-s-i,-(0.5*z),(0.1*z),-(0.5*x),(0.1*x),0); // lie on wb
opendoor(0);glutSwapBuffers();
delay(100);
//glFlush();
}

for(y=0;y<=1.7;y=y+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
movegate(0);
man2front(k+j,-s-i,-(0.5*z),(0.1*z),-(0.5*x),(0.1*x),y);
opendoor(0);
glutSwapBuffers();
delay(100);
//glFlush();
}

do{
for(n=0;n<=0.75;n=n+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
dumbells(1,0,0,0);
// move his hand up
movegate(0);
man2front(k+j,-s-i,-(0.5*z),(0.1*z),-(0.5*x),(0.1*x),y+n);

// mov bench dumbells up
benchdumbell(0,0,0,n);
opendoor(0);
glutSwapBuffers();
delay(100);
//glFlush();
}
for(n=0;n<=1.0;n=n+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
dumbells(1,0,0,0);
movegate(0);
man2front(k+j,-s-i,-(0.5*z),(0.1*z),-(0.5*x),(0.1*x),y-n);
//down
benchdumbell(0,0,0,-n);
opendoor(0);
// move bench dumbells
glutSwapBuffers();
delay(100);
//glFlush();
}
count3++;
}while(count3!=5);

for(n=0;n<=0.2;n=n+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
dumbells(1,0,0,0);
movegate(0);
benchdumbell(0,0,0,0);
man2front(k+j,-s-i,-(0.5*z),(0.1*z),-(0.5*x),(0.1*x),y);//dumbell back to its plac
opendoor(0);
glutSwapBuffers();
delay(100);
//glFlush();
}
for(x=0;x<=1.0;x=x+0.08)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);
// keeep the bench
dumbells(1,0,0,0);
movegate(0);
man2front(k+j,-s-i,-(0.5*z),(0.1*z),(0.5*x),-(0.1*x),0);
opendoor(0);
glutSwapBuffers();
delay(100);
//glFlush();
}
for(z=0;z<0.5;z=z+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
movegate(0);
man2front(k+j,-s-i,0,0,0,0,0);
opendoor(0);
glutSwapBuffers();
delay(100);
//glFlush();
}
//stand front face
// get up on wb
for(a=0;a<0.5;a=a+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
movegate(0);
man2back(k+j,-s-i,0,0);
//stand back face
opendoor(0);
glutSwapBuffers();
delay(100);
//glFlush();
}
for(a=0;a<3.8;a=a+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);
//move towards thread mill
dumbells(1,0,0,0);
movegate(0);
man2back(k+j+a,-s-i+a,0,0);
opendoor(0);
glutSwapBuffers();
delay(100);
//glFlush();
}

for(b=0;b<0.5;b=b+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
movegate(0);
man2side(k+j+a,-s-i+a,0,0,0); //stand sideways
man2sidehand(k+j+a,-s-i+a,0,0,0);
opendoor(0);
glutSwapBuffers();
delay(100);
//glFlush();
}
for(b=0;b<0.5;b=b+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
movegate(0);
man2side(k+j+a,-s-i+a+b,0,0,0); //step on thread mill
man2sidehand(k+j+a,-s-i+a+b,0,0,0);
opendoor(0);glutSwapBuffers();
delay(100);
//glFlush();
}

for(c=0;c<=1.2;c=c+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
movegate(0);
man2side(k+j+a-c,-s-i+a+b,0,0,0); //move front
man2sidehand(k+j+a-c,-s-i+a+b,0,0,0);
opendoor(0);
glutSwapBuffers();
delay(100);
//glFlush();
}
for(k1=0;k1<=50;k1++)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
movegate(0);
man2side(k+j+a-c,-s-i+a+b,0,0,k1); //running
man2sidehand(k+j+a-c,-s-i+a+b,0,0,k1);
opendoor(0);
glutSwapBuffers();
delay(200);
//glFlush();
}	
for(e=0;e<=0.5;e=e+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
movegate(0);man2(k+j+a-c,-s-i+a+b,0,0,e*10); //one more side view to come back
straithand(k+j+a-c,-s-i+a+b,0,0,e*10);
opendoor(0);
glutSwapBuffers();
delay(100);
//glFlush();
}
for(e=0;e<=1.2;e=e+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
movegate(0);
man2(k+j+a-c+e,-s-i+a+b,0,0,0); //move front
straithand(k+j+a-c+e,-s-i+a+b,0,0,0);
opendoor(0);
glutSwapBuffers();
delay(100);
//glFlush();
}
for(f=0;f<=0.5;f=f+0.1)
    {
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
movegate(0);
man2(k+j+a-c+e,-s-i+a+b-f,0,0,0); //move front
straithand(k+j+a-c+e,-s-i+a+b-f,0,0,0);
opendoor(0);
glutSwapBuffers();
delay(100);
//glFlush();
}
for(g=0;g<=0.5;g=g+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
movegate(0);
man2front(k+j+a-c+e,-s-i+a+b-f,0,0,0,0,0); //front face
opendoor(0);
glutSwapBuffers();
delay(100);//glFlush();
}
for(g=0;g<=0.5;g=g+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
movegate(0);
man2front(k+j+a-c+e,-s-i+a+b-f-g,0,0,0,0,0); //comes down
opendoor(0);
glutSwapBuffers();
delay(100);
//glFlush();
}
//----------------------------------------------------------------------------------------------------
for(h=0;h<=4.0;h=h+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
movegate(0);opendoor(0);
man2side(k+j+a-c+e-h,-s-i+a+b-f-g,0,0,h*10	); //moves sideways towards door
man2sidehand(k+j+a-c+e-h,-s-i+a+b-f-g,0,0,0);
glutSwapBuffers();
delay(100);
//glFlush();
}

for(o=0;o<=1.0;o=o+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
man2back(k+j+a-c+e-h,-s-i+a+b-f-g+o,0,0);
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
movegate(0);
opendoor(0);
man2back(k+j+a-c+e-h,-s-i+a+b-f-g+o,0,0); //move towards door
glutSwapBuffers();
delay(100);
//glFlush();
}
/*
for(h=4.0;h<=8.0;h=h+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
movegate(0);opendoor(0);
man2side(k+j+a-c+e-h,-s-i+a+b-f-g+h/15,0,0,0	); //moves sideways towards door
man2sidehand(k+j+a-c+e-h,-s-i+a+b-f-g+h/15,0,0,0);
glutSwapBuffers();
delay(100);
//glFlush();
}
mouse_h2(GLUT_LEFT_BUTTON,GLUT_DOWN,300,200);*/

for(q=0;q<=1.0;q=q+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
movegate(0);
opendoor(0);
man2back(k+j+a-c+e-h,-s-i+a+b-f-g+o,(0.25*q),q); //lifts his hand to open the door
glutSwapBuffers();
delay(100);
//glFlush();
}
for(p=0;p<=5.0;p=p+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
man2back(k+j+a-c+e-h,-s-i+a+b-f-g+o,0,0);
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);movegate(0);
opendoor(-p);
man2back(k+j+a-c+e-h,-s-i+a+b-f-g+o,0,0); //dooor opens
glutSwapBuffers();
delay(100);
//glFlush();
}
for(r=0;r<=0.5;r=r+0.1)
{
glClear(GL_COLOR_BUFFER_BIT);
man2back(k+j+a-c+e-h,-s-i+a+b-f-g+o,0,0);
//intro();
intro();
benchdumbell(0,0,0,0);
dumbells(1,0,0,0);
movegate(0);
opendoor(-p);
man2back(k+j+a-c+e-h,-s-i+a+b-f-g+o+r,0,0); //dooor opens
glutSwapBuffers();
delay(100);
//glFlush();
}
mouse_h2(GLUT_LEFT_BUTTON,GLUT_DOWN,300,200);
//glFlush();
glFinish();
glPopMatrix();

glutSwapBuffers();
}


#endif


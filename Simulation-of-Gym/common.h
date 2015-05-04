#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include<GL/glut.h>
#include<string.h>
#include<math.h>
#include<string.h>

void drawString(void *font,char * s,float x,float y)
{
unsigned int i;
glRasterPos2f(x,y);
glPixelZoom(7.0,7.0);
for(i=0; i<strlen(s); i++)
glutBitmapCharacter(font,s[i]);
}

void delay(int x)
{
int p,q;
for(p=0; p<x; p++){
for(q=0; q<500000; q++)
;
}
}
void drawCircle(float xc,float yc,float radius,int angle1,int angle2)
{
int a;
glBegin(GL_POLYGON);
for(a=angle1; a<=angle2; a=a+5)
{
float angle_radians=a*(22/7)/(float)180;
float x=xc+radius*(float)cos(angle_radians);
float y=yc+radius*(float)sin(angle_radians);
glVertex2f(x,y);
}glEnd();
}


//------------------------common for page 3 and page 4------------------------------------------

void dumbells(float x,float y,float i,float j)
{
//float x1=6.2,x2=11.2,y1=3.0,y2=5.0;
//float x=6.2,y=4.0;
glBegin(GL_POLYGON); //dumbells
     glColor3f(0.5,0.5,0.5);
     glVertex2f(x+2.1+i,y+2.0+j);
     glColor3f(1.0,1.0,1.0);
     glVertex2f(x+2.5+i,y+2.5+j);
     glColor3f(0.0,0.0,0.0);
     glVertex2f(x+2.5+i,y+2.4+j);
     glColor3f(1.0,1.0,1.0);
     glVertex2f(x+2.1+i,y+1.9+j);
     glEnd();
    
     glColor3f(0.0,0.00,1.0);
     drawCircle(x+2.1+i,y+1.95+j,0.15,0,360);
     drawCircle(x+2.5+i,y+2.45+j,0.15,0,360);

     glBegin(GL_POLYGON);
     glColor3f(0.5,0.5,0.5);
     glVertex2f(x+2.5,y+1.5);
     glColor3f(1.0,1.0,1.0);
     glVertex2f(x+2.0,y+1.6);
     glColor3f(0.0,0.0,0.0);
     glVertex2f(x+2.0,y+1.7);
     glColor3f(1.0,1.0,1.0);

    glVertex2f(x+2.5,y+1.6);
    glEnd();
   
    glColor3f(0.0,0.0,1.0);
    drawCircle(x+2.5,y+1.55,0.15,0,360);
    drawCircle(x+2.0,y+1.65,0.15,0,360);
}


void bench(float x,float y)
{
glBegin(GL_POLYGON); //weight lifting
glColor3f(1.0,0.0,0.0);
glVertex2f(x+6.5,y+1.5);
glVertex2f(x+7.5,y+1.5);
glColor3f(1.0,0.0,0.0);
glVertex2f(x+7.0,y+3.5);
glColor3f(1.0,0.0,0.0);
glVertex2f(x+6.0,y+3.5);
glEnd();glBegin(GL_POLYGON); //table
glColor3f(0.647059,0.164706,0.164706);
// glColor3f(0.0,0.0,0.0);
glVertex2f(x+7.5,y+1.5);
glVertex2f(x+7.5,y+1.2);
glVertex2f(x+6.5,y+1.2);
glVertex2f(x+6.5,y+1.5);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.647059,0.164706,0.164706);
// glColor3f(0.0,0.0,0.0);
glVertex2f(x+6.5,y+1.5);
glVertex2f(x+6.5,y+1.2);
glVertex2f(x+6.0,y+3.2);
glVertex2f(x+6.0,y+3.5);
glEnd();
glBegin(GL_POLYGON); //front left leg
glColor3f(0.0,0.0,0.0);
glVertex2f(x+6.5,y+1.2);
glVertex2f(x+6.5,y+1.0);
glVertex2f(x+6.7,y+1.0);
glVertex2f(x+6.7,y+1.2);
glEnd();glBegin(GL_POLYGON); //front right leg
glColor3f(0.0,0.0,0.0);
//glColor3f(0.0,0.0,0.0);
glVertex2f(x+7.5,y+1.2);
glVertex2f(x+7.5,y+1.0);
glVertex2f(x+7.3,y+1.0);
glVertex2f(x+7.3,y+1.2);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);//back leg
glVertex2f(x+6.0,y+3.2);
glVertex2f(x+6.0,y+2.9);
//glVertex2f(6.0,2.9);
//glVertex2f(6.5,2.9);
glEnd();
glBegin(GL_POLYGON);//left handle
glColor3f(0.0,0.0,0.0);
glVertex2f(x+6.4-0.31,y+1.9+1.2);
glVertex2f(x+6.45-0.31,y+1.9+1.2);
glVertex2f(x+6.45-0.31,y+2.5+1.2);
glVertex2f(x+6.4-0.31,y+2.5+1.2);
glEnd();/* glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
glVertex2f(*/
glBegin(GL_POLYGON);//right handle
glColor3f(0.0,0.0,0.0);
glVertex2f(x+7.4-0.38,y+1.9+1.2);
glVertex2f(x+7.35-0.38,y+1.9+1.2);
glVertex2f(x+7.35-0.38,y+2.5+1.2);
glVertex2f(x+7.4-0.38,y+2.5+1.2);
glEnd();
//drawString(GLUT_BITMAP_TIMES_ROMAN_24,"U",6.35,2.5);
//drawString(GLUT_BITMAP_TIMES_ROMAN_24,"U",7.30,2.5);
}


//--------------------------punching bag------------------

void punchb(float x,float y)
{
glBegin(GL_POLYGON);//punching bag
glColor3f(1.0,0.0,0.0);
glVertex2f(x+1.6,y+6.95);
//glColor3f(1.0,0.0,0.0);
glVertex2f(x+1.6,y+4.5);
//glColor3f(1.0,0.0,0.0);
glVertex2f(x+1.8,y+4.4);
//glColor3f(1.0,0.0,0.0);
glVertex2f(x+2.0,y+4.5);
glColor3f(0.10,0.0,0.0);
glVertex2f(x+2.0,y+6.95);
glColor3f(1.0,0.0,0.0);
glVertex2f(x+1.8,y+7.20);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2f(x+1.8,y+7.20);
glVertex2f(x+1.8,8.0);
glEnd();
}

//------------------------------------------------------------end-----------------------------------
#endif

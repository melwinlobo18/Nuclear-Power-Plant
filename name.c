#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>

void *font;
void *currentfont;
int fontType,flag=0;
float i,j;
float x2,y2,r,r1=80,r2=5.0,r3=27.5,r4=6,r5=6,x,y,angle,angle_radians,r6=23,r7=2,r8=3,r9=6,r10=18,r11=10,r12=26,r13=14;
int k=0;
int p=0;

void drawstring(float x,float y,float z,char *string)		//To write something on the screen
{
    char *c;
    glRasterPos3f(x,y,z);
    for(c=string; *c!='\0'; c++)
    {
	   glColor3f(0.0,1.0,1.0);
           glutBitmapCharacter(currentfont,*c);
    }
}

void setFont(void *font)		//To set the font of the string
{
    currentfont=font;
}

void delay(int x)		//Delay function
{
    int i,j;
    for(i=0; i<x; i++)
    {
        for(j=0; j<i*1000; j++);
    }
}

void display_about(void)		//Displaying the first page
{
    /*glClearColor(0.0,0.0,0.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(0.0,1.0,1.0);
    drawstring(165.0,275.0,0.0,"CG MINI PROJECT ON");

    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(0.0,1.0,1.0);
    drawstring(130,260,0.0,"WORKING OF NUCLEAR POWER PLANT");

    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(0.0,1.0,1.0);
    drawstring(200,200,0,"BY:");

    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(0.0,1.0,1.0);
    drawstring(130,185,0,"MELWIN LOBO");

    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(0.0,1.0,1.0);
    drawstring(230,185,0,"4SF16CS091");

    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(0.0,1.0,1.0);
    drawstring(230,170,0,"4SF16CS148");

    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(0.0,1.0,1.0);
    drawstring(130,170,0,"SHREYAS BALIGA");

    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(0.0,1.0,1.0);
    drawstring(95,120,0,"SAHYADRI COLLEGE OF ENGINEERING AND MANAGEMENT");

    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(0.0,1.0,1.0);
    drawstring(175,80,0,"PROJECT GUIDE:");

    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(0.0,1.0,1.0);
    drawstring(160,65,0,"Ms. CHAITRA ACHARYA");

    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(0.0,1.0,1.0);
    drawstring(170,50,0,"ASST. PROFESSOR");

    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(1.0,1.0,1.0);
    drawstring(300,15,0.0,"Right Click for Menu");*/

    for(i=0,j=0; i<40,j<40; i=i+1,j=i+1)	//Horizontal flowing of liquid in condensor and pump
    {
        glBegin(GL_QUADS);
        glColor3f(0.0,0.6,0.8);
        glVertex2f(70+i,117);	
        glVertex2f(74+i,117);
        glColor3f(1.0,1.0,1.0);
        glVertex2f(74+i,121);
        glVertex2f(70+i,121);
        glEnd();

        glBegin(GL_QUADS);
        glColor3f(0.0,0.6,0.8);
        glVertex2f(350-j,89);
        glVertex2f(280-j,89);
        glColor3f(1.0,1.0,1.0);
        glVertex2f(280-j,85);
        glVertex2f(350-j,85);
        glEnd();
        glFlush();
        delay(200);
    }

    glFlush();
}

void init(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.7,0.7,0.7,0.0);
    glEnable(GL_DEPTH_TEST);
    gluOrtho2D(0.0,400.0,0.0,300.0);
}

int main(int argc,char** argv)
{
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
    glutInit(&argc,argv);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(1366,768);
    glutCreateWindow("Nuclear Power Plant");

    init();
    glutDisplayFunc(display_about);
    glutMainLoop();
}

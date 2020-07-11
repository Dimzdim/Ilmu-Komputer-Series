#include <gl/freeglut.h>
#include <iostream>
using namespace std;

void titik()
{

int a,b,c,d,e,f;

glClear(GL_COLOR_BUFFER_BIT);
glPointSize(5.5);
glBegin(GL_POINTS);

glColor3f(1.5, 0.5, 0.5);
cin>>a;
cin>>b;
glVertex2f(a,b);

glColor3f(0.0, 1.0, 1.0);
cin>>c;
cin>>d;
glVertex2f(c,d);

glColor3f(0.0, 0.0, 1.0);
cin>>e;
cin>>f;
glVertex2f(e,f);


glEnd();
glFlush();
}


int main(int argc, char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB); 
glutInitWindowSize(600,800); 
glutInitWindowPosition(100,100); 
glutCreateWindow("Project 1 - Membuat Titik"); 
glClearColor(0.0,0.0,0.0,0.0); 
glMatrixMode(GL_PROJECTION);
glOrtho(1.0,1.0,1.0,1.0,-1.0,1.0); 
glutDisplayFunc(titik); 
glutMainLoop();
}

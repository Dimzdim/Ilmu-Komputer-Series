#include<gl/freeglut.h>

GLfloat xRotated, yRotated, zRotated; //deklarasi sumbu rotasi x,y,z

void Display(void) //menampilkan
{
     glClear(GL_COLOR_BUFFER_BIT);
     glLineWidth(5.0f);
     glLoadIdentity(); //definisi objek
     glTranslatef(0.0,0.0,-2.0);//translasi
     glRotatef(xRotated,1.0,0.0,0.0);//menentukan bentuk rotasi
     glRotatef(yRotated,0.0,1.0,0.0);
     glRotatef(zRotated,0.0,0.0,1.0);

    glBegin(GL_QUADS);//membuat lines
    glColor3f(1.0,1.0,1.0);
    // depan
    glVertex3f(0.3, 0.3, 0.6);    glVertex3f(0.3, -0.3, 0.6);
    glVertex3f(0.3, -0.3, 0.6);    glVertex3f(-0.3, -0.3, 0.6);
    glVertex3f(-0.3, -0.3, 0.6);   glVertex3f(-0.3, 0.3, 0.6);
    glVertex3f(-0.3, 0.3, 0.6);    glVertex3f(0.3, 0.3, 0.6);
    //garis tengah belakang atas bawah
    glVertex3f(0.1, 0.3, 0.6);    glVertex3f(0.1, -0.3, 0.6);
    glVertex3f(-0.1, -0.3, 0.6);    glVertex3f(-0.1, 0.3, 0.6);
    //garis tengah belakang kanan kiri 
    glVertex3f(-0.3, -0.1, 0.6);    glVertex3f(0.3, -0.1, 0.6);
    glVertex3f(-0.3, 0.1, 0.6);    glVertex3f(0.3, 0.1, 0.6);   
    glEnd();

    glBegin(GL_QUADS);//membuat lines
     glColor3f(1.0,1.0,0.0);
    // belakang kotak awal
    glVertex3f(0.3, 0.3, 0.0);    glVertex3f(0.3, -0.3, 0.0);
    glVertex3f(0.3, -0.3, 0.0);    glVertex3f(-0.3, -0.3, 0.0);
    glVertex3f(-0.3, -0.3, 0.0);   glVertex3f(-0.3, 0.3, 0.0);
    glVertex3f(-0.3, 0.3, 0.0);    glVertex3f(0.3, 0.3, 0.0); 
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    //garis tengah belakang atas bawah
    glVertex3f(0.1, 0.3, 0.0);    glVertex3f(0.1, -0.3, 0.0);
    glVertex3f(-0.1, -0.3, 0.0);    glVertex3f(-0.1, 0.3, 0.0);
    //garis tengah belakang kanan kiri 
    glVertex3f(-0.3, -0.1, 0.0);    glVertex3f(0.3, -0.1, 0.0);
    glVertex3f(-0.3, 0.1, 0.0);    glVertex3f(0.3, 0.1, 0.0); 
    glEnd();

    glBegin(GL_QUADS);//membuat lines
    glColor3f(0.0f, 1.0f, 0.0f);
    //kiri
    glVertex3f(-0.3, -0.3, 0.0);    glVertex3f(-0.3, -0.3, 0.6);
    glVertex3f(-0.3, 0.3, 0.0);    glVertex3f(-0.3, 0.3, 0.6);
    glVertex3f(-0.3, 0.3, 0.6);    glVertex3f(-0.3, -0.3, 0.6);
    glVertex3f(-0.3, 0.3, 0.0);    glVertex3f(-0.3, -0.3, 0.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-0.3, 0.3, 0.2);    glVertex3f(-0.3, -0.3, 0.2);
    glVertex3f(-0.3, 0.3, 0.4);    glVertex3f(-0.3, -0.3, 0.4);
     // //garis tengah kiri kanan ke kiri
    glVertex3f(-0.3, -0.1, 0.0);    glVertex3f(-0.3, -0.1, 0.6);
    glVertex3f(-0.3, 0.1, 0.0);    glVertex3f(-0.3, 0.1, 0.6);  
    glEnd();

    glBegin(GL_QUADS);//membuat lines
    glColor3f(0.0f, 0.0f, 1.0f);
    // kanan
    glVertex3f(0.3, 0.3, 0.0);    glVertex3f(0.3, 0.3, 0.6);
    glVertex3f(0.3, -0.3, 0.0);    glVertex3f(0.3, -0.3, 0.6);
    glVertex3f(0.3, 0.3, 0.0);    glVertex3f(0.3, -0.3, 0.0);
    glVertex3f(0.3, 0.3, 0.6);    glVertex3f(0.3, -0.3, 0.6);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(0.3, 0.3, 0.2);    glVertex3f(0.3, -0.3, 0.2);
    glVertex3f(0.3, 0.3, 0.4);    glVertex3f(0.3, -0.3, 0.4);
    //garis tengah kanan kanan ke kiri
    glVertex3f(0.3, 0.1, 0.0);    glVertex3f(0.3, 0.1, 0.6);  
    glVertex3f(0.3, -0.1, 0.0);    glVertex3f(0.3, -0.1, 0.6);
    glEnd();
    
    glBegin(GL_QUADS);//membuat lines
    glColor3f(1.0,0.0,0.0);
    //atas kotak
    glVertex3f(-0.3, 0.3, 0.0);    glVertex3f(-0.3, 0.3, 0.6);
    glVertex3f(0.3, 0.3, 0.0);    glVertex3f(0.3, 0.3, 0.6);
    glVertex3f(-0.3, 0.3, 0.6);    glVertex3f(0.3, 0.3, 0.6);
    glVertex3f(-0.3, 0.3, 0.0);    glVertex3f(0.3, 0.3, 0.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    //atas atas bawah
     glVertex3f(-0.1, 0.3, 0.0);    glVertex3f(-0.1, 0.3, 0.6);
     glVertex3f(0.1, 0.3, 0.0);    glVertex3f(0.1, 0.3, 0.6);
     // atas kanan kiri
     glVertex3f(-0.3, 0.3, 0.2);    glVertex3f(0.3, 0.3, 0.2);
     glVertex3f(-0.3, 0.3, 0.4);    glVertex3f(0.3, 0.3, 0.4);
     glEnd();

    glBegin(GL_QUADS);//membuat lines
    glColor3f(1,0.5,0);
    //garis bawah kotak
    glVertex3f(-0.3, -0.3, 0.0);    glVertex3f(-0.3, -0.3, 0.6);
    glVertex3f(-0.3, -0.3, 0.6);    glVertex3f(0.3, -0.3, 0.6);
    glVertex3f(0.3, -0.3, 0.0);    glVertex3f(0.3, -0.3, 0.6);
    glVertex3f(-0.3, -0.3, 0.0);    glVertex3f(0.3, -0.3, 0.0);
    glEnd();

    glBegin(GL_LINES);//membuat lines
    glColor3f(1.0,1.0,1.0);
    // bawah kiri kanan
    glVertex3f(-0.1, -0.3, 0.0);    glVertex3f(-0.1, -0.3, 0.6);
    glVertex3f(0.1, -0.3, 0.0);    glVertex3f(0.1, -0.3, 0.6);  
    // bawah atas bawah
    glVertex3f(-0.3, -0.3, 0.2);    glVertex3f(0.3, -0.3, 0.2);
    glVertex3f(-0.3, -0.3, 0.4);    glVertex3f(0.3, -0.3, 0.4);
    glEnd();

    

     glFlush();
     glutSwapBuffers(); //fungsi perpindahan
     }

void Reshape(int x, int y)//fungsi
     {
         if(y==0||x==0)return;
         glMatrixMode(GL_PROJECTION); //fungsi mode proyeksi
         glLoadIdentity();
         gluPerspective(40.0,(GLdouble)x/(GLdouble)y,0.5,60.0); 	//untuk mengatur perspektif yaitu perubahan atau pergeseran dari proyeksi
         glMatrixMode(GL_MODELVIEW); //mengatur model display objek
         }

void Idle(void)
         {
              xRotated +=0.0;//mengatur kecepatan rotasi bergerak
              yRotated +=0.0;
              zRotated +=0.0;
              Display(); //menampilkan gerakan rotasi
              }

void processKeyboard(unsigned char key, int x, int y) // Receive keyboard inputs
{
        switch (key){
        case 'q':
          xRotated -= 30;
          break;
        case 'a' :
          yRotated -= 30;
          break;
        case 'w' :
          xRotated += 30;
          break;
        case 'z' :
          zRotated -= 30;
          break;
        case 'x' :
          zRotated += 30;
          break;
        case 's' :
          yRotated += 30;
                break;
        default: break;
        }
}
              
int main (int argc, char **argv){
     glutInit(&argc,argv);
     glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
     glutInitWindowSize(830,630);
     glutCreateWindow("Grafkom");
     glClearColor(0.0,0.0,0.0,0.0);
     glutDisplayFunc(Display);
               glutReshapeFunc(Reshape);//memanggil fungsi
               glutIdleFunc(Idle);
               glutKeyboardFunc(processKeyboard);
               glutMainLoop();
               return 0;
               }
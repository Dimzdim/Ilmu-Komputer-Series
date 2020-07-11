#include <gl/freeglut.h>
#include <iostream>
#include <math.h>
#define PI 3.141592653589793238463
using namespace std;

void kotak(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4){
    glLineWidth(3.0);

    glBegin(GL_POLYGON); //membuat bentuk polygon
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(x1, y1);    glVertex2f(x2, y2);
    glVertex2f(x3, y3);    glVertex2f(x4, y4);
    glEnd();
}

void titik(int x1, int y1, int x2, int y2){
    glBegin(GL_LINES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(x1,y1);    glVertex2f(x2,y2);
    glEnd();
}

void Translasi(){
    float x1,y1,x2,y2,x3,y3,x4,y4,sudut;
    float transx,transy;
    cout<<"Masukan X1 : ";     cin>>x1;
    cout<<"Masukan Y1 : ";     cin>>y1;
    cout<<"Masukan X2 : ";     cin>>x2;
    cout<<"Masukan Y2 : ";     cin>>y2;
    cout<<"Masukan X3 : ";     cin>>x3;
    cout<<"Masukan Y3 : ";     cin>>y3;
    cout<<"Masukan X4 : ";     cin>>x4;
    cout<<"Masukan Y4 : ";     cin>>y4;  
    cout<<endl<<endl;
    cout<<"Masukan Translasi X : ";     cin>>transx;  
    cout<<"Masukan Translasi Y : ";     cin>>transy;  
    cout<<endl<<endl;
    cout<<"Output"<<endl;
    cout<<"(X1,Y1)"<<"("<<x1+transx<<" , "<<y1+transy<<")"<<endl;
    cout<<"(X2,Y2)"<<"("<<x2+transx<<" , "<<y2+transy<<")"<<endl;
    cout<<"(X3,Y3)"<<"("<<x3+transx<<" , "<<y3+transy<<")"<<endl;
    cout<<"(X4,Y4)"<<"("<<x4+transx<<" , "<<y4+transy<<")"<<endl;

    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    kotak(x1,y1,x2,y2,x3,y3,x4,y4);
    glTranslatef(transx, transy, 0.0); // aktifkan translasi
    kotak(x1,y1,x2,y2,x3,y3,x4,y4);
    glPopMatrix();
    glFlush();
}

void Skala(){
    int x1,y1,x2,y2,x3,y3,x4,y4,sudut;
    int scala_x, scala_y;
    cout<<"Masukan X1 : ";     cin>>x1;
    cout<<"Masukan Y1 : ";     cin>>y1;
    cout<<"Masukan X2 : ";     cin>>x2;
    cout<<"Masukan Y2 : ";     cin>>y2;
    cout<<"Masukan X3 : ";     cin>>x3;
    cout<<"Masukan Y3 : ";     cin>>y3;
    cout<<"Masukan X4 : ";     cin>>x4;
    cout<<"Masukan Y4 : ";     cin>>y4;  
    cout<<endl<<endl;
    cout<<"Masukan Scala X : ";     cin>>scala_x;  
    cout<<"Masukan Scala Y : ";     cin>>scala_y;  
    cout<<endl<<endl;
    cout<<"Output"<<endl;
    cout<<"(X1,Y1)"<<"("<<x1*scala_x<<" , "<<y1*scala_y<<")"<<endl;
    cout<<"(X2,Y2)"<<"("<<x2*scala_x<<" , "<<y2*scala_y<<")"<<endl;
    cout<<"(X3,Y3)"<<"("<<x3*scala_x<<" , "<<y3*scala_y<<")"<<endl;
    cout<<"(X4,Y4)"<<"("<<x4*scala_x<<" , "<<y4*scala_y<<")"<<endl;

    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    kotak(x1,y1,x2,y2,x3,y3,x4,y4);
    glScalef(scala_x, scala_y, 0.0); // aktifkan skala 
    glColor3f(0.0, 1.0, 0.0);
    kotak(x1,y1,x2,y2,x3,y3,x4,y4);
    glPopMatrix();
    glFlush();
}

void Rotasi(){
    float x1,y1,x2,y2,x3,y3,x4,y4,sudut;
    cout<<"Masukan X1 : ";     cin>>x1;
    cout<<"Masukan Y1 : ";     cin>>y1;
    cout<<"Masukan X2 : ";     cin>>x2;
    cout<<"Masukan Y2 : ";     cin>>y2;
    cout<<"Masukan X3 : ";     cin>>x3;
    cout<<"Masukan Y3 : ";     cin>>y3;
    cout<<"Masukan X4 : ";     cin>>x4;
    cout<<"Masukan Y4 : ";     cin>>y4;    
    cout<<endl<<endl;
    cout<<"Masukan Sudut : ";
    cin>>sudut;
    cout<<endl<<endl;
    cout<<"Output"<<endl;
    cout<<"Cos : "<<cos(sudut*(PI / 180.0))<<endl;
    cout<<"Sin : "<<sin(sudut*(PI / 180.0))<<endl;
    cout<<"(X1,Y1)"<<"("<<((x1*cos(sudut*(PI / 180.0)))-(y1*sin(sudut*(PI / 180.0))))<<" , "<<((x1*sin(sudut*(PI / 180.0)))+(y1*cos(sudut*(PI / 180.0))))<<")"<<endl;
    cout<<"(X2,Y2)"<<"("<<((x2*cos(sudut*(PI / 180.0)))-(y2*sin(sudut*(PI / 180.0))))<<" , "<<((x2*sin(sudut*(PI / 180.0)))+(y2*cos(sudut*(PI / 180.0))))<<")"<<endl;
    cout<<"(X3,Y3)"<<"("<<((x3*cos(sudut*(PI / 180.0)))-(y3*sin(sudut*(PI / 180.0))))<<" , "<<((x3*sin(sudut*(PI / 180.0)))+(y3*cos(sudut*(PI / 180.0))))<<")"<<endl;
    cout<<"(X4,Y4)"<<"("<<((x4*cos(sudut*(PI / 180.0)))-(y4*sin(sudut*(PI / 180.0))))<<" , "<<((x4*sin(sudut*(PI / 180.0)))+(y4*cos(sudut*(PI / 180.0))))<<")"<<endl;
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    kotak(x1,y1,x2,y2,x3,y3,x4,y4);
    glRotatef(sudut, 0, 0, 1); // aktifkan rotasi
    kotak(x1,y1,x2,y2,x3,y3,x4,y4);
    glPopMatrix();
    glFlush();
}

void Homogeneous(){
    double Tx,Ty,Sx,Sy,Sudut;
    cout<<"Masukan TraX :";	cin>>Tx;
    cout<<"Masukan TraY :"; cin>>Ty;
    cout<<"Masukan Sx :";	cin>>Sx;
    cout<<"Masukan Sy :";   cin>>Sy;
    cout<<"Masukan Sudut : "; cin>>Sudut;

    double a[3][3] = {1,0,0,0,1,0,Tx,Ty,1};
    double b[3][1];
    double c[3][1];                      
    double d[3][3] = {Sx,0,0,0,Sy,0,0,0,1};
    double e[3][1];
    double f[3][3] = {cos(Sudut*(PI / 180.0)),-sin(Sudut*(PI / 180.0)),0,sin(Sudut*(PI / 180.0)),cos(Sudut*(PI / 180.0)),0,0,0,1};
	double g[3][1];


	cout<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<1; j++){
			cout<<"Masukan Elemen X,Y,Z : ";
			cin>>b[i][j];
		}
	}
	cout<<endl<<endl;
	cout<<"-  M Translasi -\n";
	cout<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	} 
    cout<<endl<<endl;
	cout<<"-  M Skala -\n";
	cout<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<d[i][j]<<"  ";
		}
		cout<<endl;
	} 
    cout<<endl<<endl;
	cout<<"-  M Rotasi -\n";
	cout<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<f[i][j]<<"  ";
		}
		cout<<endl;
	} 
	cout<<endl<<endl;
	cout<<"-  X , Y , Z  -\n";
	cout<<endl;
	for(int i=0; i<1; i++){
		for(int j=0; j<3; j++){
			cout<<b[i][j]<<"  ";
		}
		cout<<endl;
	}
	/* operasi perkalian */
	cout<<endl;
	for(int i=0; i<1; i++){
		for(int j=0; j<3; j++){
			c[i][j]=0;
			for(int k=0; k<3; k++){
				c[i][j]+=b[i][k]*a[k][j];
			}
		}
	}

    	for(int i=0; i<1; i++){
		for(int j=0; j<3; j++){
			e[i][j]=0;
			for(int k=0; k<3; k++){
				e[i][j]+=b[i][k]*d[k][j];
			}
		}
	}

    	for(int i=0; i<1; i++){
		for(int j=0; j<3; j++){
			g[i][j]=0;
			for(int k=0; k<3; k++){
				g[i][j]+=b[i][k]*f[k][j];
			}
		}
	}

	cout<<endl<<endl;
	cout<<"-  Hasil Perkalian Translasi -\n";
	cout<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<1; j++){
			cout<<c[i][j]<<"   ";
		}
		cout<<endl;
	}

    cout<<endl<<endl;
	cout<<"-  Hasil Perkalian Skala -\n";
	cout<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<1; j++){
			cout<<e[i][j]<<"   ";
		}
		cout<<endl;
	}

    cout<<endl<<endl;
	cout<<"-  Hasil Perkalian Rotasi -\n";
	cout<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<1; j++){
			cout<<g[i][j]<<"   ";
		}
		cout<<endl;
	}

    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    titik(b[0][0],b[1][0],c[0][0],c[1][0]);
    titik(b[0][0],b[1][0],e[0][0],e[1][0]);
    titik(b[0][0],b[1][0],g[0][0],g[1][0]);
    glFlush();


           
}

void garis(){
    cout<<"====================================="<<endl;
}

int main(int argc, char **argv)
{   menu :
    int menu;
    // Inisialisasi GLUT
    glutInit(&argc, argv);
    

    glutInitDisplayMode(GLUT_SINGLE | GLUT_DEPTH | GLUT_RGBA);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Kelompok AB - 198 202 211 230");
    gluOrtho2D(-100, 100, -100., 100);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    
    cout<<"Kelompok GH"<<endl;
    cout<<"1. Translasi"<<endl;
    cout<<"2. Skala"<<endl;
    cout<<"3. Rotasi"<<endl;
    cout<<"4. Transformasi Homogeneous"<<endl;
    
    cout<<"Masukan Menu : ";    cin>>menu;
    switch (menu){
        case 1:
            garis();
            cout<<"Translasi"<<endl;
            garis();
            glutDisplayFunc(Translasi);
            break;
        case 2:
            garis();
            cout<<"SKALA"<<endl;
            garis();
            glutDisplayFunc(Skala);
            break;
        case 3:
            garis();
            cout<<"ROTASI"<<endl;
            garis();
            glutDisplayFunc(Rotasi);
            break;
        case 4:
            garis();
            cout<<"Transformasi Homogeneous"<<endl;
            garis();
            glutDisplayFunc(Homogeneous);
            break;
        default:
            break;
        }
    glutMainLoop();
    return 0;
}
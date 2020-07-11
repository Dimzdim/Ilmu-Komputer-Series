#include <iostream>
#include <conio.h>
using namespace std;

double xmin,ymin,xmax,ymax,x1,y1,x2,y2;

void AlgoritmaCohen(){
    
    double L1,R1,B1,T1;
    double L2,R2,B2,T2;
    double M;

    double yp1,yp2, xp1, xp2;

    cout<<"Masukan Xmin : "; cin>>xmin;
    cout<<"Masukan Ymin : "; cin>>ymin;
    cout<<"Masukan Xmax : "; cin>>xmax;
    cout<<"Masukan Ymax : "; cin>>ymax;

    cout<<endl<<endl;

    cout<<"Masukan X1 : "; cin>>x1;
    cout<<"Masukan Y1 : "; cin>>y1;
    cout<<"Masukan X2 : "; cin>>x2;
    cout<<"Masukan Y2 : "; cin>>y2;
    
    cout<<endl<<endl;
    cout<<"Region Area " << x1 <<" Dengan " << y1 << " = "<<endl;
    if (x1 < xmin){
        L1 = 1;
        cout <<" "<<x1 << " < " << xmin << " - ";
    } else if ( x1 >= xmin ){
        L1 = 0;
        cout <<" "<<x1 << " >= " << xmin << " - ";
    }
    cout<<"L1 = "<<L1<<endl;

    if (x1 > xmax){
        R1 = 1;
        cout <<" "<<x1 <<  " > " << xmax << " - ";
    } else if ( x1 <= xmax ){
        R1 = 0;
        cout <<" "<<x1 << " <= " << xmax << " - ";
    }
    cout<<"R1 = "<<R1<<endl;

    if (y1 < ymin){
        B1 = 1;
        cout <<" "<<y1 << " < " << ymin << " - ";
    } else if ( y1 >= ymin ){
        B1 = 0;
        cout <<" "<<y1 << " >= " << ymin << " - ";
    }
    cout<<"B1 = "<<B1<<endl;

    if (y1 > ymax){
        T1 = 1;
        cout <<" "<<y1 <<  " > " << ymax << " - ";
    } else if ( y1 <= ymax ){
        T1 = 0;
        cout <<" "<<y1 <<  " <= " << ymax << " - ";
    }
    cout<<"T1 = "<<T1<<endl;

    cout<<endl<<endl;
    cout<<"Region Area " << x2 <<" Dengan " << y2 << " = "<<endl;

    if (x2 < xmin){
        L2 = 1;
        cout <<" "<<x2 << " < " << xmin << " - ";
    } else if ( x2 >= xmin ){
        L2 = 0;
        cout <<" "<<x2 << " >= " << xmin << " - ";
    }
    cout<<"L2 = "<<L2<<endl;

    if (x2 > xmax){
        R2 = 1;
        cout <<" "<<x2 <<  " > " << xmax << " - ";
    } else if ( x2 <= xmax ){
        R2 = 0;
        cout <<" "<<x2 << " <= " << xmax << " - ";
    }
    cout<<"R2 = "<<R2<<endl;

    if (y2 < ymin){
        B2 = 1;
        cout <<" "<<y2 << " < " << ymin << " - ";
    } else if ( y2 >= ymin ){
        B2 = 0;
        cout <<" "<<y2 << " >= " << ymin << " - ";
    }
    cout<<"B1 = "<<B2<<endl;

    if (y2 > ymax){
        T2 = 1;
        cout <<" "<<y2 <<  " > " << ymax << " - ";
    } else if ( y2 <= ymax ){
        T2 = 0;
        cout <<" "<<y2 <<  " <= " << ymax << " - ";
    }
    cout<<"T1 = "<<T2<<endl;
   

    M = (( y2 - y1 ) / (x2 - x1));
    cout<<endl<<"M = ("<<y2<<"-"<<y1<<") / ("<<x2<<"-"<<x1<<")"<<endl;
    cout<<"M = "<<M<<endl<<endl;

    cout<<"Region Area " << x1 <<" Dengan " << y1 << " = "<<endl;

    if (L1 == 1){
        cout<<"Berpotongan dengan Xmin - ";
        yp1 = (y1 + (M*(xmin-x1)));
        cout<<"L = "<<yp1<<endl;
        cout<<"Titik Potong ("<<xmin <<","<<yp1<<") "<<endl;
    }
    if (R1 == 1){
        cout<<"Berpotongan dengan Xmax - ";
        yp2 = (y1 + (M*(xmax-x1)));
        cout<<"R = "<<yp2<<endl;
        cout<<"Titik Potong ("<<xmax <<","<<yp2<<") "<<endl;
    }
    if (B1 == 1){
        cout<<"Berpotongan dengan ymin - ";
        xp1 = (x1 + ((ymin-y1)/M));
        cout<<"B = "<<xp1<<endl;
        cout<<"Titik Potong ("<<xp1 <<","<<ymin<<") "<<endl;
    }
    if (T1 == 1){
        cout<<"Berpotongan dengan ymin - ";
        xp2 = (x1 + ((ymax-y1)/M));
        cout<<"T = "<<xp2<<endl;
        cout<<"Titik Potong ("<<xp2 <<","<<ymax<<") "<<endl;
    }
   
   cout<<endl<<endl;

    cout<<"Region Area " << x2 <<" Dengan " << y2 << " = "<<endl;

    if (L2 == 1){
        cout<<"Berpotongan dengan Xmin - ";
        yp1 = (y2 + (M*(xmin-x2)));
        cout<<"L = "<<yp1<<endl;
        cout<<"Titik Potong ("<<xmin <<","<<yp1<<") "<<endl;
    }
    if (R2 == 1){
        cout<<"Berpotongan dengan Xmax - ";
        yp2 = (y2 + (M*(xmax-x2)));
        cout<<"R = "<<yp2<<endl;
        cout<<"Titik Potong ("<<xmax <<","<<yp2<<") "<<endl;
    }
    if (B2 == 1){
        cout<<"Berpotongan dengan ymin - ";
        xp1 = (x2 + ((ymin-y2)/M));
        cout<<"B = "<<xp1<<endl;
        cout<<"Titik Potong ("<<xp1 <<","<<ymin<<") "<<endl;
    }
    if (T2 == 1){
        cout<<"Berpotongan dengan ymin - ";
        xp2 = (x2 + ((ymax-y2)/M));
        cout<<"T = "<<xp2<<endl;
        cout<<"Titik Potong ("<<xp2 <<","<<ymax<<") "<<endl;
    }
   
}

void Translasi(){
    double trx, tryy;

    cout<<"X : "; cin>>x1;
    cout<<"Y : "; cin>>y1;
    cout<<"TrX : "; cin>>trx;
    cout<<"TrY : "; cin>>tryy;

    cout<<"(QX,QY)"<<"("<<x1+trx<<" , "<<y1+tryy<<")"<<endl;
}

int main(){ 
    int menu;

    cout<<"Menu"<<endl;
    cout<<"1. Algoritma Cohen"<<endl;
    cout<<"2. Translasi - Transformasi Menghasilkan Lokasi Baru"<<endl;

    
    cout<<endl<<"Silahkan Pilih Menu : ";    cin>>menu;

    switch (menu)
    {
    case 1:
        AlgoritmaCohen();
        break;

    case 2:
        Translasi();
        break;
    
    default:
        break;
    }
    
    getch();

}
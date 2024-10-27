#include <iostream>
#include <cmath>
//ciao mondi
//ciao mieni
using namespace std;

double distanza (double X1 , double Y1, double X2, double Y2){
    double d = sqrt ((X1-X2)*(X1-X2)+(Y1-Y2)*(Y1-Y2));
    return d;

}


int main (void){
    
    double X1,X2,Y1,Y2,X3,Y3;
    
    cout<<"Coordinata primo punto asse x : "; cin>>X1;
    cout<<"Coordinata primo punto asse y : "; cin>>Y1;
    cout<<"Coordinata secondo punto asse x : "; cin>>X2;
    cout<<"Coordinata secondo punto asse x : "; cin>>Y2;

    double distanza_punti = distanza(X1,X2,Y1,Y2);

    cout<<"La distanza fra i due punti è:"<<distanza_punti<<endl;

    return 1;
}
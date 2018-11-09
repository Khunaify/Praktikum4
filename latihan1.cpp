#include<iostream>
using namespace std;
int main ()
{
    cout<< "Khunaify Syarief"<<endl;
    cout<< " 311610788 (TI.16.A2) " <<endl;
    cout<< "*##############################################################*"<<endl;
    cout<< "*Algoritma Mencari Nilai Terbesar Dari Bilangan Yang Diinputkan*"<<endl;
    cout<< "*##############################################################*"<<endl;
    int max,A;
    max=0;

    do{
        cout<< "masukin nilai yang ingin di masukan :"; cin >> A;
        if (max<A)
            max=A;
    }
    while (A!=0);
    cout<< "hasilnya = " <<max<< endl;
    return 0;
    cout<< "Terima Kasih"<<endl;
}

#include <iostream>
#include <string>

using namespace std;

int tambah (int a, int b){
    int hasil = a*a+b;
    return hasil;
}

void cetakAwal(int a, int b){
    cout << a << " * " << a << " + " << b << " = ";
}

int main (){
    int nilai=0;
    nilai=tambah(10,3);
    cetakAwal(10,3);
    cout << nilai << endl;


    return 0;
}

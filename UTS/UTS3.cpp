#include <iostream>

using namespace std;

int main (){
    int jumlahhari=0;
    int hari=0;
    int harike1=5000;
    int total=0;

    cout << "Input hari = ";
    cin >> jumlahhari;

    for (int hari=1; hari<=jumlahhari; hari++){
        total=total+harike1;
        cout << "Hari ke " << hari << endl;
        cout << "Tabungan = " << harike1 << endl;
        harike1=harike1+2000;
    }

    cout <<"Total tabungan : " << total;

    return 0;
}

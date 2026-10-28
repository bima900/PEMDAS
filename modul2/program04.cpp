#include <iostream>

using namespace std;

int main() {
int pilihan;
cout << "Pilih menu (1-3): ";
cin >> pilihan;
switch (pilihan) {
case 1:
cout << "Nasi Goreng - Rp15000" << endl;
break;
case 2:
cout << "Mie Ayam - Rp13000" << endl;
break;
case 3:
cout << "Soto Ayam - Rp12000" << endl;
break;
default:
cout << "Menu tidak tersedia" << endl;
}
return 0;
}

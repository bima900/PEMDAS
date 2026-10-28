#include <iostream>
using namespace std;
int main() {
int angka;
cout << "Masukkan angka: ";
cin >> angka;
if (angka % 2 == 0) {
cout << angka << " adalah genap" << endl;
} else {
cout << angka << " adalah ganjil" << endl;
}
return 0;
}

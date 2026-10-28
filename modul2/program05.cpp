#include <iostream>
using namespace std;
int main() {
double durasiJam;
cout << "Masukkan durasi parkir (jam): ";
cin >> durasiJam;
double tarif;
if (durasiJam <= 1) {
tarif = 3000;
} else {
tarif = 3000 + (durasiJam - 1) * 1000;
}
cout << "Tarif parkir: Rp" << tarif << endl;
return 0;
}

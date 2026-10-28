#include <iostream>
using namespace std;
int main() {
int n;
int suhu[30];
cout << "Jumlah hari: ";
cin >> n;
for (int i = 0; i < n; i++) {
cout << "Suhu hari ke-" << i + 1 << ": ";
cin >> suhu[i];
}
int tertinggi = suhu[0];
int terendah = suhu[0];
for (int i = 0; i < n; i++) {
if (suhu[i] > tertinggi) {
tertinggi = suhu[i];
}
if (suhu[i] < terendah) {
terendah = suhu[i];
}
}
cout << "Suhu tertinggi: " << tertinggi << endl;
cout << "Suhu terendah : " << terendah << endl;
return 0;
}

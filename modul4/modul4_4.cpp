#include <iostream>
using namespace std;
int main() {
int tabel[3][4];
for (int baris = 0; baris < 3; baris++) {
for (int kolom = 0; kolom < 4; kolom++) {
tabel[baris][kolom] = (baris + 1) * (kolom + 1);
}
}
for (int baris = 0; baris < 3; baris++) {
    for (int kolom = 0; kolom < 4; kolom++) {
        cout << tabel[baris][kolom] << "\t";
    }
    cout << endl;
}
return 0;
}

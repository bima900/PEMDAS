#include <iostream>
using namespace std;

void ucapanPagi();
void sapa(string nama);

int main() {
    string nama;
    cout << "Masukkan nama Anda: ";
    getline(cin, nama);
    ucapanPagi();
    sapa();
    return 0;
}
void ucapanPagi() {
    cout << "Selamat pagi!" << endl;
}
void sapa(string nama) {
    cout << "Halo, " << nama << ". Selamat datang di praktikum Pemrograman Dasar." << endl;
}

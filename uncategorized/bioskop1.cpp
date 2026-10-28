#include <iostream>
using namespace std;

int main() {
    int b = 5;
    int k = 10;
    int kursi[5][10] = {0};
    char ulang;
    do {
        cout << "\n=== PETA KURSI BIOSKOP ===" << endl;
        cout << "    ";
        for (int j = 0; j < k; j++) {
            cout << j << " ";
        }
        cout << "\n-----------------------\n";
        for (int i = 0; i < b; i++) {
            cout << i << " | ";
            for (int j = 0; j < k; j++) {
                cout << kursi[i][j] << " ";
            }
            cout << endl;
        }
        int baris, kolom;
        cout << "\nMasukkan baris (0-4): ";
        cin >> baris;
        cout << "Masukkan kolom (0-9): ";
        cin >> kolom;
        if (baris < 0 || baris >= b || kolom < 0 || kolom >= k) {
            cout << "Posisi kursi tidak valid!" << endl;
        }
        else if (kursi[baris][kolom] == 0) {
            kursi[baris][kolom] = 1;
            cout << "Pemesanan berhasil! Kursi [" << baris << "][" << kolom << "] telah dipesan." << endl;
        }
        else {
            cout << "Kursi sudah dipesan! Silakan pilih kursi lain." << endl;
        }
        cout << "\n=== PETA KURSI REVISI ===" << endl;
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < k; j++) {
                cout << kursi[i][j] << " ";
            }
            cout << endl;
        }
        cout << "\nIngin memesan kursi lagi? (y/n): ";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');
    cout << "\nTerima kasih telah menggunakan sistem pemesanan bioskop!" << endl;
    return 0;
}

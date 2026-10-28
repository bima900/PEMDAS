#include <iostream>
using namespace std;
int main() {
    double nilai;
    double total = 0;
    int jumlahData = 0;
    cout << "Masukkan nilai (ketik -1 untuk berhenti): ";
    cin >> nilai;
    while (nilai != -1) {
        total += nilai;
        jumlahData++;
        cout << "Masukkan nilai (ketik -1 untuk berhenti): ";
        cin >> nilai;
    }
    cout << "Total : " << total << endl;
    cout << "Rata-rata: " << total / jumlahData << endl;
    return 0;
}

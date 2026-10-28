#include <iostream>
using namespace std;
int skor = 0;
void tambahSkor(int poin) {
    int skor = 0;
    skor += poin;
    cout << "Skor setelah ditambah " << poin << " : " << skor << endl;
}
int main() {
    tambahSkor(10);
    tambahSkor(25);
    tambahSkor(5);
    cout << "Skor akhir : " << skor << endl;
    return 0;
}

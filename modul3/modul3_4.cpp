#include <iostream>
using namespace std;
int main() {
    int n = 7;
    for (int baris = 1; baris <= n; baris++) {
        for (int kolom = 0; kolom < baris; kolom++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

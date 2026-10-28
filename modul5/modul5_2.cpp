#include <iostream>
using namespace std;
int faktorial(int n) {
    int hasil = 1;
    for (int i = 2; i <= n; i++) {
        hasil *= i;
    }
    return hasil;
}
int main() {
    int angka[] = {5, 10, 12, 13, 15};
    for (int i = 0; i < 5; i++) {
        cout << angka[i] << "! = " << faktorial(angka[i]) << endl;
    }
    return 0;
}

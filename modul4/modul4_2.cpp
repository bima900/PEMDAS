#include <iostream>
using namespace std;
int main() {
    int data[] = {11, 3, 4, 7, 24, 30, 5};
    int panjang = sizeof(data) / sizeof(data[0]);
    cout << panjang << endl;
    cout << "Sebelum: ";
    for (int i = 0; i < panjang; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < panjang; i++) {
        data[i] = data[i] * 2;
    }
    cout << "Sesudah: ";
    for (int i = 0; i < panjang; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    return 0;
}

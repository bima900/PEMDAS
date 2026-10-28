#include <iostream>
using namespace std;
int jumlahkan(int arr[]) {
    int panjang = sizeof(arr) / sizeof(arr[0]);
    int total = 0;
    for (int i = 0; i < panjang; i++) {
        total += arr[i];
    }
    return total;
}
int main() {
    int nilai[] = {10, 20, 30, 40, 50};
    cout << "Panjang di main : " << sizeof(nilai) / sizeof(nilai[0]) << endl;
    cout << "Total : " << jumlahkan(nilai) << endl;
    return 0;
}

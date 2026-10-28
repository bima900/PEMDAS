#include <iostream>
using namespace std;
int main() {
    int data[6] = {29, 4, 17, 8, 42, 15};
    int n = 6;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                int sementara = data[j];
                data[j] = data[j + 1];
                data[j + 1] = sementara;
            }
        }
    }
    cout << "Hasil urut: ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    cout << "Alamat data : " << data << endl;
    cout << "Alamat data[0] : " << &data[0] << endl;
    return 0;
}

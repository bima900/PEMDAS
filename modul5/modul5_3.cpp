#include <iostream>
using namespace std;
void tukar(int a, int b) {
    int sementara = a;
    a = b;
    b = sementara;
    cout << "Di dalam tukar : a = " << a << ", b = " << b << endl;
}
int main() {
    int x = 3, y = 8;
    cout << "Sebelum tukar : x = " << x << ", y = " << y << endl;
    tukar(x, y);
    cout << "Sesudah tukar : x = " << x << ", y = " << y << endl;
    return 0;
}

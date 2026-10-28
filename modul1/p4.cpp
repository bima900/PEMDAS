#include <iostream>
using namespace std;
int main() {
int a = -5, b = 3;
cout << "a + b * 2 = " << a + b * 2 << endl;
cout << "(a + b) * 2 = " << (a + b) * 2 << endl;
cout << "a / b = " << a / b << endl;
cout << "a % b = " << a % b << endl;
cout << "a / (double)b = " << a / (double) b << endl;
int x = 5;
cout << "\nx++ = " << x++ << endl;
cout << "x = " << x << endl;
cout << "++x = " << ++x << endl;
cout << boolalpha;
cout << "\na > b = " << (a > b) << endl;
cout << "a == b = " << (a == b) << endl;
cout << "(a > 0) && (b>0) = " << ((a > 0) && (b > 0)) << endl;
cout << "(a < 0) || (b>0) = " << ((a < 0) || (b > 0)) << endl;
return 0;
}

#include <iostream>
using namespace std;
int main() {
bool stokAda = true;
bool hargaSesuai = true;
bool tidakBisaBeli1 = !(stokAda && hargaSesuai);
bool tidakBisaBeli2 = (!stokAda || !hargaSesuai);
cout << boolalpha;
cout << "Cara 1 (langsung negasi) : " << tidakBisaBeli1 << endl;
cout << "Cara 2 (hukum De Morgan) : " << tidakBisaBeli2 << endl;
return 0;
}

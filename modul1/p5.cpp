#include <iostream>
#include <string>
using namespace std;
int main() {
string nama = "Bima Tata Pradita";
int sks;
double biayaPerSks;
cout << "Nama mahasiswa : ";
std::getline(cin,nama);
cout << "Jumlah SKS : ";
cin >> sks;
cout << "Biaya per SKS : ";
cin >> biayaPerSks;
double total = sks * biayaPerSks;
cout << "\n----- RINCIAN BIAYA -----" << endl;
cout << "Nama : " << nama << endl;
cout << "Jumlah SKS : " << sks << endl;
cout << "Biaya per SKS : Rp" << biayaPerSks << endl;
cout << "Total : Rp" << total << endl;
return 0;
}

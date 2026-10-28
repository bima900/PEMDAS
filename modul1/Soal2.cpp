#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int detik;
    cout << "Masukkan detik: ";
    cin >> detik;
    int jam = detik/3600;
    int menit = (detik%3600)/60;
    int detik2 = detik%60;

    cout << "\n----- RINCIAN -----" << endl;
    cout << "Durasi = " << jam << " Jam " << menit << " Menit " << detik2 << " Detik" << endl;
    cout << "Format = " << setfill ('0') << setw(2) << jam << " : " << setw(2) << menit << " : " << setw(2) << detik2 << endl;
    return 0;
}

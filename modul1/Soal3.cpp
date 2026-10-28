#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    double const pi = 3.14159265;
    float jarijari;
    float tinggi;
    cout << "Masukkan Jari-jari: ";
    cin >> jarijari;
    cout << "Masukkan Tinggi: ";
    cin >> tinggi;
    float volume = pi*jarijari*jarijari*tinggi;
    float volumeliter = volume/1000;
    float luaspermukaan = 2*pi*jarijari*(jarijari + tinggi);

    cout << fixed << setprecision(3);
    cout << "\n----- HASIL -----" << endl;
    cout << "Volume = " << volume << " cm3" << endl;
    cout << "Volume = " << volumeliter << " liter" << endl;
    cout << "Luas Permukaan = " << luaspermukaan << " cm2" << endl;

    return 0;
}

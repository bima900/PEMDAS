#include <iostream>

using namespace std;

int main () {
    int umur;
    cout << "Masukkan umur: ";
    cin >> umur;
    int hargatiket;
    cout <<"Masukkan harga tiket: Rp. ";
    cin >> hargatiket;
    cout << "Member (0 tidak, 1 ya): ";
    bool member=false;
    cin >> member;
    double diskon;
    if (umur <=2){
        diskon=1.0;
    }
    else if (umur <=5){
        diskon=0.8;
    }
    else {
        if (member=true){
            diskon=0.2;
        }
        else {
            diskon=0;
        }
    }
    hargatiket = hargatiket - (hargatiket*diskon);
    cout << "Bayar = Rp. " << hargatiket << endl;
    return 0;
}

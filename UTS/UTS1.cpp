#include <iostream>
#include <string>

using namespace std;

int main (){
    int usia=0;
    float diskon=0;
    int tiket=50000;
    double total;
    double total1;
    bool harilibur;
    string kategoriusia;
    string namapengunjung;

    cout << "Masukkan nama: ";
    cin >> namapengunjung;
    cout << "Masukkan usia: ";
    cin >> usia;
    cout <<"Apakah hari libur? (1=ya, 0=tidak) " << endl;
    cin >> harilibur;

    if (usia<0){
        cout <<"Error, usia salah";
        return 0;
    } else {
        if (usia<12){
            kategoriusia="Anak-anak";
            diskon=0.5;
            total= (double) tiket-(tiket*diskon);
            cout << "Nama pengunjung: " << namapengunjung << endl;
            cout << "Mendapat diskon: " << kategoriusia << "Sebesar 50%" << endl;
        } else if (usia<60){
            diskon=0;
            total=tiket;
            cout << "Nama pengunjung: " << namapengunjung << endl;
        } else {
            kategoriusia="Lansia";
            diskon=0.3;
            total= (double) tiket-(tiket*diskon);
            cout << "Nama pengunjung: " << namapengunjung << endl;
            cout << "Mendapat diskon " << kategoriusia << "Sebesar 30%" <<endl;
        }
    }

    cout << "Total setelah diskon: " << total << endl;

    if (harilibur=true){
        total1=total+(total*0.1);
        cout << "Mendapat tambahan biaya 10%" << endl;
    } else {
        total1=total;
    }

    cout << "Total: " << total1;
    return 0;
}

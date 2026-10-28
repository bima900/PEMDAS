#include <iostream>

using namespace std;

int main (){
    int jenisv;
    int trfmotor=2000;
    int trfmobil=5000;
    int perjamtrfmotor = 1000;
    int perjamtrfmobil = 2000;
    int lamaparkir;
    int denda = 50000;
    int trfmotortotal;
    int trfmobiltotal = trfmobil + perjamtrfmobil * (lamaparkir-1);
    int member = 2000;
    bool diskon;
    bool repeat=true;

    cout << "Brawijaya Smart Parking" << endl;
    cout << "Jenis Kendaraan (1= motor) (2= mobil) : ";
    cin >> jenisv;
    switch (jenisv){
        case 1:
            cout << "Motor mendapat tarif : Rp. " << trfmotor << endl;
            cout << "Lama parkir? (jam)" << endl;
            cin >> lamaparkir;
            if (lamaparkir>24){
                cout << "Dapat denda = Rp. " << denda <<endl;
                trfmotortotal = trfmotor + perjamtrfmotor * (lamaparkir-1) + denda;
                cout << "Total = Rp. " << trfmotortotal << endl;
                cout << "Member? (1=ya)(0=tidak): Rp. ";
                cin >> diskon;
                if (diskon=true) {
                    cout << "Dapat diskon = Rp. " << member <<endl;
                    cout << "Total Parkir = Rp. " << trfmotortotal-member;
                    }
                    else {
                    cout << "Total Parkir = Rp. " << trfmotortotal;
                }
            } else {
                trfmotortotal = trfmotor + perjamtrfmotor * (lamaparkir-1);
                cout << "Total = Rp. " << trfmotortotal << endl;
                cout << "Member? (1=ya)(0=tidak): Rp. ";
                cin >> diskon;
                if (diskon=true) {
                    cout << "Dapat diskon = Rp. " << member <<endl;
                    cout << "Total Parkir = Rp. " << trfmotortotal-member;
                    }
                    else {
                    cout << "Total Parkir = Rp. " << trfmotortotal;
                }

            }
            break;
        case 2:
            cout << "Mobil mendapat tarif : " << trfmobil << endl;
            cout << "Lama parkir? (jam)" << endl;
            cin >> lamaparkir;
            if (lamaparkir>24){
                cout << "Dapat denda = " << denda <<endl;
                trfmobiltotal = trfmobil + perjamtrfmobil * (lamaparkir-1) + denda;
                cout << "Total = " << trfmobiltotal << endl;
                cout << "Member? (1=ya)(0=tidak): ";
                cin >> diskon;
                if (diskon=true) {
                    cout << "Dapat diskon = " << member <<endl;
                    cout << "Total Parkir = " << trfmobiltotal-member;
                    }
                    else {
                    cout << "Total Parkir = " << trfmobiltotal;
                }
            } else {
                trfmobiltotal = trfmobil + perjamtrfmobil * (lamaparkir-1);
                cout << "Total = " << trfmobiltotal << endl;
                cout << "Member? (1=ya)(0=tidak): ";
                cin >> diskon;
                if (diskon=true) {
                    cout << "Dapat diskon = " << member <<endl;
                    cout << "Total Parkir = " << trfmobiltotal-member;
                    }
                    else {
                    cout << "Total Parkir = " << trfmobiltotal;
                }

            }
            break;
        default:
            cout << "Pilihan tidak tersedia" << endl;
    }




    return 0;
}

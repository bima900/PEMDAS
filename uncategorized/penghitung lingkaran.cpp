#include <iostream>

using namespace std;

int main(){
    float radian;
    bool repeat=true;
    cout << "Masukkan R= ";
    cin >> radian;
    float const pi=3.1415927;
    float keliling=radian*2*pi;
    float luas=radian*radian*pi;
    int pilihan;
    cout << "Pilih luas atau keliling [0=luas][1=keliling]" << endl;

//    while (repeat){
//            cin >> pilihan;
//        if (pilihan==0){
//            cout << keliling;
//            repeat = false;
//        }
//        else if (pilihan==1){
//            cout << luas;
//            repeat = false;
//        }
//        else {
//            cout <<"Error, ulangi" << endl;
//            continue;
//        }
//    }
    cin >> pilihan;
    switch (pilihan){
        case 0:
            cout << "Keliling = " << keliling;
            break;
        case 1:
            cout << "Luas = " << luas;
            break;
        case 2 ... 8:
            cout << "Under development" << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia" << endl;

    }
    return 0;


}

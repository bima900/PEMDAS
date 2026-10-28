#include <iostream>
#include <string>

using namespace std;

int main (){
    int menu;
    int porsi=0;
    int harga=0;
    int total=0;
    string namamenu;
    cout << "===Menu==="<<endl;
    cout << "1. Espresso - Rp 18.000"<<endl;
    cout << "2. Americano - Rp 20.000"<<endl;
    cout << "3. Caffe Latte - Rp 25.000"<<endl;
    cout << "4. Matcha Latte - Rp 28.000"<<endl;
    cout << "=========="<<endl;

    cout << "Pilih menu: ";
    cin >> menu;
    cout << "Pesan berapa: ";
    cin >> porsi;

    switch (menu){
        case 1:
            namamenu="Espresso";
            harga=18000;
            cout << "Pilihan: " << namamenu << endl;
            cout << "Harga: " << harga << endl;
            break;
        case 2:
            namamenu="Americano";
            harga=20000;
            cout << "Pilihan: " << namamenu << endl;
            cout << "Harga: " << harga << endl;
            break;
        case 3:
            namamenu="Caffe Late";
            harga=25000;
            cout << "Pilihan: " << namamenu << endl;
            cout << "Harga: " << harga << endl;
            break;
        case 4:
            namamenu="Matcha Late";
            harga=28000;
            cout << "Pilihan: " << namamenu << endl;
            cout << "Harga: " << harga << endl;
            break;
        default:
            cout << "Pilihan menu tidak valid!" << endl;
            return 0;
    }

    if (porsi <= 0){
        cout << "Error, porsi minimal 1";
    } else {
        total=harga*porsi;
        cout << "Total: " << total;
    }

    return 0;
}

#include <iostream>

using namespace std;

int menu=0;
string menu1="Kopi Espresso";
string menu2="Matcha Latte";
string menu3="Roti Bakar Keju";
int harga1=18000;
int harga2=22000;
int harga3=15000;
int jumlah1=0;
int jumlah2=0;
int jumlah3=0;

int total=0;
int totalDiskon=0;

void tampilkanMenu();
int hitungTotal();
double hitungDiskon();
void cetakStruk();

int main(){
    char showmenu;
    cout<<"Lihat menu?(y untuk konfirm) ";
    cin>>showmenu;
    if (showmenu=='Y'||showmenu=='y'){
        tampilkanMenu();
    }
    int pesanan;
    char maupesan='y';
    cout <<"Mau pesan? (y untuk konfirm) ";
    cin >> maupesan;
    if (maupesan!='y'&& maupesan!='Y'){
        cout << "Jika tidak pesan silahkan pulang.";
        return 0;
    }
    if (showmenu!='y' && showmenu!='Y'){
        cout<<"Lihat menu lagi?(y untuk konfirm) ";
        cin>>showmenu;
        if (showmenu=='Y'||showmenu=='y'){
            tampilkanMenu();
        }
    }
    cout << endl;
    while(maupesan=='y'||maupesan=='Y'){
        cout <<"Pesan apa? ";
        cin >>menu;
        switch(menu){
            case 1:
                cout << menu1 << endl << harga1 << endl;
                cout << "Pesan berapa? ";
                cin >> jumlah1;
                break;
            case 2:
                cout << menu2 << endl << harga2 << endl;
                cout << "Pesan berapa? ";
                cin >> jumlah2;
                break;
            case 3:
                cout << menu3 << endl << harga3 << endl;
                cout << "Pesan berapa? ";
                cin >> jumlah3;
                break;
            default:
                continue;
        }

        cout <<"Pesan lagi? ";
        cin >> maupesan;
        if (maupesan=='y'||maupesan=='Y'){
            cout<<"Lihat menu lagi?(y untuk konfirm) ";
            cin>>showmenu;
            if (showmenu=='Y'||showmenu=='y'){
                tampilkanMenu();
            }
        }
    }

    hitungTotal();
    cout << "Total: "<<hitungTotal();
    cout << endl;

    if (total>=50000){
        cout << "Total lebih dari 50.000, maka dapat diskon 10%." << endl << "Total pesanan kamu menjadi: " << hitungDiskon() << endl;
    } else {
        cout << "Total pesanan kamu menjadi: " << hitungDiskon() << endl;
    }

    cetakStruk();
    return 0;
}

void tampilkanMenu(){
    cout<<"=============================="<<endl;
    cout<<"1. Kopi Espresso: Rp18.000"<<endl;
    cout<<"2. Matcha Latte: Rp22.000"<<endl;
    cout<<"3. Roti Bakar Keju: Rp15.000"<<endl;
    cout<<"=============================="<<endl;
}
int hitungTotal(){
    total=jumlah1*harga1+jumlah2*harga2+jumlah3*harga3;
    return total;
}

double hitungDiskon(){
    if (total>=50000){
        totalDiskon=total-(total/10);
    } else {
        totalDiskon=total;
    }
    return totalDiskon;
}

void cetakStruk(){
    cout<<"STRUK BELANJA"<<endl;
    cout<<"=============================="<<endl;
    cout<<"1. "<< menu1 << " : " << harga1 << " x " << jumlah1 << " = " << jumlah1*harga1 << endl;
    cout<<"2. "<< menu2 << " : " << harga2 << " x " << jumlah2 << " = " << jumlah2*harga2 << endl;
    cout<<"3. "<< menu3 << " : " << harga3 << " x " << jumlah3 << " = " << jumlah3*harga3 << endl;
    cout<<"=============================="<<endl;
    if (total>=50000){
        cout<<"Total = " << total << endl;
        cout<<"-Diskon = " << totalDiskon <<endl;
        cout<<"Total akhir = " << totalDiskon <<endl;
    } else {
        cout<<"Total akhir = " << total;
    }
}

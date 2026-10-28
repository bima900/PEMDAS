#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){

    float number1;
    float number2;
    float const PI = 3.14f;
    int umur;
    string nama;
    //char nilai = 'A';

    //cout << "Masukkan nama" << endl;
    //cin >> nama;
    //cout << "Welcome " << nama << endl;
    //cout << "Masukkan Umur" << endl;
    //cin >> umur;
    //cout << "Selamat ulang tahun yang ke " << umur << endl;

    //cout <<"Enter 2 numbers to add " << endl;
    //cin >> number1;
    //cin >> number2;
    //float result = number1+number2;
    //cout << "Hasilnya " << result << endl;

    //cout << "Hasil jika dikalikan PI" << endl;
    //float result2 = result*PI;
    //cout <<result2 << endl;

    // operator logika
    // ==
    // !=
    // <
    // >
    // <=
    // >=
    // !
    //
    // && ||
    //
    //cout << "Ya, benar, nilaimu " << nilai << endl;
    //int value1;
    //cout << "Masukkan angka pertama: ";
    //cin >> value1;
    //int value2;
    //cout << "Masukkan angka kedua: ";
    //cin >> value2;
    //int tanda;
    //cout << "Pilih tanda [0=tambah][1=kurang][2=kali][3=bagi]" << endl;
    //cin >> tanda;
    //if (tanda==0){
        cout << "hasilnya " << value1+value2 << endl;
    }
    else if (tanda==1){
        cout << "hasilnya " << value1-value2 << endl;
    }
    else if (tanda==2){
        cout << "hasilnya " << value1*value2 << endl;
    }
    else if (tanda==3){
        cout << "hasilnya " << value1/value2 << endl;
    }
    else {
        cout << "error";
    }
    char rate;
    cout << "Apakah anda puas? berikan rating anda (A-E)" << endl;
    cin >> rate;
    if (rate=='A'){
        cout << "Terima kasih :)";
    }
    else if (rate=='B'){
        cout << "Okay :|";
    }
    else {
        cout << "Good bye";
        std::quick_exit(1);
    }
    return 0;
}

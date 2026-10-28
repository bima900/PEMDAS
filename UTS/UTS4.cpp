#include <iostream>

using namespace std;

int main(){
    int pinbenar=123456;
    int percobaan=0;
    int pinuser;



    do {
        cout << "Total percobaan : " << percobaan << endl;
        cout << "Masukkan PIN : ";
        cin >> pinuser;
        percobaan++;
        if (pinuser !=pinbenar){
            cout << "PIN Salah! Sisa percobaan : " << 3-percobaan << endl;
        }
        if (percobaan>2) {
            cout << "Kartu ATM Anda Terblokir!";
            return 0;
        }
    } while (pinuser!=pinbenar);

    cout << "Login Berhasil! Selamat Datang.";
    return 0;
}

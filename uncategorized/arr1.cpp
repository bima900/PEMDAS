#include <iostream>

using namespace std;

//int main (){
  //  int total;
    //int t=0;
    //int jumlah;
    //int ukuran=0;
    //cin >> ukuran;
    //for(int i=0; i<ukuran; i++){
        //cout << "Masukkan nilai: ";
        //int nilai [i];
        //cin >> nilai [i];
      //  nilai [i]
    //}

bool cekAvaible (int baris, int kolom, int kursi[]){
    if (kursi [baris][kolom]==0){
        cout << "Kursi tersedia." << endl;
    } else {
        cout << "Kursi terisi." << endl;
    }

    return cekAvaible;
}
int main(){
    int b=5;
    int k=10;
    int kursi[5][10]={
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };
    bool ulang;
    do {
        cout << endl;
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < k; j++) {
                cout << kursi[i][j] << " ";
            }
            cout << endl;
        }

        int baris;
        int kolom;
        cout << endl;
        cout << "Masukkan baris (0-4): ";
        cin >> baris;
        cout << "Masukkan kolom (0-9): ";
        cin >> kolom;
        cout << endl;
        if (kursi[baris][kolom] == 0) {
            kursi[baris][kolom] = 1;
            cout << "Berhasil! Kursi " << baris << ", " << kolom << " telah dipesan." << endl;
        }
        else {
            cout << "Kursi telah dipesan! Pilih kursi lain." << endl;
        }
        cout << endl;
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < k; j++) {
                cout << kursi[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        cout << "Ingin memesan kursi lagi? (1/0): ";
        cin >> ulang;
    } while (ulang==true);
    cout << endl;
    cout << "Terima kasih telah menggunakan sistem pemesanan bioskop!" << endl;
    return 0;

}

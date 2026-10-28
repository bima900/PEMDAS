#include <iostream>
using namespace std;
int main (){
    int n = 0;
    cin >> n;
    if (n < 1 || n > 100){
        return 0;
    }
    int k = 0;
    cin >> k;
    if (k < 1 || k > 100){
        return 0;
    }
    int pemain[n];
    for (int i = 0; i < n; i++){
        pemain[i] = 1;
    }
    int elim[n];
    int masihmain = n;
    int yangelim = 0;
    int posisi = 0;
    int arah = 1;
    int pembalikan = 0;
    while (masihmain > 1){
        int hitungan = 1;
        while (hitungan < k){
            posisi = posisi + arah;
            if (posisi >= n){
                posisi = 0;
            }
            if (posisi < 0){
                posisi = n - 1;
            }
            if (pemain[posisi] == 1){
                hitungan++;
            }
        }
        pemain[posisi] = 0;
        elim[yangelim] = posisi + 1;
        yangelim++;
        masihmain--;
        if ((posisi+1)%2==0){
            arah = arah * -1;
            pembalikan++;
        }
        if (masihmain > 1){
            posisi = posisi + arah;
            if (posisi >= n){
                posisi = 0;
            }
            if (posisi < 0){
                posisi = n - 1;
            }
            while (pemain[posisi] == 0){
                posisi = posisi + arah;
                if (posisi >= n){
                    posisi = 0;
                }
                if (posisi < 0){
                    posisi = n - 1;
                }
            }
        }
    }
    cout << "Urutan eliminasi: ";
    if (n == 1){
        cout << "-";
    }else{
        for (int i = 0; i < yangelim;i++){
            cout << elim[i] << " ";
        }

    }
    int a = 0;
    for (int i = 0; i < n; i++){
        if (pemain[i] == 1){
            a = (pemain[i] + i);
        }
    }


    cout << "\nPemenang: " << a << endl;
    cout << "Pembalikan arah: " << pembalikan << endl;
    return 0;
}

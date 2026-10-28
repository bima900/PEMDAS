#include <iostream>

using namespace std;

int main (){
    int data = 0;
    int frekuensi = 0;
    double totaldata = 0.0;
    int input;
    do {
        printf("Ada data baru? ");
        if (scanf("%d", &input) != 1) {
            break;
        }
        if (input== 0) {
            break;
        }
        else if (input != 1 && input != 0) {
            printf("Jenis input salah. Ulangi lagi\n");
            continue;
        }
        printf("Masukkan data : ");
        if (scanf("%d", &data)){
            frekuensi++;
            totaldata=totaldata+data;
        }
    } while (input!=0);
    double mean= (totaldata)/  static_cast<double> (frekuensi);
    printf("Jumlah data = %d\n", frekuensi);
    printf("Total data = %.0f\n", totaldata);
    printf("Rata-rata = %.2f\n", mean);
    return 0;

}

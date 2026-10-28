#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    int jumlahMotor = 0, jumlahMobil = 0;
    int totalParkirMotor = 0, totalParkirMobil = 0;
    int totalLamaMotor = 0, totalLamaMobil = 0;
    int maxLamaMotor = 0, maxBiayaMotor = 0;
    int maxLamaMobil = 0, maxBiayaMobil = 0;
    int jenisKendaraan = 0;
    bool civitas;
    printf("Civitas : ");
    cin >> civitas;
    do {
        printf("Masukkan jenis kendaraan (1=motor, 2=mobil, 0=Keluar): ");
        if (scanf("%d", &jenisKendaraan) != 1) {
            break;
        }

        if (jenisKendaraan == 0) {
            break;
        }
        else if (jenisKendaraan != 1 && jenisKendaraan != 2) {
            printf("Jenis kendaraan salah. Ulangi lagi\n");
            continue;
        }

        string kendaraan = "";
        int jumlah = 0;
        int tarifDasar = 0, tarifLanjut = 0;
        int denda = 50000;

        switch (jenisKendaraan) {
            case 1:
                jumlahMotor++;
                kendaraan = "motor";
                jumlah = jumlahMotor;
                tarifDasar = 2000;
                tarifLanjut = 1000;
                break;
            case 2:
                jumlahMobil++;
                kendaraan = "mobil";
                jumlah = jumlahMobil;
                tarifDasar = 5000;
                tarifLanjut = 2000;
                break;
        }

        printf("Masukkan lama parkir (dalam jam): ");
        int jam = 0;
        scanf("%d", &jam);

        int tarif = 0;
        if (jam <= 0) {
            printf("Error! Lama parkir harus lebih dari 0 jam.\n");
            if (jenisKendaraan == 1) jumlahMotor--;
            else if (jenisKendaraan == 2) jumlahMobil--;
            continue;
        } else {
            if (civitas == true){
                if (jam == 1) {
                    tarif = tarifDasar - 2000;
                } else if (jam >= 24) {
                    tarif = tarifDasar + ((jam - 1) * tarifLanjut) + denda - 2000;
                } else {
                    tarif = tarifDasar + ((jam - 1) * tarifLanjut) - 2000;
                }
            } else {
                if (jam == 1) {
                    tarif = tarifDasar;
                } else if (jam >= 24) {
                    tarif = tarifDasar + ((jam - 1) * tarifLanjut) + denda;
                } else {
                    tarif = tarifDasar + ((jam - 1) * tarifLanjut);
                }
            }
        }
        switch (jenisKendaraan) {
            case 1:
                totalParkirMotor += tarif;
                totalLamaMotor += jam;
                if (jam > maxLamaMotor) {
                    maxLamaMotor = jam;
                    maxBiayaMotor = tarif;
                }
                break;
            case 2:
                totalParkirMobil += tarif;
                totalLamaMobil += jam;
                if (jam > maxLamaMobil) {
                    maxLamaMobil = jam;
                    maxBiayaMobil = tarif;
                }
                break;
        }
        printf("Total biaya parkir %s-%d = %d\n", kendaraan.c_str(), jumlah, tarif);
    } while (jenisKendaraan != 0);

    printf("Jumlah motor = %d\n", jumlahMotor);
    printf("Total biaya parkir motor = %d\n", totalParkirMotor);
    printf("Jumlah mobil = %d\n", jumlahMobil);
    printf("Total biaya parkir mobil = %d\n", totalParkirMobil);

    double avgLamaMotor = (jumlahMotor > 0) ? (double)totalLamaMotor / jumlahMotor : 0.0;
    double avgLamaMobil = (jumlahMobil > 0) ? (double)totalLamaMobil / jumlahMobil : 0.0;

    printf("\nRata-rata lama parkir motor = %.2f jam\n", avgLamaMotor);
    printf("Rata-rata lama parkir mobil = %.2f jam\n", avgLamaMobil);

    printf("Parkir motor paling lama = %d jam dengan biaya parkir = %d\n", maxLamaMotor, maxBiayaMotor);
    printf("Parkir mobil paling lama = %d jam dengan biaya parkir = %d\n", maxLamaMobil, maxBiayaMobil);
    return 0;
}

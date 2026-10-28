#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    cout <<"Konversi Suhu" << endl;
    float suhucelcius;
    cout <<"Masukkan suhu dalam celcius: ";
    cin >> suhucelcius;
    float suhufahrenheit = (9.00 / 5.00) * suhucelcius + 32.00;
    float suhukelvin = suhucelcius + 273.15;
    float suhureamur = (4.00 / 5.00) * suhucelcius;

    cout << fixed << setprecision(2);
    cout << "\n----- RINCIAN SUHU -----" << endl;
    cout << left << setw(16) << "Suhu celcius: "<< suhucelcius << endl;
    cout << left << setw(16) << "Suhu fahrenheit: "<< suhufahrenheit << endl;
    cout << left << setw(16) << "Suhu reamur: "<< suhureamur << endl;
    cout << left << setw(16) << "Suhu kelvin: "<< suhukelvin << endl;




    return 0;
}

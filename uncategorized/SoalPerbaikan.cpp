#include <iostream>

using namespace std;

int main (){
    double bb=0, tb=0;
    string kategori;

    cout << "Masukkan berat badan: ";
    cin >> bb;
    cout << "Masukkan tinggi badan (Meter): ";
    cin >> tb;

    if (bb<40){
        cout << "Inputan tidak valid";
        return 0;
    }
    double bmi=bb/(tb*tb);

    if (bmi<18.5){
        kategori="Kurus";
    } else if (bmi>=18.5 && bmi<25){
        kategori="Normal";
    } else if (bmi>=25 && bmi<30){
        kategori="Gemuk";
    } else {
        kategori="Obesitas";
    }

    cout << "BMI = " << bmi <<endl;
    cout << "Kategori : " << kategori;
    return 0;
}

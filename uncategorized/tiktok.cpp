#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int n;
    cout << "Jumlah konten: ";
    cin >> n;

    if (n <= 0) {
        cout << "Jumlah konten tidak valid" << endl;
        return 0;
    }

    int indeksTerbaik = 1;
    double rateTertinggi = -1.0;

    for (int i = 1; i <= n; ++i) {
        double views, likes, komen, share;
        cout << "Konten " << i << " (views likes komen share): ";
        cin >> views >> likes >> komen >> share;

        double rate = 0.0;
        if (views > 0) {
            rate = ((likes + komen + share) / views) * 100.0;
        }

        cout << fixed << setprecision(2);
        cout << "Konten " << i << ": " << rate << "%" << endl;

        if (rate > rateTertinggi) {
            rateTertinggi = rate;
            indeksTerbaik = i;
        }
    }

    cout << "Konten terbaik: Konten " << indeksTerbaik << " dengan engagement " << rateTertinggi << "%" << endl;
    return 0;
}

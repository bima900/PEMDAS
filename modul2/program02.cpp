#include <iostream>
using namespace std;
int main() {
double nilai;
cout << "Masukkan nilai (0-100): ";
cin >> nilai;
char grade;
if (nilai >= 85) {
grade = 'A';
} else if (nilai >= 70) {
grade = 'B';
} else if (nilai >= 60) {
grade = 'C';
} else if (nilai >= 40) {
grade = 'D';
} else {
grade = 'E';
}
cout << "Grade: " << grade << endl;
return 0;
}

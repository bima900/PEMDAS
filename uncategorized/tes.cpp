#include <iostream>

using namespace std;

int main (){
  int n=0;
  cout << "Masukkan jumlah suku: ";
  cin >> n;
  if (n>=40){
    do{
        cout << "Ulangi, masukkan jumlah suku kurang dari 40"<< endl;
        cout << "n: ";
        cin >> n;
    } while (n>=40);
  }
  for (int i=0; i<=n; i++){
    n++;
    cout << n;
  }
  cout << n;
  return 0;
}

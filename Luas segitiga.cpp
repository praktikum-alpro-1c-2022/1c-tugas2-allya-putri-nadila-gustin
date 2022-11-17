#include <iostream>

using namespace std;

int main(){

    double luas,alas,tinggi;

    cout << "Menghitung Luas Segitiga" << endl;

    cout << "Masukkan alas      : ";
    cin >> alas;

    cout << "Masukkan tinggi    : ";
    cin >> tinggi;

    //rumus luas segitiga
    luas = 0.5 * alas * tinggi;

    cout << "Luas segitiga      = " << luas;

return 0;


}

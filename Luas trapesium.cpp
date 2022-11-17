#include <iostream>

using namespace std;

int main(){

    double luas,a,b,tinggi;
    cout << "Menghitung Luas Trapesium" << endl;

    cout << "Masukkan a        : ";
    cin >> a;

    cout << "Masukkan b        : ";
    cin >> b;

    cout << "Masukkan tinggi   : ";
    cin >> tinggi;

    // rumus luas trapesium
    luas = 0.5 * (a+b) * tinggi;

    cout << "Luas trapesium    = " << luas;

return 0;

}

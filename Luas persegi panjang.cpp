#include <iostream>

using namespace std;

int main(){

    double luas,panjang,lebar;

    cout << "Menghitung Luas Persegi Paanjang" <<endl;

    cout << "Masukkan panjang       : ";
    cin >> panjang;

    cout << "Masukkan lebar         : ";
    cin >> lebar;

    //rumus luas persegi panjang
    luas = panjang * lebar;

    cout << "Luas persegi panjang   = " << luas;

return 0;

}

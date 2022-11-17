#include <iostream>

using namespace std;

int main(){

    double luas,alas,tinggi;
    cout << "Menghitung Luas Jajar Genjang" << endl;

    cout << "Masukkan alas      :";
    cin >> alas;

    cout << "Masukkan tinggi    :";
    cin >> tinggi;

    // rumus luas jajar genjang
    luas = alas * tinggi;

    cout << "Luas jajar genjang = " << luas;

return 0;

}

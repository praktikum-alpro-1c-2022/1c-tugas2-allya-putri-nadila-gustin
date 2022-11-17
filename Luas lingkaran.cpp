#include <iostream>

using namespace std;

int main(){

    double luas,r;
    double phi = 3.14;

    cout << "Menghitung Luas Lingkaran" <<endl;
    cout << "Masukkan r     : ";
    cin >> r;

    //rumus luas lingkaran
    luas = phi * r * r;
    cout << "Luas lingkaran = " << luas;

return 0;


}

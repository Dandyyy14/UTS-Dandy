#include<iostream>
using namespace std;

int main(){

    int batas;
    cout << "Masukkan batas: ";
    cin >> batas;

    int jumlahGanjil = 0, jumlahGenap = 0;
    cout << "Bilangan Ganjil:\n";
    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 1){
            jumlahGanjil++;
            cout << i << endl;
        }
    }
    cout << "Bilangan Genap:\n";

    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 0) {
            jumlahGenap++;
            cout << i << endl;
        }
    }
cout << endl;
    return 0;
}

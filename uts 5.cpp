#include <iostream>
using namespace std;

double hitungIMT(double berat, double tinggi) {
    double tinggiMeter = tinggi / 100.0;
    return berat / (tinggiMeter * tinggiMeter);
}

string kategoriIMT(double imt) {
    if (imt < 18.4)
        return "Berat Badan Kurang";
    else if (imt >= 18.5 && imt < 24.9)
        return "Berat Badan Ideal";
    else if (imt >= 25 && imt < 29.9)
        return "Berat Badan Lebih";
    else if (imt >= 30 && imt < 39.9)
        return "Gemuk";
    else if (imt > 40)
        return "Sangat Gemuk";
}

int main() {
    double berat, tinggi, imt;
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (cm): ";
    cin >> tinggi;

    imt = hitungIMT(berat, tinggi);
    cout << "IMT Anda adalah " << imt << " dan Anda termasuk dalam kategori " << kategoriIMT(imt) << "." << endl;

    return 0;
}

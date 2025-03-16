#include <iostream>
using namespace std;

int main () {
    char nilai;

    cout << "Input Nilai Anda (A-E): ";
    cin >> nilai;

    if (nilai == 'A') {
        cout << "Sangat Baik" << endl;
    } else if (nilai == 'B') {
        cout << "Baik" << endl;
    } else if (nilai == 'C') {
        cout << "Cukup" << endl;
    } else if (nilai == 'D') {
        cout << "Buruk" << endl;
    } else if (nilai == 'E') {
        cout << "Sangat Buruk" << endl;
    } else {
        cout << "Maaf, format nilai tidak sesuai" << endl;
    }

    return 0;
}
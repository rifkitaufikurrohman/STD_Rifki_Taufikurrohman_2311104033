#include <iostream>
#include <cmath>
using namespace std;

struct Kerucut {
    float jariJari;
    float tinggi;   

    float hitungSisiMiring() {
        return sqrt(jariJari * jariJari + tinggi * tinggi);
    }

    float luasAlas() {
        return M_PI * jariJari * jariJari;
    }

    float luasSelimut() {
        return M_PI * jariJari * hitungSisiMiring();
    }

    float luasPermukaan() {
        return luasAlas() + luasSelimut();
    }

    float volume() {
        return (1.0 / 3.0) * M_PI * jariJari * jariJari * tinggi;
    }
};

int main() {
    Kerucut kerucut;

    cout << "Masukkan jari-jari kerucut: ";
    cin >> kerucut.jariJari;
    
    cout << "Masukkan tinggi kerucut: ";
    cin >> kerucut.tinggi;

    cout << "Luas Alas: " << kerucut.luasAlas() << endl;
    cout << "Luas Selimut: " << kerucut.luasSelimut() << endl;
    cout << "Luas Permukaan: " << kerucut.luasPermukaan() << endl;
    cout << "Volume: " << kerucut.volume() << endl;

    return 0;
}
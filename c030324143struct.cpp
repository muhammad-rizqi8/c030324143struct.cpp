#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main() {
    Mahasiswa rizqi;
    Mahasiswa* ptr = &rizqi; // pointer ke struct

    ptr->nim = "c030324143";
    ptr->nama = "Muhammad Rizqi";
    ptr->alamat = "Jl. Singgosari";
    ptr->ipk = 3.23;

    cout << "NIM    : " << ptr->nim << "\n";
    cout << "Nama   : " << ptr->nama << "\n";
    cout << "Alamat : " << ptr->alamat << "\n";
    cout << "IPK    : " << ptr->ipk << "\n";

	return 0;
}
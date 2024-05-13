#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
private:
    int nim;
    string nama;

private:
    Mahasiswa()
    {
        nim = 0;
        nama = "";
    };
    Mahasiswa(int iNim)
    {
        nim = iNim;
    
    };
    Mahasiswa(string);
    Mahasiswa(int iNim, string iNama);
    void cetak();
};

Mahasiswa::Mahasiswa(string iNama){
    nama = iNama;
}

Mahasiswa::Mahasiswa(int iNim, string iNama)
    {
        nim = iNim;
        nama = iNama;
    
    };

void Mahasiswa::cetak(){
    cout << "Nim = " << nim << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main()
{
    
}



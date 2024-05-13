#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
    static int nim;

public:
    int id;
    string nama;

    void setID();
    void printA11();

    static void setNim(int pNim) { nim = pNim; }
    static int getNim() { return nim; }

    mahasiswa (string pnama):nama(pnama)
    {
        setID();
    }
};

int mahasiswa::nim = 100;

void mahasiswa::setID()
{
    id = ++nim;
}

void mahasiswa::printA11()
{
    cout << "ID  = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

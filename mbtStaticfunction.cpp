#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
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

    Mahasiswa (string pnama):nama(pnama)
    {
        setID();
    }
};

int Mahasiswa::nim = 100;

void Mahasiswa::setID()
{
    id = ++nim;
}

void Mahasiswa::printA11()
{
    cout << "ID  = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main()
{
    Mahasiswa mhs1("Sri Dodi");
    Mahasiswa mhs2("Budi Jatmiko");

    Mahasiswa::setNim(9); //mengakses nim melalui static member function "setNim"
    Mahasiswa mhs3("Andi Janu");
    Mahasiswa mhs4("Joko Wahono");

    mhs1.printA11();

    mhs2.printA11();
    mhs3.printA11();
    mhs4.printA11();

    cout <<"akses dari luar object = " << Mahasiswa::getNim() << endl; //mengakses nilai

    return 0;
}

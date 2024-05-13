#include <iostream>
using namespace std;

class mahasiswa 
{
public:
    static int nim;
    int id;
    string nama;

    void setID();

    void printA11();
    mahasiswa(string pnama):nama(pnama)
    {
        setID();
    }
};

int mahasiswa::nim = 20;

void mahasiswa::setID()
{
    id = nim++;
}

void mahasiswa::printA11()
{
    cout << "ID   = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main()
{
    mahasiswa mhs1("Lia Kurinia");
    mahasiswa mhs2("Asroni");
    mahasiswa mhs3("Andi Kurniawan");
    mahasiswa mhs4("Joko Purbo");

    mhs1.printA11();

    mhs2.printA11();
    mhs3.printA11();
    mhs4.printA11();
    return 0;
}

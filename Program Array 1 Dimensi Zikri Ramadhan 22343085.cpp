#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    cout<< " NAMA   : ZIKRI RAMADHAN\n";
    cout<< " NIM    : 22343085\n";
    cout<< " PRODI  : INFORMATIKA\n";
    cout<< " MATKUL : PRATIKUM ALGORITMA\n\n";
    cout<< " =======================\n";
    cout<< " PROGRAM ARRAY 1 DIMENSI\n";
    cout<< " =======================\n\n";

    int nilai[5]={3,7,2,9,4};

    for (int idx=0; idx<5; idx++)
        cout << " Nilai indek ke  ["<<idx<<"] : " << nilai[idx] << endl;
}

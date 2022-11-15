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
    cout<< " PROGRAM ARRAY 2 DIMENSI\n";
    cout<< " =======================\n\n";

    int data[10][10];
    int baris,kolom,i,j;
    cout<< " Masukkan Jumlah Baris : ";
    cin>>baris;
    cout<< " Masukkan Jumlah Kolom : ";
    cin>>kolom;

    cout<<endl;

    for (i=0;i<baris;i++)
    {
        for(j=0;j<kolom;j++)
        {
            cout<<" Nilai matriks ke ["<<i+1<<","<<j+1<<"] : ";
            cin>>data[i][j];
        }
    }

    cout<<endl;

    for (int i=0;i<baris;i++)
    {
        for(int j=0;j<kolom;j++)
        cout<<data[i][j]<< "  " ;
        cout<<endl;
    }
    getch();
}



#include<iostream>
#include<conio.h>

using namespace std;
#include<iostream>
using namespace::std;

double modulus (int nilai, int pembagi)
{
    return (nilai%pembagi);
}

void judul()
{
    cout<<"Program Mencari Nilai Modulus\n\n";
}

main()
{judul();
    int nilai,pembagi,modulus;

cout<<"Masukkan Nilai = ";
cin>>nilai;
cout<<"Nilai Pemmbagi = ";
cin>>pembagi;
modulus=nilai%pembagi;
cout<<"Hasil Modulus = " <<modulus;

}


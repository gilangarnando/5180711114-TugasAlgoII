#include <iostream>
using namespace std;

int nilai[15], nilai2[15];
int a;

void tukar(int x, int y)
{
 int tukar;
 tukar = nilai[y];
 nilai[y] = nilai[x];
 nilai[x] = tukar;
}

void ascending_bubble()
{
 for(int i=1; i<=a; i++)
 {
    for(int m=a; m>=i; m--)
    {
        if(nilai[m] < nilai[m-1])
        {
            tukar(m, m-1);
        }
    }
 }
}

void inputan()
{
    cout << "Masukkan Jumlah Nilai Yang Anda Ingin Masukkan: ";
 cin >>a;
 cout << endl;
 for(int i=1; i<=a; i++)
 {
  cout << "Masukkan nilai ke-" << i << ": ";
  cin >> nilai[i];
  nilai2[i] = nilai[i];
 }
}
void pembatas()
{
    cout<<"\n===========================================\n";
}

void hasil()
{
    cout << "\nNilai Yang Diurutkan secara Ascending\n";
 for(int i=1; i<=a; i++)
 {
  cout << nilai[i] << " ";
 }
cout << endl;
}
main()
{
    cout<<"Program Sorting Ascending Metode Bubble\n";
    pembatas();
    inputan();
    pembatas();
    ascending_bubble();
    hasil();


}

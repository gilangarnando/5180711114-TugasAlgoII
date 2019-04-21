#include<iostream>

using namespace::std;
int main()
{

int Data[50], n, tukar;
cout<<"Berapa jumlah data : ";cin>>n;
for (int a=1; a!=n+1; a++)
{

cout<<"Input data ke-"<<a<<" : ";cin>>Data[a];

}
for (int c=0; c!=n-1;c++)
{

for (int d=1; d!=n-c; d++)
{

if (Data[d] < Data[d+1])
{

tukar = Data[d];
Data[d] = Data[d+1];
Data[d+1] = tukar;

}

}

}
cout<<"\nData setelah diurutkan :\n";
for (int e=1; e!=n+1; e++)
{
cout<<Data[e]<<"   ";
}
}

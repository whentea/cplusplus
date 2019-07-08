#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void volume(float p, float l, float t);
void luas(float p, float l, float t);
void keliling(float p, float l, float t);

int main()
{
    float panjang, lebar, tinggi;
    int pil;
    cout<<"\nMenghitung Volume, Luas dan Keliling Balok";
    cout<<"\nMasukkan panjang : ";
    cin>>panjang;
    cout<<"Masukkan lebar : ";
    cin>>lebar;
    cout<<"Masukkan tinggi : ";
    cin>>tinggi;
    do
    {
        cout<<"\n";
        cout<<"\nPilih perhitungan :";
        cout<<"\n1. Luas";
        cout<<"\n2. Volume";
        cout<<"\n3. Keliling";
        cout<<"\n4. Keluar";
        cout<<"\nMasukkan pilihan : ";
        cin>>pil;
        switch(pil)
        {
        case 1:
            luas(panjang, lebar, tinggi);
            break;

        case 2:
            volume(panjang, lebar, tinggi);
            break;

        case 3:
            keliling(panjang, lebar, tinggi);
            break;
        }
    }
    while(pil != 4);

    return 0;
}


void volume(float p, float l, float t)
{
    float vol;
    vol=p*l*t;
    cout<<"\nVolume : "<<vol;
}

void luas(float p, float l, float t)
{
    float luasnya;
    luasnya=2*(p+l+t);
    cout<<"\nLuas : "<<luasnya;
}

void keliling(float p, float l, float t)
{
    float kelnya;
    kelnya=4*(p+l+t);
    cout<<"\nKeliling : "<<kelnya;
}

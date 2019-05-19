#include <iostream>
using namespace std;

int main()
{
    float volume_balok, kel_balok, panjang, lebar, tinggi;
    int pilihan;
    cout<<"Hitung Volume atau Keliling Balok."<<endl;
    cout<<"Masukkan panjang balok : ";
    cin>>panjang;
    cout<<"Masukkan lebar balok : ";
    cin>>lebar;
    cout<<"Masukkan tinggi balok : ";
    cin>>tinggi;
    cout<<"Masukkan pilihan 1: Cari Volume, 2: Cari Keliling : ";
    cin>>pilihan;
    cout<<endl;
    switch(pilihan){
    case 1:
        volume_balok=panjang*lebar*tinggi;
        cout<<"Volume balok = "<<volume_balok<<endl;
        break;
    case 2:
        kel_balok=4*(panjang+lebar+tinggi);
        cout<<"Keliling balok = "<<kel_balok<<endl;
        break;
    default:
        cout<<"Pilihan Anda salah.";
    }
    return 0;
}

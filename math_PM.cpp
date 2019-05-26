#include <iostream>
#include <cmath>
using namespace std;

void kuadratkan(int a, int b);
void faktorialkan(int a, int b);

int main()
{
    int pilihan, awal, akhir;
    cout<<"\nMasukkan angka awal : ";
    cin>>awal;
    cout<<"\nMasukkan angka akhir : ";
    cin>>akhir;
    cout<<"\nPilihan : ";
    cout<<"\n1. Kuadratkan";
    cout<<"\n2. Faktorialkan";
    cout<<"\nMasukkan pilihan Anda :",
    cin>>(pilihan);
    switch(pilihan)
    {
    case 1:
        kuadratkan(awal, akhir);
        break;
    case 2:
        faktorialkan(awal, akhir);
        break;
    default:
        break;
    }
    return 0;
}

void kuadratkan(int a, int b)
{
    int kuadrat;
    for (int i=a;i<=b;i++)
    {
        kuadrat=i*i;
        cout<<i<<" kuadrat adalah "<<kuadrat<<endl;
    }
}
void faktorialkan(int a, int b)
{
    int factor;
    for (int i=a;i<=b;i++)
    {
        factor *= i;
        cout<<i<<" factorial adalah "<<factor<<endl;
    }
}

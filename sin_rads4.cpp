#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
  double akar, pangkat;
  int i=100;
  cout<<"------------------------------"<<endl;
  cout<<left<<setw(10)<<"Bilangan"<<left<<setw(10)<<"Akar"<<left<<setw(10)<<"Kuadrat"<<endl;
  cout<<"------------------------------"<<endl;
  do
  {
    cout<<left<<setw(10)<<i;
    cout<<setw(10)<<setprecision(3)<<sqrt(i)<<left;
    cout<<setw(10)<<setprecision(5)<<pow(i,2)<<left;
    cout<<endl;
    i=i-10;
  }
  while(i>=0);
  cout<<"------------------------------"<<endl;
  return 0;
}

#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
  double angle,dsine,dcos,dtan;
  int i=0;
  double pi=3.14, rads;
  cout<<"--------------------------------------------------------"<<endl;
  cout<<setw(10)<<"Sudut"<<setw(10)<<"Rads"<<setw(10)<<"Sine"<<setw(10)<<"Cos"<<setw(15)<<"Tan"<<endl;
  cout<<"--------------------------------------------------------"<<endl;
  do
  {
    rads=(pi/180)*i;
    dcos = cos(rads);
    dsine = sin(rads);
    dtan = tan(rads);
    cout<<setw(10)<<i<<right;
    cout<<setw(10)<<setprecision(3)<<rads<<right;
    cout<<setw(10)<<setprecision(3)<<dsine<<right;
    cout<<setw(10)<<setprecision(3)<<dcos<<right;
    cout<<setw(15)<<setprecision(4)<<dtan<<right;
    cout<<endl;
    i=i+30;
  }
  while(i<=360);
  return 0;
}

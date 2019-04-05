#include <iostream>
using namespace std;

int main()
{
    int n, m, factorial;
    factorial = 1;
    cout<<"Enter a positive integer : ";
    cin>>m;

    for (n=1;n<=m;n++)
       factorial *= n;
    cout<<"Factorial of "<<m<<" is "<<factorial;
    return 0;
}

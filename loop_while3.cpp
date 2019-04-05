#include <iostream>
using namespace std;

int main()
{
    int n, m, factorial;
    factorial = 1;
    cout<<"Enter a positive integer : ";
    cin>>m;

    n=1;
    while (n<=m)
    {
        factorial *= n;
        n++;
    }

    cout<<"Factorial of "<<m<<" is "<<factorial;
    return 0;
}

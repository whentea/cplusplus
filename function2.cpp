#include <iostream>
using namespace std;

int factorial();

int main()
{
    int n, m, fact;
    fact = 1;

    m = factorial();
    n=1;
    while (n<=m)
    {
        fact *= n;
        n++;
    }

    cout<<"Factorial of "<<m<<" is "<<fact;
    return 0;

}

int factorial()
{
    int k;
    cout<<"Enter a positive integer : ";
    cin>>k;
    return k;
}

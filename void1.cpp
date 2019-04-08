#include <iostream>
using namespace std;

void factorial();

int main()
{
    factorial();
    return 0;

}

void factorial()
{
    int n, m, fact;
    fact = 1;
    cout<<"Enter a positive integer : ";
    cin>>m;

    n=1;
    while (n<=m)
    {
        fact *= n;
        n++;
    }

    cout<<"Factorial of "<<m<<" is "<<fact;
}

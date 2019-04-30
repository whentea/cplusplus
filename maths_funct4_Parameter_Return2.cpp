//Paramter adalah posint (pengganti m). Return adalah
#include <iostream>
using namespace std;

//Return value dan parameter
int hitung_factorial(int k, int m);

int main()
{
    int posint,n,factorial;
    cout<<"Enter a positive integer : ";
    cin>>posint;
    factorial=1;

    for (n=1;n<=posint;n++)
    {
        //factorial = factorial * n; Statemnet ini diganti function
        factorial = hitung_factorial(n,factorial);
        cout<<"Factorial of "<<n<<" is "<<factorial;
        cout << endl;
    }
    return 0;
}

int hitung_factorial(int k, int m)
{
    //k adalah n, m adalah factorial. Nilai baliknya hanya factorial saja
    m = m * k;
    return (k, m);
}


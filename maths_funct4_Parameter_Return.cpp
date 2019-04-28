#include <iostream>
using namespace std;

int factorial(int k);

int main()
{
    int posint, result_fact;
    cout<<"Enter a positive integer : ";
    cin>>posint;

    result_fact=factorial(posint);
    cout<<"Factorial of "<<posint<<" is "<<result_fact;
    return 0;

}

int factorial(int k)
{
    //Input parameternya suatu vaeiabel bernama k (postint), Output returnnya bernama variabel fact
    int n, fact;
    fact = 1;

    n=1;
    while (n<=k)
    {
        fact *= n;
        n++;
    }
    return fact;
}

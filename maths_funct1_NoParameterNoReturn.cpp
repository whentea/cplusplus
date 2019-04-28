//No Parameter - No Return. But we try to use function which is declare with void
#include <iostream>
using namespace std;

void calculate_factorial();

int main()
{
    calculate_factorial();
    return 0;
}

void calculate_factorial()
{
    int n, m, factorial;
    factorial = 1;
    cout<<"Enter a positive integer : ";
    cin>>m;
    cout << endl;

    for (n=1;n<=m;n++)
    {
        factorial *= n;
        cout<<"Factorial of "<<n<<" is "<<factorial;
        cout << endl;
    }

    cout << endl;
    //Do not need a return value
}

//Lat 1
#include <iostream>
using namespace std;

int main()
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
    return 0;
}



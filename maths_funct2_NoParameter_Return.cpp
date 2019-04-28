//No Parameter with a return value
#include <iostream>
using namespace std;

int calculate_factorial();

int main()
{
    int n, k, factorial;
	k = calculate_factorial();
	factorial = 1;
    cout << endl;

    for (n=1;n<=k;n++)
    {
        factorial *= n;
        cout<<"Factorial of "<<n<<" is "<<factorial;
        cout << endl;
    }

    cout << endl;

    return 0;
}

int calculate_factorial()
{
    int m;
    cout<<"Enter a positive integer : ";
    cin>>m;
	return m;
}

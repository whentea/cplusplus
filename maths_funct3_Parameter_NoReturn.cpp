#include <iostream>
using namespace std;

void calculate_factorial(int m);

int main()
{
    int postint;
	cout<<"Enter a positive integer : ";
    cin>>postint;
	calculate_factorial(postint);
    return 0;
}

void calculate_factorial(int m)
{
    int n, factorial;
	factorial = 1;
    cout << endl;

    for (n=1;n<=m;n++)
    {
        factorial *= n;
        cout<<"Factorial of "<<n<<" is "<<factorial;
        cout << endl;
    }

    cout << endl;

}

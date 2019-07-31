## How to return multiple values from functions in C++ ?  

**Let's see Guys !**  

The methods to return multiple values are references and class-object  

~~~~
// Modified program using References in C++
#include<iostream>
using namespace std;

int main()
{
  int x = 10;
  // ref is a reference to x.
  int& ref = x;
  // Value of x is now changed to 20
  ref = 20;
  cout << "x = " << x << endl ;
  // Value of x is now changed to 30
  x = 30;
  cout << "ref = " << ref << endl ;
  return 0;
}
~~~~~  

```  
#include<iostream>
using namespace std;

void swap (int& first, int& second)
{
    int temp = first;
    first = second;
    second = temp;
}

int main()
{
    int a = 2, b = 3;
    swap(a, b);
    cout << a << " " << b;
    return 0;
}  
```  




Copyright,<br/>
**Wenty**






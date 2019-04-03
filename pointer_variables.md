# Pointers Variables

How to store data on the computer is the first thing should be known before pointers.

Pointers are used in program to access the memory and manipulate the address.

## Address in C++

Each variable you create in your computer is assigned a location in the computer's memory.

To know where the data is stored, C++ has an operator, that is, **&**.

Exercise 1:

```
#include <iostream>
using namespace std;

int main()
{
    int var1 = 3;
    int var2 = 24;
    int var3 = 17;
    cout <<"The address of Var1 is "<< &var1 << endl;
    cout <<"The address of Var2 is "<< &var2 << endl;
    cout <<"The address of Var3 is "<< &var3 << endl;
}
```

The result is

```
The address of Var1 is 0xffffcbcc
The address of Var2 is 0xffffcbc8
The address of Var3 is 0xffffcbc4
```

Pointers Variables are variables that points to a specific address in the memory pointed by another variable.

Exercise 2:

```
#include <iostream>
using namespace std;

int main()
{
   int *pvar1, var1;

    var1 = 15;
    cout << "Address of var1 (&var1): " << &var1 << endl;
    cout << "Value of var1 (var1): " << var1 << endl << endl;

    pvar1 = &var1;    // Pointer pc holds the memory address of variable c
    cout << "Address that pointer pvar1 holds (pvar1): "<< pvar1 << endl;
    cout << "Content of the address pointer pvar1 holds (*pvar1): " << *pvar1 << endl << endl;

    var1 = 8;    // The content inside memory address &c is changed from 5 to 11.
    cout << "Address pointer pvar1 holds (pvar1): " << pvar1 << endl;
    cout << "Content of the address pointer pvar1 holds (*pvar1): " << *pvar1 << endl << endl;

    *pvar1 = 26;
    cout << "Address of var1 (&var1): " << &var1 << endl;
    cout << "Value of var1 (var1): " << var1 << endl << endl;

    return 0;
}
```

The result is

```
Address of var1 (&var1): 0xffffcbc4
Value of var1 (var1): 15

Address that pointer pvar1 holds (pvar1): 0xffffcbc4
Content of the address pointer pvar1 holds (*pvar1): 15

Address pointer pvar1 holds (pvar1): 0xffffcbc4
Content of the address pointer pvar1 holds (*pvar1): 8

Address of var1 (&var1): 0xffffcbc4
Value of var1 (var1): 26
```

## Pointers and Arrays

Pointers are the variables that hold address

Not only can pointers store address of single variable, it can also store address of cells of array.

Exercise 3:

```
#include <iostream>
using namespace std;

int main()
{
    float arr[5];
    float *ptr;

    cout << "Displaying address using arrays: " << endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    // ptr = &arr[0]
    ptr = arr;

    cout<<"\nDisplaying address using pointers: "<< endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << "ptr + " << i << " = "<< ptr + i << endl;
    }

    return 0;
}
```

The result is

```
```

Exercise 4:

```
#include <iostream>
using namespace std;

int main() {
    float arr[5];
    
    cout<<"Displaying address using pointers notation: "<< endl;
    for (int i = 0; i < 5; ++i) {
        cout << arr + i <<endl;
    }

    return 0;
}
```

The result is

```
```

Exercise 5 :

```
#include <iostream>
using namespace std;

int main() {
    float arr[5];
    
   // Inserting data using pointer notation
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; ++i) {
        cin >> *(arr + i) ;
    }

    // Displaying data using pointer notation
    cout << "Displaying data: " << endl;
    for (int i = 0; i < 5; ++i) {
        cout << *(arr + i) << endl ;
    }

    return 0;
}
```

The result is

```
```


 

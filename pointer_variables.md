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
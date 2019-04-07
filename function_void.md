# FUNCTIONS

It's time to talk about function.

Function in the term of programming, is a group codes to perform a specific task. 

It's different from "Function" term in mathematics, which is in mathematics, function is a special relationship.

Function relates an input to an output or an output relates somehow to an input.


## Functions in programming language

There are two types of functions: library function and user-defined function.

## User-Defined Function

Okay, first, let's discuss about what USER-DEFINED FUNCTION is.

Usedefined function means that C++ allows programmers to define their own function.

There are four types of user-defined functions, those can be categorised as : function with

* no argument and no return

* no argument but return value

* argument but no return value

* argument and return value

So, let's see lots more !!

Exercise 1:

```
//It's an example of the void function
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
```



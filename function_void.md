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

The first type function is function with no arguments passed and no return value.

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

Exercise 2:

The second type function is function with no arguments passed but a return value.

```
#include <iostream>
using namespace std;

int factorial();

int main()
{
    int n, m, fact;
    fact = 1;

    m = factorial();
    n=1;
    while (n<=m)
    {
        fact *= n;
        n++;
    }

    cout<<"Factorial of "<<m<<" is "<<fact;
    return 0;

}

int factorial()
{
    int k;
    cout<<"Enter a positive integer : ";
    cin>>k;
    return k;
}

```

Exercise 3:

The third type function is function with arguments passed but no return value.

```
//Argument passed but no return value
#include <iostream>
using namespace std;

void factorial(int k);

int main()
{
    int posint;
    cout<<"Enter a positive integer : ";
    cin>>posint;

    factorial(posint);
    return 0;

}

void factorial(int k)
{
    int n, fact;
    fact = 1;

    n=1;
    while (n<=k)
    {
        fact *= n;
        n++;
    }

    cout<<"Factorial of "<<k<<" is "<<fact;
}
```

Exercise 4:

The fourth type function is function with arguments passed and a return value.

```
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
```

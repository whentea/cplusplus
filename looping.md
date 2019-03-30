## LOOPING

<h1 align="center">
  <br>
  <a href="https://www.completecsharptutorial.com/wp-content/uploads/2016/02/while.jpg"><img src="https://www.completecsharptutorial.com/wp-content/uploads/2016/02/while.jpg" alt="Looping" width="200"></a>
  <br>
  <br>
</h1>

<p align="center">
  <a href="#intro">Introduction</a> •
  <a href="#for">FOR Looping</a> •
  <a href="#dowhile">Do-While Looping</a> •
  <a href="#whiledo">While-Do Looping</a> 
</p>



### Introduction

There are three kinds of looping instructions: FOR, DO-WHILE and WHILE-DO.

Which one would you choose ? Which one you choose will completely depend on the case.

Let's take a closer look at each of the patterns.

---

### FOR Looping

Exercise with For Looping:

```css
#include <iostream>
using namespace std;

int main()
{
    int n, m, factorial;
    factorial = 1;
    cout<<"Enter a positive integer : ";
    cin>>m;

    for (n=1;n<=m;n++)
       factorial *= n;
    cout<<"Factorial of "<<m<<" is "<<factorial;

    return 0;
}
```

---


### Do-While Looping

Exercise with Do-While Looping:

```css
#include <iostream>
using namespace std;

int main()
{
    int n, m, factorial;
    factorial = 1;
    cout<<"Enter a positive integer : ";
    cin>>m;

    n=1;
    do
    {
        factorial *= n;
        n++;
    }
    while(n<=m);

    cout<<"Factorial of "<<m<<" is "<<factorial;
    return 0;
}
```

---


### While-Do Looping

Exercise with While-Do Looping:

```css
#include <iostream>
using namespace std;

int main()
{
    int n, m, factorial;
    factorial = 1;
    cout<<"Enter a positive integer : ";
    cin>>m;

    n=1;
    while (n<=m)
    {
        factorial *= n;
        n++;
    }

    cout<<"Factorial of "<<m<<" is "<<factorial;
    return 0;
}
```


---




with love,

Wenty


## Input/Output, Looping, Break and Continue


<h1 align="center">
  <br>
  <a href="https://cdn-images-1.medium.com/max/1200/1*YU6BvZKvxivoEnvqxeG5rw.png" ><img src="https://cdn-images-1.medium.com/max/1200/1*YU6BvZKvxivoEnvqxeG5rw.png" alt="C++" width="200"></a>
  <br>
  C++ Symbol
  <br>
</h1>


<p align="center">
  <a href="#input-output">Input Output</a> •
  <a href="#conditional">Conditional</a> •
  <a href="#break">Break and Continue</a> •
  <a href="#exercise">Exercise</a> •
  <a href="#license">License</a> 
</p>

### Input Output

Using `cin` to input data that will be proceeded or using `cout` to present the output


### Looping

Using LOOPING statement is simply done for repeating many activities

### Break and Continue

Sometimes the statements need to left unprocessed


### Exercise

### Exercise 1:

```css
//Odd number calculation from 0-50
#include <iostream>
using namespace std;

int main()
{
  int i;
  for (i=1; i<=50; i++)
  {
    if ((i%2)==0) continue;
        cout<<i<<", ";
  }
  return 0;
}
```

Let's execute and see the result


`1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25,`


### Exercise 2:

```css
//Input-Output and Break Instruction
#include <iostream>
using namespace std;

int main()
{
  int start, last, m;
  cout<<"Enter a positive integer as the start number : ";
  cin>>start;
  cout<<"Enter a positive integer as the last number : ";
  cin>>last;
  for (m=start; m<=last; m++)
  {
    if ((m%2)==0)
        continue;
    if (m==25)
        break;
    cout<<m<<", ";
  }
  return 0;
}
```

Let's execute and see the result if the start number is 1 and the last number is 50:

`Enter a positive integer as the start number :`

`Enter a positive integer as the last number :`

`1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25,`



### License

Permission is hereby granted, free of charge (hehehe)

---

with love,

Wenty

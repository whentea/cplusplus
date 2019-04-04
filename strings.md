# STRINGS

String is a collection of characters.

## How to define

char mystate[100]; 

char mystate[ ] = "Merdeka";

char mystate[100] = "Merdeka";

Notice that, a null character is added to the end of the string automatically.

## A word and more than one word

```
#include <iostream>
using namespace std;

int main()
{
    char str[50];
    char str1[50];

        //more than one word
    cout << "\nEnter two or more words : ";
    cin.get(str1, 50);
    cout << "You entered :" << str1 <<endl;

    //one word
    cout << "Enter a word : ";
    cin >> str;
    cout << "You entered :" << str;

    cout << "\nEnter two or more words : ";
    cin >> str;
    cout << "You entered :" << str;

    return 0;
}
```

## String Object

```
#include <iostream>
using namespace std;

int main()
{
    string mystate;
    cout << "Enter a string: ";
    getline(cin, mystate);

    cout << "You entered: " << mystate << endl;
    return 0;
}
```
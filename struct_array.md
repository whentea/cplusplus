# Structure and Array

Structure is a collection of variables of different data types under a single name _[programiz.com]_(https://www.programiz.com/cpp-programming/structure)

## How to declare Structure

Exercise 1:

```
#include <iostream>
using namespace std;

struct Student
{
    char name[50];
    int age;
    float GPA;
};


int main()
{
   Student S1;
   cout << "Enter full name : ";
   cin.get(S1.name,50);
   cout << "Enter age : ";
   cin >> S1.age;
   cout << "Enter GPA : ";
   cin >> S1.GPA;

   cout << "\nDisplaying Information." << endl;
   cout << "Name : " << S1.name << endl;
   cout << "Age : " << S1.age << endl;
   cout << "GPA : " << S1.GPA << endl;

   return 0;
}
```

## Structure and Array

Exercise 2:

```
#include<iostream>
using namespace std;

struct Student
{
    char name[50];
    int age;
    float GPA;
};

int main()
{
    Student Stud[3];
    int i;

    for (i=0;i<3;i++)
    {
        cout << "\nEnter detail of " << i+1 << "Student" << endl;
        cout << "Enter name : ";
        cin >> Stud[i].name;
        cout << "Enter age : ";
        cin >> Stud[i].age;
        cout << "Enter GPA : ";
        cin >> Stud[i].GPA;
    }

    cout << "\nDetail Students" << endl;
    for (i=0;i<3;i++)
        cout << "\n" << Stud[i].name <<"\t"<< Stud[i].age <<"\t"
        << Stud[i].GPA;

    return 0;
}

```




 

#include <iostream>
using namespace std;
struct Complex
{
 int real;
 float img;
};

int main()
{
  // creating a Complex structure variable
  Complex var1;
  /* creating a pointer of Complex type &
    assigning address of var1 to this pointer */
  Complex* ptr = &var1;
  //Kalau hanya dideklarasikan dengan spt ini Complex* ptr; ---tidak akan bisa

  /* assigning values to
   Complex variable var1 */
  var1.real = 5;
  var1.img = 0.33;

 // accessing values of var1 using pointer
 cout<<"Real part: "<<ptr->real<<endl;
 cout<<"Imaginary part: "<<ptr->img;

 return 0;
}

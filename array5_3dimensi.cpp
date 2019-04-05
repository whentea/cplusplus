// arrays as parameters
#include <iostream>

using namespace std;

int main()
{
  int array3[2][3][4];
  int i,j,k;

  cout <<"Memasukkan angka matrik."<<endl;
  for (i=0; i<2; ++i)
  {
    for (j=0; j<3; ++j)
    {
        for (k=0; k<4; ++k)
        {
            cout << "Angka indek ke ["<<i<<"] ["<<j<<"] ["<<k<<"] = ";
            cin>>array3[i][j][k];
        }
    }
  }

 cout <<endl;
 cout <<"Menampilkan angka array.\n";

 for (i=0; i<2; ++i)
  {
    for (j=0; j<3; ++j)
    {
        for (k=0; k<4; ++k)
        {
            cout << "Angka indek ke ["<<i<<"] ["<<j<<"] ["<<k<<"] adalah "<<array3[i][j][k]<<endl;

        }
    }
  }
  return 0;
}

//Matrik 2 dimensi
#include <iostream>
using namespace std;

int main()
{
int matrikdua[3][2]={{1,2},{3,4},{5,6}};
int i,j;
//Tampilan awal
cout<<"Tampilan bentuk matrix :\n";
for (i=0; i<3; i++)
{
    for (j=0; j<2; j++)
    {
        cout<<matrikdua[i][j]<<" ";
    }
    cout <<endl;
}

cout <<endl;
cout<<"Data matrik : ";
cout<<endl;
for (i=0; i<3; i++)
{
    for (j=0; j<2; j++)
    {
        cout<<"Isi Array Matrikdua dengan indek : ["<<i<<"]["<<j<<"] adalah "<<matrikdua[i][j];
        cout <<endl;
    }
}
return 0;
}

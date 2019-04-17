//Two Dimension Matrix
#include <iostream>
using namespace std;

int main()
{
int matrikdua[3][2]={{8,9},{1,2},{6,7}};
int i,j;
int jml_baris, jml_kolom;

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
cout<<"Indexed Data of the matrix : ";
cout<<endl;
for (i=0; i<3; i++)
{
    for (j=0; j<2; j++)
    {
        cout<<"Isi Array Matrikdua dalam indek : ["<<i<<"]["<<j<<"] adalah "<<matrikdua[i][j];
        cout <<endl;
    }
}

cout <<endl;
cout<<"Calculate in Horizontal Line ";
cout<<endl;
for (i=0; i<3; i++)
{
    jml_baris=0;
    for (j=0; j<2; j++)
    {
        jml_baris = jml_baris + matrikdua[i][j];
    }
    cout<<"Jumlah baris ke : "<<i+1<<" adalah "<<jml_baris<<endl;

}


cout <<endl;
cout<<"Calculate in Vertical Line ";
cout<<endl;

for (j=0; j<2; j++)
{
    jml_kolom=0;
    for (i=0; i<3; i++)
    {
        jml_kolom = jml_kolom + matrikdua[i][j];
    }
    cout<<"Jumlah kolom ke : "<<j+1<<" adalah "<<jml_kolom<<endl;
}
return 0;
}

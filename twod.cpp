#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the value of m and n";
    cin>>m>>n;
    int a[m][n],i=0,j=0;
    cout<<"Enter the element in an array";
    for(i=0;i<m;i++)
    {
for(j=0;j<n;j++)
{
    cin>>a[i][j];
}
}
    for(i=0;i<m;i++)
    {
for(j=0;j<n;j++)
{
    cout<<a[i][j];
}
cout<<endl;
    }
    
    }
    


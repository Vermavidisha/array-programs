#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter the number";
    cin>>size;
    int a[size],b[size],j=0,i=0,count;
    cout<<"Enter the elements in an array";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
        b[i]=-1;
    }
    for(i=0;i<size;i++)
    {
        count=1;
        for(j=0+i;j<size;i=j++)
        {
           if(a[j]==a[i])
           {
               b[j]=0;
               count++;
           }
        }
        if(b[i]!=0)
        {
            b[i]=count;
        }
    }
    for(i=0;i<size;i++)
    {
    if(b[i]!=0)
    {
        cout<<a[i]<<b[i];
    }
    }
    return 0;
}
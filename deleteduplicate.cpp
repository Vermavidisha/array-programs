#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter the size";
    cin>>size;
    int a[size],i=0,j=0,k=0,count=0;
    cout<<"Enter the elementsin an array";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    for(i=0,k=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[j]==a[i])
            {
                break;
            }
        }
    if(j==size)
    {
        a[k]=a[i];
        k++;
    }
}
cout<<"Unique elements are";
for(count=0;count<k;count++)
{
    cout<<a[count];
}
    return 0;
}
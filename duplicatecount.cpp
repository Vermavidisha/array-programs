#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter the number";
    cin>>size;
    int a[size],j=0,i=0,count=0;
    cout<<"Enter the elements in an array";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                count=count+1;
                break;
            }
        }
    }
    cout<<"Duplicate number"<<count;
    
    return 0;
}
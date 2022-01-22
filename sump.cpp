#include<iostream>
using namespace std ;
int main()
{
    int size;
    cout<<"Enter the size";
    cin>>size;
    int a[size],sum=o=0;p=1,i=0;
    for(i=0;i<size;i++)
    {
cin>>a[i];
    }
    for(i=0;i<size;i++)
    {
        sum=sum+a[i];
        p=p*a[i];
    }
    cout<<"Sum of elements"<<sum;
    cout<<"product of elements"<<p;
    return 0;
}
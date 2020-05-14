#include<iostream>
using namespace std;
void miniMaxSum(long int a[])
{
    long int i,sum=0;
    for( i=0;i<5;i++)
    {
        sum+=a[i];
    }
    long int min=sum-a[0],max=sum-a[0];
    for(i=0;i<5;i++)
        {
        if((sum-a[i])<min)
              min=sum-a[i];
        if((sum-a[i])>max)
              max=sum-a[i];
         }
    cout<<min<<" "<<max;
}
int main()
{
    long int arr[5];
    for(int i=0;i<5;i++)
        cin>>arr[i];
    miniMaxSum(arr);
    return 0;
}


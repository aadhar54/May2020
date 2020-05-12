#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i = 0;
    int count;
    int max = INT_MIN;
    int arr[n];
    for(i=0; i<n; i++)
    {
     cin>>arr[i];
     if(arr[i]>max)
     {
        max = arr[i];
        count = 1;
     }
     else if(arr[i]==max)
     count++;
    }
    cout<<count<<endl;
}
   


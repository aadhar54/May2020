#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,2,3,1,5};
    int n= sizeof(arr)/ sizeof(arr[0]);
    sort(arr,arr+n,greater<int>()); //sorting the array in descending order.
    int sum=0;
    for (int i = 0; i < 4; ++i) {
        sum+=arr[i];
    }
    cout<<sum<<" "; //Max sum
    sum=0;
    for (int j = 1; j <5 ; ++j) {
        sum+=arr[j];
    }
    cout<<sum<<" ";//min sum
    return 0;
}

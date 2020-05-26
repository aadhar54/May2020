//
//  main.cpp
//  doubt
//
//  Created by Suyash Dubey on 23/05/20.
//  Copyright © 2020 Suyash Dubey. All rights reserved.
//

#include<iostream>
using namespace std;
void takeArray(int *arr){
cout<<"In this take Array function"<<endl;
cout<<sizeof(arr)<<endl;
}
// In this function why is the size of array 8 and not 60?
//The SizeOf on array function parameter will return the size of int* instead of int[]. In this case arr is declared as pointer, so it returns how many bytes are taken by the hexadecimal value of the memory location which will be 8.
void takeArray2(int arr[]){
cout<<"In this take Array function"<<endl;
cout<<sizeof(arr)<<endl;
cout<<arr[1]<<arr[2]<<arr[3]<<arr[4]<<arr[5]<<endl;
}
int findSum(int *arr,int n){
int sum =0;
for(int i=0;i<n;i++){
sum = sum + *(arr + i);
}
return sum;
}
int main(){
int arr[] = {1,2,3,4,5,3,3,4,5,5,2,6,6,7,78};
cout<<"In Main"<<endl;
cout<<sizeof(arr)<<endl;
int l = sizeof(arr)/sizeof(arr[0]);
takeArray(arr);
takeArray2(arr);
findSum(arr , l);
int n = sizeof(arr)/sizeof(int);
cout<<n<<endl;
return 0;
}

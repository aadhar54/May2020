#include<iostream>
using namespace std;

int main(){

	int a[100];

	a[0]=5;

	int b[5];
	for(int j=0;j<5;j++){

		cin>>b[j];
		cout<<b[j]<<endl;
	}



/*
	cout<<a[0]<<endl;
	cout<<a[1]<<endl;
	cout<<a[2]<<endl;
*/
	cout<<sizeof(a)<<endl;
/*
	for(int i=0;i<=99;i++)
		a[i]=i+1;
	for(int i=0;i<=99;i++)
		cout<<a[i]<<endl;
*/
	return 0;
}
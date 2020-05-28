#include<iostream>
#include<math.h>
using namespace std;
int prime(int x)
{
	if(x==1)
	       return 0;
	for(int j=2;j<=sqrt(x);j++)
	{
		if(x%j==0)
		     return 0;
	}
	return 1;
}
int main()
{
	int n,i;
	cout<<"Enter a positive integer:";
	cin>>n;
	for(i=1;i<=n/2;i++)
	{
		if(prime(i)==1)
		{
			if(prime(n-i)==1)
			    cout<<n<<"="<<i<<"+"<<n-i<<endl;
		}   
	}
	return 0;
 } 

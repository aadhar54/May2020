#include<iostream>
using namespace std;
int birthdayCakeCandles(int ht[],int n)
{
	int max=ht[0],c=0;
	for(int i=0;i<n;i++)
	{
		if(ht[i]>max)
		    {
		    	max=ht[i];
		    	c=1;
			}
		else if(ht[i]==max)
		{
			c++;
		}
	}
	return c;
}
int main()
{
	int n,i;
	cin>>n;
	int ht[n];
	for(i=0;i<n;i++)
	    cin>>ht[i];
	int b=birthdayCakeCandles(ht,n);
	cout<<b;
	return 0;
}

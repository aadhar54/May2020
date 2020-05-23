#include <iostream>
using namespace std;
void findmaj(int a[],int n)
{
    int maxc=0;
    int index=-1;
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        
        if(c>maxc)
        {
            maxc=c;
            index=i;
        }
    }
    if(maxc>n/2)
    cout<<"Majority element is:"<<a[index];
    else
    cout<<"Majority element not found";
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	         {cin>>a[i];}
	   findmaj (a,n);
	    }
	    return 0;
	}

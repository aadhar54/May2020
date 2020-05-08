
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <map>
#include <cctype>
#include <vector>
#include <string>
#include <limits.h>
#include <set>

using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
    
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int test;
    cin>>test;
    while(test--)
    {
    	int x, y, M;
    	cin>>M>>x>>y;
    	vector <int> v;
    	int i;
    	int num;
    	for(i=0; i<M; i++)
    	{
    		cin>>num;
    		v.push_back(num);
    	}
    	int range = x*y;
    	int ul=0, ll=0;
        bool check[101] = {false};
    	for(i=0; i<M; i++)
    	{
    		ul = v[i]+range;
    		ll = v[i]-range;
    		for(int j = 1; j<=100; j++)
    		{
    			if(j>=ll && j<=ul)
    				{
    					if(check[j]==false)
    						check[j] = true;
    				}

    		}
    		
    	}
    	int count=0;
    	for(i=1; i<=100; i++)
    	{
    		if(check[i]==false)
    			count++;
    	}
        cout<<count<<endl;
    }
    return 0;
}
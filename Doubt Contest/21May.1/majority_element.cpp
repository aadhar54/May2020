#include <bits/stdc++.h>

#define ff              first
#define ss              second
//#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int, int>
#define mci             map<char,int>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define rep(i,x,y) for(int i=x;i<y;i++)
#define repr(i,x,y) for(int i=x;i>=y;i--)
using namespace std;
signed main()
{

    ios_base::sync_with_stdio(false);cin.tie(NULL);

  w(x)
  {
    int n;
    cin>>n;
    
    mii MyMap;
    int num;
    rep(i, 0, n)
    {
      cin>>num;
      MyMap[num]++;
    }
    mii::iterator it;
    int ele;
    int flag = 0;
    for(it = MyMap.begin(); it!=MyMap.end(); ++it)
    {
      if(it->second>=ceil(n/2.0))
      {
        ele = it->first;
        flag++;
      }
    }
    if(flag==0)
      cout<<"-1"<<endl;
    else
      cout<<ele<<endl;;
  }
    
 cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}
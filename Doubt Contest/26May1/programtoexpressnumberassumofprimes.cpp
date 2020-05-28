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
#define rep(i,x,y)  for(int i=x;i<=y;i++)
#define repr(i,x,y) for(int i=x;i>=y;i--)
#define ll unsigned long long
using namespace std;
int checkPrime(int n)
{
  int count = 0;
  rep(i, 1, n)
  {
    if(n%i==0)
      count++;
  }
  if(count==2)
    return 1;

  return 0;
}
signed main()
{

    ios_base::sync_with_stdio(false);cin.tie(NULL);
int n;
cin>>n;
int i;
int check = 0;
for(i=1; i<=n/2; i++)
{
  if(checkPrime(i))
  {
    if(checkPrime(n-i))
    {
      cout<<n<<" = "<<i<<"+"<<(n-i)<<endl;
      check++;
    }
  }
}
if(check==0)
cout<<n<<" can't be expressed as sum of two primes"<<endl;

   
 cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

  
return 0;
}
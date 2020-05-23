#include <bits/stdc++.h>
using namespace std;
int main() {
    //code
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<pair<int,int>>vec;
        for(int i=0; i<n; i++){
            int k; cin>>k;
            vec.push_back(make_pair(k,i));
        }
        sort(vec.begin(),vec.end());
        int lindx=vec[n-1].second; int len=0;
        for(int i=n-2; i>=0; i--){
            if(vec[i].second < lindx){
                len=max(len, lindx-vec[i].second);
                
            } else {
                lindx = max(lindx,vec[i].second);
            }
        }
        cout<<len<<endl;
    }
    return 0;
}
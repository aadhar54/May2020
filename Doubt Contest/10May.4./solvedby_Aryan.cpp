#include<iostream>
#include <string>
using namespace std;
string s;
void swap(int x,int y){
    char temp;
    temp=s[x];
    s[x]=s[y];
    s[y]=temp;
    cout<<s<<" ";
}
int main(){
    cout<<"Enter the number";
    cin>>s;
    cout<<s<<" ";
    for (int i = 0; i < s.length(); ++i) {
        for (int j = 0; j < s.length(); ++j) {
            if(i==j)
                continue;
            else
                swap(i,j);
        }

    }
    return 0;
}

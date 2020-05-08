// I have made some changes to the code and explained the changes below the code
#include <bits/stdc++.h>

using namespace std;


int main()
{ 
    int a=0,b=0,c=0;
    float x,y,z;

    int n,i;
    //int pos;
//     pos>0;
//    int neg;
//     neg<0;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
     cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i] < 0)
          a++;
       if(arr[i] > 0)
          b++;
       if(arr[i]==0)
          c++;
}

x=(float)b/n;
y=(float)a/n;
z=(float)c/n;
cout<<x<<endl<<y<<endl<<z;
return 0;
}

/* Things I have done:
1) I have commented out pos and neg because I don't think it's a logical statment in this case. This is because if i say pos is any
value greater than 0 it could be any garbage value. Same goes for neg. I have also edited the if statements because of the same reason. 
2) I have type casted values of x, y, and z. Without type casting, the right side of the = sign was evaluating to int value which means
it will ignore all the decimal values after 0. It will just return 0. By type casting, it will ensure it doesn't evualuate to int val and
will preserve the decimal values.



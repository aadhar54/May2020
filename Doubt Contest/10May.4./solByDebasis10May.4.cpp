
#include <bits/stdc++.h> 
using namespace std; 
int countdigits(int N) 
{ 
    int count = 0; 
    while (N) { 
        count++; 
        N = N / 10; 
    } 
    return count; 
} 
void cyclic(int N) 
{ 
    int num = N; 
    int n = countdigits(N); 

    while (1) { 
        cout << num << endl; 

        int rem = num % 10; 
        int div = num / 10; 
        num = (pow(10, n - 1)) * rem + div; 
 
        if (num == N) 
            break;       
    } 
} 


int main() 
{ 
    int N = 5674; 
    cyclic(N); 
    return 0; 
} 

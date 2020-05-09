//If a string or array is identical even upon flipping it, it is a palindrome
//Example: "aba", "malayalam", "1234321" 
//If i flip aba it will still stay aba, same with malayalam and 1234321
//So they are said to be palindrome

#include <iostream>

using namespace std;

int main()
{
  int t, n;
  string s;
  bool flag = 1;
  cin >> t;
  while(t--)
  {
    cin >> n;
    cin >> s;
    int left = 0;
	int right =  n - 1;
	while(left < right)
	{
		if(s[left] != s[right]) 
		{
		   flag = 0;
           break;
		}else{
			left++;
			right--;
		}
	}
	if(flag == 0)
	{
		cout << "No" << endl;
	}else{
		cout << "Yes" << endl;
	}

  }
}
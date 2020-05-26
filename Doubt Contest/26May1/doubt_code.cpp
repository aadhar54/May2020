#include<iostream>                                //program to check whether a number entered can be expressed as a sum of two prime numbers 
#include<cmath>
using namespace std;

int primeno(int a , int b)
{
	  int i, j;
	 
	  for(i=1;i<a;i++){                                //function to choose int a as a prime no.
	  	a % i !=0 ;
	 }
	 
	  for(j=1;j<b;j++){                                //function to choose int b as a prime no.
	  	b % j !=0 ;
	  }
	return a,b ; 
}

int main()                                              //driver function.
{
	int c,a,b ;
	
	cout<<"Enter a no. : "<<endl;
   	cin>>c;                                            //Taking in input from user for a random integer .
	
	int primeno(int a, int b);                         //calling the function defined earlier 
	
	if(c = a + b )                                      //checking whether c can be expressed as sum of two prime numbers 
	{
		cout<<"\nThe no. can be expressed as a sum of two prime numbers as :  "  <<*(&c) = *(&a) + *(&b) << endl ;	// facing doubt in here as how to print the value of 'c' , value of 'a' and value of 'b' if the condition satisfies
	}
	
	else{
		cout<<"\nThe no. can't be expressed as a sum of two prime no." <<endl;
	}
	
	return 0;
}

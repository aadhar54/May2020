#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i=0;
	char str[100];
	cin>>str;

	
		while(str[i]!='?')
		{
			i++;
	    }   
		i++; 
			
		while(i<strlen(str))
	 	{
			   while(str[i]!='=')
			   {
				 cout<<str[i];
				 i++;
			   }
			    cout<<": ";
		     	i++;
		    	while(str[i]!='&'&&str[i]!='\0') 
				{
                         cout<<str[i];
						 i++;
				}
			   if(str[i]=='&') 
				{
					cout<<"\n";       
		    	    i++;
				}
				else
				     return 0;
		}
		return 0;
}

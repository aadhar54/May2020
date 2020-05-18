/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;int x;
    std::size_t pos = s.find("username");
    if(pos!=string::npos) {
        x = (int) pos + 9;
        cout << "username: ";
        while (s[x] != '&') {
            cout << s[x];
            x++;
        }
        cout << endl;
        x = x + 5;
        cout << "pwd: ";
        while (s[x]!= '&' ) {
            cout << s[x];
            x++;
        }
        if(s[x+1]!='p'){
                cout<<s[x];
                x++;
            while(s[x]!='&'){
                cout<<s[x];
                x++;
            }
        }
        cout << endl;
        x = x + 9;
        cout << "profile: ";
        while (s[x] != '&') {
            cout << s[x];
            x++;
        }
        if(s[x+1]!='r'){
            cout<<s[x];
                x++;
            while(s[x]!='&'){
                cout<<s[x];
                x++;
            }
        }
        cout << endl;
        x = x + 6;
        cout << "role: ";
        while (s[x] != '&') {
            cout << s[x];
            x++;
        }
        cout << endl;
        x = x + 5;
        cout << "key: ";
        while (s[x] != '\0') {
            cout << s[x];
            x++;
        }
    }
    return 0;
}

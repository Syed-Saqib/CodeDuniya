#include<iostream>

// For sentecnces and words we use string
using namespace std;
int main(){
    string s1;
    string s2;
    cout<<"Enter the input:";
    cin>> s1>> s2;
    cout<< s1 << " " << s2;
    return 0;
}

// Getline is used to get the entire line of a string.
#include <iostream>  
#include<string.h>  
using namespace std;  
int main()  
{  
string name; // variable declaration  
cout << "Enter your name :" << endl;  
cin>>name;  
cout<<"\nHello "<<name;  
return 0;  
}  

// In the above code when we give input for example "John Doe" then the output comes only "John"
// To solve this issue the "getline" function came into existence.
#include <iostream>  
#include<string.h>  
using namespace std;  
int main()  
{  
string name; // variable declaration.  
cout << "Enter your name :" << endl;  
getline(cin,name); // implementing a getline() 
cout<<"\nHello "<<name;  
return 0;}  


// Prgram for the size of a datatype


#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "The size of bool is " << sizeof(bool) << " byte(s)." << endl;
    cout << "The size of char is " << sizeof(char) << " byte(s)." << endl;
    cout << "The size of short is " << sizeof(short) << " byte(s)." << endl;
    cout << "The size of int is " << sizeof(int) << " byte(s)." << endl;
    cout << "The size of long is " << sizeof(long) << " byte(s)." << endl;
    cout << "The size of float is " << sizeof(float) << " byte(s)." << endl;
    cout << "The size of double is " << sizeof(double) << " byte(s)." << endl;
    return 0;
}



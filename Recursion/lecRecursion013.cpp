//c++ program for checking if a string is palindrome or not

#include<iostream>
#include<string.h>
using namespace std;

bool palindrome(string s , int start, int end)
{
    if(start>end)
    {
        return true;
    }
    if(s[start]!=s[end])
    {
       return false;
    }
    else{
        return palindrome(s, start+1, end-1);
    }
}
int main(){
    string s;
    cout<<"Enter a string : \t";
    cin>>s;

    bool check = palindrome(s, 0, s.length()-1);

    if(check)
    {
        cout<<"The string "<<s<<" is a Palindrome"<<endl;
    }
    else
    {
         cout<<"The string "<<s<<" is NOT a Palindrome"<<endl;
    }

return 0;
}



/*

                I       J    
                MALAYALAM


                I   J 
                AYUSH


*/
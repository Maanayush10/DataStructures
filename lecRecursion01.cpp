#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter the number whose factorial you want"<<endl;
    cin>>n;

    int ans= factorial(n);
    cout<<"The factorial of the number is : "<<ans<<endl;
return 0;
}

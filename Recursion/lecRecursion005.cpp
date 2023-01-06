//c++ program to calculate the nth fibonacci number

//using 1 based indexing NOT 0 based indexing
#include<iostream>
using namespace std;


//using Recursion
int fib(int n)
{
    if(n<2)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    return fib(n-1)+fib(n-2);
}


//using for loop
int fibUsingForLoop(int n)
{
    int ans;
    int a=0, b=1;
    for(int i =3; i<=n; i++)
    {
       ans= a + b;
       a=b;
       b=ans;
    }
    return ans;
}

//main program
int main(){
    int num;
    cout<<"Enter the value of N : ";
    cin>>num;

    int ans=fib(num); //dynamic initialisation

    int ans2= fibUsingForLoop(num);

    cout<<"The "<<num<<"th Fibonacci number is : "<<ans<<endl;
    cout<<"The "<<num<<"th Fibonacci number using For Loop is : "<<ans2<<endl;

return 0;
}

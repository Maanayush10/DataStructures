//Recursive program for calculation 2^n;

#include<iostream>
using namespace std;

double power(double n)
{
    if(n==0)
    {
        return 1;
    }
    return 2 * power(n-1);
}
int main(){
    int pow;
    cout<<"Enter the exponent power: "<<endl;
    cin>>pow;

    double ans=power(pow);

    cout<<"The Required number is : "<<ans<<endl;
return 0;
}

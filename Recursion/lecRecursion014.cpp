//C++ program to calculate a raised to power b

#include<iostream>
using namespace std;

int calcPower(int a, int b)
{
    // count++;
    if(b==1)
    {
        return a;
    }
    else
    {
        return a*calcPower(a, b-1);
    }

}
int main(){
    int a , b;
    cout<<"Enter the value of a :\t";
    cin>>a;
    cout<<"Enter the value of b :\t";
    cin>>b;

    int power= calcPower(a ,b);

    cout<<"The expected output is :" <<power<<endl;


return 0;
}

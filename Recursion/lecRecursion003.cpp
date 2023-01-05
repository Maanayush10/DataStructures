//C++ program to count in decreasing order from the number given Recursively

#include <iostream>
using namespace std;

void Counting(int n)
{
    if(n==0)
    {
        return ;
    }
    cout<<" "<<n<<" ";
    Counting(n-1);
}
int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;

    Counting(num);
    return 0;
}

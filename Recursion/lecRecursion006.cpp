// recursive program for finding ways to climb the Nth Stair in c++

#include <iostream>
using namespace std;

int climb(int n)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }

    return climb(n - 1) + climb(n - 2);
}
int main()
{

    int num;
    cout << "Enter the Stair number : ";

    cin >> num;
    int ans = climb(num);
    cout << "The number of ways in which you can climb " << num << "th stair is : " << ans << endl;

    return 0;
}

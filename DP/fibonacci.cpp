#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fib(int n, vector<int> &dp)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
}
int main()
{
    int num;
    cout << "Enter a number:\t";
    cin >> num;

    vector<int> dp(num + 1);
    for (int i = 0; i <=num; i++)
    {
        dp[i] = -1;
    }
    int fibNum = fib(num, dp);
    cout << "The nth fibonacci number is :\t" << fibNum;

    return 0;
}
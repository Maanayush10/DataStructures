#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//bottom-up approach
int fib2(int n)
{
    int dp[n+1];

    dp[0]=0;
    dp[1]=1;

    for (int i = 2; i <= n; i++)
    {
        dp[i]= dp[i-1]+dp[i-2];
    }
    return dp[n];
}
//top down apprach
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
    cout << "The nth fibonacci number is :\t" << fibNum<<endl;
    cout << "The nth fibonacci number is :\t" << fib2(num)<<endl;

    return 0;
}

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//top-down approach DP
int solve(vector<int> &cost, int n, vector<int>&dp)
{
    if(n==0 || n==1)
    {
        return cost[n];
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    dp[n]= min(solve(cost, n-1, dp), solve(cost, n-2, dp))+ cost[n];
    return dp[n];
}

//Bottom up approach DP tabulation
int solve2(vector<int> &cost, int n)
{
    vector<int> dp(n+1);
    dp[0]=cost[0];
    dp[1]=cost[1];
    for(int i=2; i<=n; i++)
    {
        dp[i]= min(dp[i-1],dp[i-2])+cost[i];
    }
    return dp[n];
}


//space optimisation
int solve3(vector<int> &cost, int n)
{
    // vector<int> dp(n+1);
    int prev2=cost[0];
    int prev1=cost[1];
    for(int i=2; i<n; i++)
    {
        int curr= min(prev1, prev2)+cost[i];
        prev2= prev1;
        prev1 = curr;

    }
    return min(prev1, prev2);
}

int main()
{
    vector<int> cost={1,100,1,1,1,100,1,1,100,1};
    int n= cost.size();
    vector<int> dp(n+1, -1);

    int ans = min(solve(cost, n-1 ,dp),solve(cost, n-2, dp));
    int ans2 = min(solve2(cost, n-1),solve2(cost, n-2));
    int ans3 = solve3(cost, n);
    cout<<"Minimum cost: "<<ans<<endl;
    cout<<"Minimum cost: "<<ans2<<endl;
    cout<<"Minimum cost: "<<ans3<<endl;
    
return 0;
}

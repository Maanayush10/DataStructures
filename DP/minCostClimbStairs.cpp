#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define MOD 100000007

/*


class Solution {
public:
    //Recursive solution -----> TLE
    int solve(vector<int> & cost, int n)
    {
        if(n==0 || n==1)
        {
            return cost[n];
        }
        int ans= cost[n]+ min(solve(cost, n-1), solve(cost, n-2));
        return ans;
    }

    //DP solution
    int solve2(vector<int> & cost, int n, vector<int> &dp)
    {
        //BASE CASE
        if(n==0 || n==1)
        {
            return cost[n];
        }

        //STEP 3
        if(dp[n]!=-1)
        {
            return dp[n];
        }

        //STEP2
        dp[n]= cost[n]+ min(solve2(cost, n-1, dp), solve2(cost, n-2, dp));
        return dp[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        // int n = cost.size();
        // int ans = min(solve(cost, n-1), solve(cost , n-2));
        // return ans;


        int n = cost.size();
        vector<int> dp(n+1, -1);  //STEP 1
        int ans = min(solve2(cost, n-1, dp), solve2(cost , n-2, dp));
        return ans;
    }
};




*/
//implementing  recursion---> not the solution, just some rev to recursion
int solve(long long nStairs, int i)
{
    if(i==nStairs)
    {
        return 1;
    }
    if(i>nStairs)
    {
        return 0;
    }

    return(solve(nStairs, i+1)+solve(nStairs, i+2));
}

int solve2(vector<int> &cost, int n)
{
    //base case
    if(n==0)
    {
        return cost[0];
    }
    if(n==1)
    {
        return cost[1];
    }
    int ans= min(solve2(cost, n-1), solve2(cost, n-2))+ cost[n];
    return ans;
}

int main(){
    int nStairs;
    // cout<<"Enter the number of stairs :\t";
    // cin>>nStairs;

    vector<int> cost ={1,100,1,1,1,100,1,1,100,1};
    // cout<<"The number of ways of climbing N stairs :\t"<<solve(nStairs,0)<<endl;
    cout<<"The number of ways of climbing N stairs :\t"<<solve2(cost,10)<<endl;
return 0;
}
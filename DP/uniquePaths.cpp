#include <bits/stdc++.h>
using namespace std;

int myFunc2(int m, int n)
    {
        int t[m+1][n+1];
        for(int i=0; i<=m;i++ )
        {
            for(int j=0; j<=n; j++)
            {
                if(i==0 || j==0)
                {
                    t[i][j]=1;
                    continue;
                }
                t[i][j]= t[i-1][j]+t[i][j-1];
            }
        }
        return t[m][n];

    }
    int myFunc(int m, int n, vector<vector<int>>&dp)
    {
         if(m<0 || n<0)
        {
            return 0;
        }
        if(dp[m][n]!=-1)
        {
            return dp[m][n];
        }
        if(m==0 && n==0)
        {
            // dp[m][n]=1;
            return dp[m][n]=1;
        }
        dp[m][n]=myFunc(m-1, n, dp)+myFunc(m,n-1, dp);

        return dp[m][n];

    }


    int revFunc(int m, int n, vector<vector<int>>& dp)
    {
        if(m<0 || n<0)
        {
            return 0;
        }
        if(dp[m][n]!=-1){return dp[m][n];}
        if(m==0 && n==0)
        {
            return dp[m][n]=1;
        }
        int up= revFunc(m, n-1, dp);
        int left= revFunc(m-1, n, dp);

        dp[m][n]= up+left;
        return dp[m][n];
    }
    int uniquePaths(int m, int n) {
        // vector<vector<int>> dp(m, vector<int>(n,-1));
        // return myFunc(m-1,n-1, dp);
        // return myFunc2(m-1,n-1);

        vector<vector<int>>dp(m, vector<int>(n, -1));
        return revFunc(m-1,n-1, dp);
    }

int main()
{
  return 0;
}

#include<bits/stdc++.h>
using namespace std;

//shouttout to striver
//memoization solution
int f(int day, int last, vector<vector<int>> &points, vector<vector<int>>&dp)
{
    int result=0;
    if(dp[day][last]!=-1){return dp[day][last];}
    if(day==0)
    {
        int maxi=INT_MIN;
        for(int i=0; i<3; i++)
        {
            if(i!=last)
            {
                maxi= max(maxi, points[0][i]);
            }
        }
        return dp[day][last]=maxi;
    }

    int maxi=INT_MIN;
    for(int j=0; j<3; j++)
    {
        if(j!=last)
        {
            int currPoints=points[day][j]+f(day-1, j, points,dp);
            maxi= max(maxi,currPoints);
        }
    }
    dp[day][last]= maxi;
    return dp[day][last];
}



//recursive solution
int f(int day, int last, vector<vector<int>> &points)
{
    int result=0;
    if(day==0)
    {
        int maxi=INT_MIN;
        for(int i=0; i<3; i++)
        {
            if(i!=last)
            {
                maxi= max(maxi, points[0][i]);
            }
        }
        return maxi;
    }

    int maxi=INT_MIN;
    for(int j=0; j<3; j++)
    {
        if(j!=last)
        {
            int currPoints=points[day][j]+f(day-1, j, points);
            maxi= max(maxi,currPoints);
        }
    }
    result= maxi;
    return result;
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    return f(n-1, 3, points);
}

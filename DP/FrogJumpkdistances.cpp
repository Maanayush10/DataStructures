#include<bits/stdc++.h>
using namespace std;
int f(int index, vector<int> &height, int k, vector<int>&dp)
{
    if(index==0){return 0;}
    if(dp[index]!=-1){return dp[index];}
    int minusK=INT_MAX;
    for(int i=1; i<=k; i++)
    {
        int minusS=INT_MAX;
        if(index-i>=0)
        {
            minusS= f(index-i, height, k, dp)+abs(height[index]-height[index-i]);
            minusK=min(minusK, minusS); 
        }
    }
    dp[index]=minusK;
    return dp[index];
    
}
int minimizeCost(int n, int k, vector<int> &height){
    // Write your code here.
    vector<int> dp(n+1, -1);
    return f(n-1, height, k, dp);

}
int main()
{
//main logic here
return 0;
}

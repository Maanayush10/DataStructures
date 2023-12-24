#include<bits/stdc++.h>
using namespace std;
//using DP 
//made a helper function f()
int f(int index, vector<int> &heights, vector<int> &dp)
{
    if(index==0){return 0;}
    
    if(dp[index]!=-1){return dp[index];}
    int minusOne= f(index-1, heights, dp)+abs(heights[index]- heights[index-1]);
    int minusTwo=INT_MAX;
    if(index>1)
    { 
        minusTwo= f(index-2, heights, dp) + abs(heights[index]-heights[index-2]);
    }
    return dp[index]=min(minusOne, minusTwo);

}
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector<int> dp(n+1, -1);
    return f(n-1, heights, dp);
     
}
int main()
{
  //main logic here;
  return 0;
}

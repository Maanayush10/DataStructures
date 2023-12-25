#include<stdc++.h>
using namespace std;

    //caution!
    // use 2 different dp tables to solve
    // 1 dp table may get overwritten 2 times
    int f(vector<int> & nums, vector<int> &dp, int end, int start)
    {
       if(end<=start){return 0;}
       if(dp[end]!=-1) return dp[end];
       dp[end]= max(nums[end-1]+f(nums, dp, end-2, start), f(nums, dp, end-1, start));
       return dp[end];
        // return maxMoney;
    }  
    int rob(vector<int>& nums) {
        // vector<int>temp1, temp2;
        vector<int>dp(nums.size()+1, -1);
        vector<int>dp2(nums.size()+1, -1);
        if(nums.size()==1){return nums[0];}
        return max(f(nums, dp, nums.size()-1, 0), f(nums, dp2, nums.size(), 1));
    }

int main()
{
  //main logic here
  return 0;
}

//house robber leetcode problem
//first recursive program where i built the intuition myself


//recursion + memoization
int myFunc(vector<int>& nums, int size, vector<int>&dp)
    {
        //base case
        if(size<=0)
        {
            return 0;
        }
        if(dp[size]!=-1)
        {
            return dp[size];
        }

        //recursive calls
        dp[size]=max(nums[size-1]+myFunc(nums, size-2, dp), myFunc(nums, size-1, dp));

        return dp[size];
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1, -1);
        int ans = myFunc(nums, nums.size(), dp);
        return ans;
    }

//leetcode equal sum partition solution:
//shoutout to Aditya Verma

bool subsetSum(vector<int>&arr, int sum)
    {
        int n= arr.size();
        int t[n+1][sum+1];
        //base case initialization
        for(int i=0; i<n+1; i++)
        {
            for(int j=0; j<sum+1; j++)
            {
                if(i==0){t[i][j]=false;}
                if(j==0){t[i][j]=true;}
            }
        }

        //recursive cases
        for(int i=1; i<n+1; i++)
        {
            for(int j=1; j<sum+1; j++)
            {
                if(arr[i-1]<=j)
                {
                    t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
                }
                else
                {
                    t[i][j]= t[i-1][j];
                }
            }
        }
        return t[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0 ; i<nums.size(); i++)
        {
            sum = sum+nums[i];
        }
        if(sum %2!=0)
        {
            return false;// if sum is odd it cannot be divided into equal sum partitions.
        }
        
        else
        {
            return subsetSum(nums, sum/2);// we find only one partition, which sums to sum/2. If it is present we can be sure that other partition will have the same sum.
        }
    }

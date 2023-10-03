#include<bits/stdc++.h>
using namespace std;

nt findPeakElement(vector<int>& nums) {
        int low=0, high=nums.size()-1;
        int peak;
        if(nums.size()==1)
        {
            return 0;
        }
        if(nums[low]>nums[low+1])
        {
            return low;
        }
        if(nums[high]>nums[high-1])
        {
            return high;
        }
        low=low+1;
        high= high-1;
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            //edge cases
            //check if mid element is peak or not
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1])
            {
                peak= mid;
            }

            //go to the other side (increasing)
            if(nums[mid+1]>nums[mid])
            {
                low=mid+1;
            }
            else
            {
                high= mid-1;
            }

        }
        return peak;
    }

int main()
{
  //main logic here
  return 0;
}

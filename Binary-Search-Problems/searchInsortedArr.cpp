#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
        int low=0, high= nums.size()-1;
        while(low<=high)
        {
            int mid= low+(high-low)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            //left half sorted and number is between them 
            if(nums[mid]>=nums[low])
            {
                if(nums[low]<=target && nums[mid]>=target)
                {
                    high=mid-1;
                }
                else
                {
                    low= mid+1;
                }
            }
            //right half sorted
            else
            {
                if(nums[mid]<=target && nums[high]>=target)
                {
                    low= mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
        }
        return -1;
    }

int main()
{
  //main logic here
  return0;
}

#include <bits/stdc++.h>
using namespace std;

bool search(vector<int>& arr, int target){
        int low=0, high= arr.size()-1;
        while(low<=high)
        {
            int mid= low+(high-low)/2;
            if(arr[mid]==target)
            {
                return true;
            }
            //speacial case of arr[low]==arr[mid]==arr[high]
            if(arr[mid]== arr[low] && arr[mid]==arr[high])
            {
                low++;
                high--;
                continue;
            }

            //left half is sorted
            if(arr[low]<=arr[mid])
            {
                if(arr[low]<=target && arr[mid]>=target)
                {
                    high=mid-1;
                }
                else
                {
                    low= mid+1;
                }
            }
            //right half is sorted
            else
            {
                if(arr[mid]<=target && arr[high]>=target)
                {
                    low= mid+1;
                }
                else
                {
                    high= mid-1;
                }
            }
        }
        return false;
    }

int main()
{
  //main logic here
  return 0;
}

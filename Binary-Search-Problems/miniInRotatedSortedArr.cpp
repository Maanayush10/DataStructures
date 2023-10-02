#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& arr) {
        int low=0, high=arr.size()-1;
        int minimum= INT_MAX;
        while(low<=high)
        {
            int mid= low+(high-low)/2;
            //left half is sorted
            if(arr[low]<=arr[mid])
            {
                if(minimum>arr[low])
                {
                    minimum= arr[low];
                }
                low=mid+1;
            }
            //right half is sorted
            else
            {
                if(minimum>arr[mid])
                {
                    minimum= arr[mid];
                }
                high= mid-1;
            }
        }
        return minimum;
    }

int main()
{
  //main logic here
  return 0;
}

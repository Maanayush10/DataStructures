//binary search iterative in cpp
#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n, int k) {
        // code here
        int low=0, high=n-1;
        while(low<=high)
        {
            int mid= (low+high)/2;
            
            if(arr[mid]==k) return mid;
            else if(arr[mid]>k) high= mid-1;
            else low= mid+1;
        }
        return -1;
    }

int main()
{
  //main logic here
  return 0;
}

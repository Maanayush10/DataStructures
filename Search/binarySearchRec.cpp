//Binary Search Recursive method

#include<bits/stdc++.h>

using namespace std;

int main()
{
  //main logic here
  return 0;
}

int binSearchRec(int arr[], int low, int high, int target)
    {
        if(low>high)
        {
            return -1;
        }
        int mid =(low+high)/2;
        
        if(arr[mid]==target) return mid;
        
        else if(arr[mid]<target)
        {
           return binSearchRec(arr, mid+1, high, target);
        }
        
        return binSearchRec(arr, low, mid-1, target);
    }
    int binarysearch(int arr[], int n, int k) {
        // code here
        int low=0, high=n-1;
        
        //recursive code
        return binSearchRec(arr, low, high, k);
    }

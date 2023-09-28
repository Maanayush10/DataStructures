#include<bits/stdc++.h>
using namespace std;

int searchInsert(int* arr, int size, int target)
{
    int index;

    int low=0, high= size-1;
    if(target>arr[high])
    {
        return size;
    }
    if(target<arr[0])
    {
        return 0;
    }

    while(low<=high)
    {
        int mid= (low+high)/2;
        if(arr[mid]== target)
        {
            return mid;
        }
        else if(target>arr[mid])
        {
            // if(low)
            index= mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return index+1;
}

int main()
{
  //main logic here
  return 0;
}

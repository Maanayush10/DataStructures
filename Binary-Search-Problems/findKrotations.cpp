#include<bits/stdc++.h>
using namespace std;
int findKRotation(vector<int> &arr){
    // Write your code here.    
    int low=0, high= arr.size()-1;
    int minimum= INT_MAX;
    int position=0;

    while(low<=high)
    {
        int mid= low+(high-low)/2;
        //left part is sorted
        if(arr[mid]>= arr[low])
        {
            if(arr[low]<minimum)
            {
                minimum= arr[low];
                position= low;
            }
            low= mid+1;
            
        }
        //right part is sorted
        else
        {
            if(arr[mid]<minimum)
            {
                minimum=arr[mid];
                position=mid;
            }
            high= mid-1;

        }
    }
    return position;

}
int main()
{
  //main logic here
  return 0;
}

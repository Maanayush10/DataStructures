//return the index of first occurence and last occurence

#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int>&arr, int n, int k)
{
    int low=0, high=n-1;
    int ans= n;
    while(low<=high)
    {
        int mid= low+(high-low)/2;
        if(arr[mid]>=k)
        {
            ans= mid;
            high= mid-1;
        }
        else
        {
            low= mid+1;
        }
    }
    return ans;
}

int upperBound(vector<int>&arr, int n, int k)
{
    int low=0, high=n-1;
    int ans= n;
    while(low<=high)
    {
        int mid= low+(high-low)/2;
        if(arr[mid]>k)
        {
            ans= mid;
            high= mid-1;
        }
        else
        {
            low= mid+1;
        }
    }
    return ans-1;
}


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    //do 2 searches, on for lower bound and one for upper bound

    pair<int, int>p;

    int ind1=lowerBound(arr, n, k);
    int ind2=upperBound(arr, n, k);
    if(ind1>=n || arr[ind1]!=k)
    {
        ind1=-1;
    }
    if(ind2>=n|| arr[ind2]!=k)
    {
        ind2=-1;
    }
    p={ind1, ind2};

    return p;
}

int main()
{
  //main logic here
  return 0;
}

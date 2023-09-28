//UNSORTED ARRAY, NOT A BINARY SEARCH PROBLEM

//best possible is o(n) so brute force only
#include<bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	// Write your code here.
	int floor=INT_MIN, ceil=INT_MAX;
	bool floorFound=false, ceilFound=false;
	for(int i=0; i<n; i++)
	{
		if(arr[i]==x)
		{
			return{arr[i], arr[i]};
		}
	}

	for(int i=0; i<n; i++)
	{
		if(arr[i]<x)
		{
			floor =max(arr[i], floor);
			floorFound=true;
		}
		if(arr[i]>x)
		{
			ceil=min(arr[i], ceil);
			ceilFound=true;
		}
	}
	if(!floorFound)
	{
		floor= -1;
	}
	if(!ceilFound)
	{
		ceil=-1;
	}
	return{floor, ceil};
	
}


int main()
{
  //main logic here
  return 0;
}

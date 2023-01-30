//c++ program to find the first and last occurence of an element in an array

#include<bits/stdc++.h>

using namespace std;

int binarySearch(int * arr, int size, int key)
{
    for(int j=0; j<size; j++)
    {
        if(arr[j]==key)
        {
            return j;
        }
    }
    return -1;
}

int revBinarySearch(int * arr, int size, int key)
{
    for(int j=size-1; j>=0; j--)
    {
        if(arr[j]==key)
        {
            return j;
        }
    }
    return -1;
}

int main()
{
    int size, key;
    int arr[size];


    cout<<"Enter the size of the array :\t";
    cin>>size;

    cout<<"Enter array elements :"<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the search key :\t";
    cin>>key;

    //performing binary search from left-to-right order to find left most element
    int index = binarySearch(arr, size, key);

    //performing binary search from right-to-left order to find right most element
    int index2 =revBinarySearch(arr, size, key);

    cout<<index<<" "<<index2<<endl;
    return 0;
}

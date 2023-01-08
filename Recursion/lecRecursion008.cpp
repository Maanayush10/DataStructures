//C++ program to check if an array is sorted or not using Recursion

#include<iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    if(size==0|| size ==1)
    {
        return true;
    }   
    if(arr[0]> arr[1])
    {
        return false;
    }

    return isSorted(arr+1, size-1);
}
int main(){
    int size;
    cout<<"Enter the size of the array :\t";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the array :\t";
    for (int i = 0; i < size; i++)
    {
        /* code */
        cin>>arr[i];
    }
    
    bool check= isSorted(arr, size);

    if(check==true)
    {
        cout<<"The array is sorted"<<endl;
    }
    else
    {
        cout<<"The array is not sorted"<<endl;
    }

return 0;
}

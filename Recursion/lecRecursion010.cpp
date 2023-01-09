//C++ program to implement linear search using recursion
//0 based indexing
#include<iostream>
#include<stdlib.h>
using namespace std;

bool linearSearch(int * arr, int key, int size)
{
    if(size==0 )
    {
        return false;
    }
    if(arr[0]==key)
    {
        return true;
    }
    return linearSearch(arr+1, key, size-1);
    
}
//another function that returns the index
int linearSearch2(int * arr, int key, int size)
{
    if(size==0 )
    {
        return -1;
    }
    if(arr[0]==key)
    {
        return size;
    }
    return linearSearch2(arr+1, key, size-1);
}
int main(){
    int * arr;
    int size, key;
    arr= (int *)malloc(sizeof(int));

    cout<<"Enter the size of the array: \t";
    cin>>size;

    cout<<"Enter the array elements: "<<endl;
    for(int i =0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the key you want to search: ";
    cin>>key;

    bool check=linearSearch(arr, key, size);

    if(check == true)
    {
        cout<<"Element found in the array!"<<endl;
        cout<<"Index :\t"<<linearSearch2(arr, key, size);
    }
    else
    {
        cout<<"Element NOT found in the array!"<<endl;
    }


return 0;
}

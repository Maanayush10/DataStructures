// c++ program to implement binary Search

#include <iostream>
#include <stdlib.h>
using namespace std;

int binarySearch(int *arr, int start, int end, int key)
{
    int mid = (start + end) / 2;
    // mid = start +(end -start)/2

    // base case where start > end 
    if (start > end)
    {
        return -1;
    }
    
    //base case when key found
    if (arr[mid] == key)
    {
        return mid;
    }

    if (key > arr[mid])
    {
        return binarySearch(arr, mid + 1, end, key);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, key);
    }
}
int main()
{
    int key;

    int *arr;
    arr = (int *)malloc(sizeof(int));

    int size;
    cout << "Enter the size of the array : \t";
    cin >> size;

    cout << "Enter the elements of the array :" << endl;
    for (int i = 0; i < size; i++)
    {
        /* code */
        cin >> arr[i];
    }

    cout << "Enter the key you are searching for : \t";
    cin >> key;

    int check = binarySearch(arr, 0, size, key);

    if (check == -1)
    {
        cout << "Key NOT present in the array" << endl;
    }
    else
    {
        cout << "Key found in the array at index : \t" << check << endl;
    }

    return 0;
}

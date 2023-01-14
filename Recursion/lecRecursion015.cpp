//C++ program to implement bubbleSort using Recursion
#include <iostream>
using namespace std;


//normal sorting made by me, not bubble sort
void Sort(int *arr, int start, int end)
{
    for (int i = 0; i < end+1; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
    if (start == end)
    {
        return;
    }

    if (arr[start] > arr[start + 1])
    {
        swap(arr[start], arr[start + 1]);
    }

    Sort(arr, start + 1, end);
    Sort(arr, start, end - 1);
}

//bubble sort
void bubbleSort(int *arr, int size)
{
    if(size ==0 || size==1)
    {
        return;
    }
    for(int i=0; i<size-1; i++)
    {
        if(arr[i]>arr[i+1]);
        {
            swap(arr[i], arr[i+1]);
        }
    }

    bubbleSort(arr, size-1);
}
int main()
{

    int size;
    cout << "Enter the size of array :\t";
    cin >> size;

    int arr[size];
    cout << "Enter the array elements : \t";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Array before bubble sort : \t";
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
    bubbleSort(arr, size);
    cout << endl;
    cout << "Array after bubble sort : \t";
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
    return 0;
}

/*

                5 4 3 2 1
                4 5 3 2 1


*/
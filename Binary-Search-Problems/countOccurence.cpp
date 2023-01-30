// C++ program to count the total number of occurences of a given element in an array
#include <bits/stdc++.h>
using namespace std;

int countVar = 0;

void countOccurence(int *arr, int size, int key)
{
    for (int j = 0; j < size; j++)
    {
        if (arr[j] == key)
        {
            countVar++;
        }
    }
}

int main()
{
    int size, key;
    int arr[size];

    cout << "Enter the size of the array :\t";
    cin >> size;

    cout << "Enter array elements :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the search key :\t";
    cin >> key;

    countOccurence(arr, size, key);
    cout << "Number of occurences of given key " << key << " is " << countVar << endl;
}

// c++ program to calculate the sum of an array
#include <iostream>
using namespace std;

int sum(int arr[], int size)
{
    if(size<1)
    {
        return 0;
    }
    // reducing size by one below in the second argument because of 0 based indexing;
    return sum(arr, size -1)+ arr[size-1];

}
int main()
{
    int size;
    cout << "Enter the size of the array :\t";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array :\t";
    for (int i = 0; i < size; i++)
    {
        /* code */
        cin >> arr[i];
    }

    int sumOfArray = sum(arr, size);

    cout<<"Sum of array is : "<<sumOfArray<<endl;

    return 0;
}

// c++ program to calculate the sum of an array using recursion
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

//another way

int getSum(int * arr, int size)
{
    if(size == 0)
    {
        return 0;
    }
    if(size==1)
    {
        return arr[0];
    }
    int remainingPart = getSum(arr+1, size-1);
    int sum = arr[0] +remainingPart;
    return sum;
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
    cout<<"Sum of array is : "<<getSum(arr, size)<<endl;

    return 0;
}

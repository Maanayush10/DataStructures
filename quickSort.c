//quickSort Algorithm using Hoare Partition scheme :)

#include <stdio.h>


int partition(int arr[], int beg, int end)
{
    int pivot = arr[beg];
    int i = beg;
    int j = end + 1;
    while (1)
    {
        /* code */
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);

        // swap
        int temp4 = arr[i];
        arr[i] = arr[j];
        arr[j] = temp4;

        if (i >= j)
        {

            // swap(arr[i], arr[j]);    //undo last swap when i=j;
            int temp1 = arr[i];
            arr[i] = arr[j];
            arr[j] = temp1;

            // swap(arr[beg], arr[j]);
            int temp2 = arr[beg];
            arr[beg] = arr[j];
            arr[j] = temp2;
            return j;
        }
    }
}

void quickSort(int arr[], int beg, int end)
{
    if (beg < end)
    {
        int s = partition(arr, beg, end);
        quickSort(arr, beg, s - 1);
        quickSort(arr, s + 1, end);
    }
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("\nBefore the sort, array: \n");
    for (int i = 0; i < size; i++)
    {
        /* code */
        printf(" %d ", arr[i]);
    }
    quickSort(arr, 0, size);
    printf("\nAfter the sort, array: \n");
    for (int i = 0; i < size; i++)
    {
        /* code */
        printf(" %d ", arr[i]);
    }

    return 0;
}

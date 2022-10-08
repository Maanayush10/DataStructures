#include <stdio.h>
int i = 0, j = 0;

void selectionSort(int arr[], int size);
int main()
{
    //taking array as input from the user
    int size;
    printf("\nEnter the size of array\n");
    scanf("%d", &size);
    int arr[size];

    printf("\nEnter the array elements\n");
    for (int count = 0; count < size; count++)
    {
        scanf("%d", &arr[count]);
    }

    //Array before selection sort
    printf("\nArray before selection sort:\n");
    for (int z = 0; z < size; z++)
    {
        printf(" %d ", arr[z]);
    }

    printf("\n\n");

    selectionSort(arr, size);

    // Array after selection sort
    printf("\nArray after selection sort:\n");
    for (int z = 0; z < size; z++)
    {
        printf(" %d ", arr[z]);
    }

    return 0;
}


//function for slection sort
void selectionSort(int arr[], int size)
{
    //    int size = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < size; i++)
    {
        int min = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        // swap arr[i] and arr[min]
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

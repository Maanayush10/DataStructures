//C program to implement Binary Search 

#include <stdio.h>
#include<stdlib.h>

int binarySearch(int *arr, int size, int target)
{
    int l, r;
    l = 0, r = size;
    
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (target == arr[m])
        {
            return m;
        }
        else if (target < arr[m])
        {
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
        return -1;
}
int main()
{
    int *arr;
    int size;

    arr=(int *)malloc(sizeof(int));

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("\n");

    printf("Enter the array elements : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printf("The given array :");
    for (int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n\n");

    int element;
    printf("Enter the element to be found : ");
    scanf("%d", &element);

    int index = binarySearch(arr, size, element);
    printf("\n");
    printf("The required index: %d \n", index+1);

    return 0;
}

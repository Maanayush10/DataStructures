//c program for iterative binary search 
#include<stdio.h>
#include<stdlib.h>

int binarySarch(int low, int high, int key, int * arr)
{
    while(low<high)
    {
        int mid= (low + high)/2;
        if(key == arr[mid])
        {
            return mid;
        }
        if(key>arr[mid])
        {
            low= mid+1;
        }
        if(key<arr[mid])
        {
            high=mid-1;
        }
    }
    return -1;
}
int main()
{
    int * arr;
    arr= (int *)malloc(sizeof(int));
    int size, key;

    printf("\nEnter the size of array\n");
    scanf("%d", &size);
    
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < size; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element to be searched\n");
    scanf("%d", &key);

    int index= binarySarch(0, size, key, arr);

    if(index==-1)
    {
        printf("\nElement not found\n");
    }
    else
    {
        printf("\nThe element found at position %d\n", index+1);
    }
    
return 0;
}

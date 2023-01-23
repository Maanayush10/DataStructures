//C program to implement insertion sort.

#include<stdio.h>
#include<stdlib.h>

void insertionSort(int *arr, int n)
{
    int v, j;
    for ( int i = 1; i < n; i++)
    {
       v= arr[i];
       j= i-1 ;
       while ((j>=0) && (arr[j] > v) )
       {
           arr[j+1]= arr[j];
           j= j-1;
       }
       arr[j+1]= v;
       
    }
    
}
int main()
{
    //HARDCODED THE VALUES
    // int arr[]={89, 45, 68, 90, 29, 34, 17};
    // int size =sizeof(arr)/sizeof(arr[0]); 
    
    // Taking array size from the user
    int size;
    int * arr =(int *)malloc(size*sizeof(int));
    
    printf("\nEnter the size of the Array: ");
    scanf("%d", &size);
    printf("\nEnter the array elements to be sorted: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements before sorting: ");
     for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }

    //calling insertionSort Function
    insertionSort(arr, size);
    
    printf("\nElements after Sorting: ");
     for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }

    printf("\nMade by maan.\n");


return 0;
}

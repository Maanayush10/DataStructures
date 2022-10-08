#include<stdio.h>

int size, Key;
int sequenSearch(int arr[], int Key);
int main()
{
    printf("Enter the size of the array: \n");
    scanf("%d", &size);
    
    int arr[size];

    printf("Enter the array elements : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the search element : ");
    scanf("%d", &Key);

    int pos=sequenSearch(arr, Key);

    printf("Element found at : %d", pos);
    
    

return 0;
}

int sequenSearch(int arr[], int Key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==Key)
        {
            return i+1;
            break;
        }
    }

    return -1;
}

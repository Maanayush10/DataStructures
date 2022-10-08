#include<stdio.h>
#include<string.h>


#define max 100
int t[max];

void shiftTable(char *p)
{
    int size= strlen(p);
    
    for (int i = 0; i < max; i++)
    {
        t[i]= size;
    }
    for (int j = 0; j < size-1; j++)
    {
       t[p[j]]=size-1-j;
    }
}

int horsePoolMatch(char *p, char * arr)
{
    int i;
    int n= strlen(arr);
    int size= strlen(p);
    shiftTable(p);
    i=size-1;

    while(i<=n-1)
    {
        int match=0;
        while( (match <= size-1) && (p[size-1-match]==arr[i-match]))
        {
            match++;
        }
        if(match==size)
            return i-size+1;
        else
        {
            i=i+t[arr[i]];
        }
    }
    return -1;
}
int main()
{
    char mainArray[max], pattern[max];
    int position;

    printf("\nEnter the text:\n");
    scanf("%s",mainArray);
    printf("\nEnter the pattern\n");
    scanf("%s",pattern);
    shiftTable(pattern);
    position= horsePoolMatch(pattern, mainArray);

    if(position>=0)
    {
        printf("Pattern found, at position: %d\n", position+1);
    }
    else
    {
    printf("\nSorry, The pattern was not found!\n");
    }
    return 0;
}

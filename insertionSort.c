#include<stdio.h>

void insertionSort(int arr[],int n)
{
    if(n==0)
    {
        printf("Empty array\n");
        return;
    }

    if(n==1)
    {
        printf("Single element array:%d\n",arr[0]);
        return;
    }

    int i,j,key;

    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;

        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=key;

        printf("After insertion %d:",i);
        for(int k=0;k<n;k++)
            printf("%d ",arr[k]);
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);

    if(n<=0)
    {
        insertionSort(NULL,0);
        return 0;
    }

    int arr[n];

    printf("Enter elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    insertionSort(arr,n);

    printf("Sorted Output:");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");

    return 0;
}
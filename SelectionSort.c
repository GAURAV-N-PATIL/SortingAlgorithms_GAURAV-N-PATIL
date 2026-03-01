#include<stdio.h>

void selectionSort(int arr[],int n)
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

    int i,j,min,temp;

    for(i=0;i<n;i++)
    {
        min=i;

        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }

        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;

        printf("After pass %d:",i+1);
        for(j=0;j<n;j++)
            printf("%d ",arr[j]);
        printf("\n");
    }
}

int main()
{
    int n,i;
    printf("Enter number of elements:");
    scanf("%d",&n);

    if(n<=0)
    {
        selectionSort(NULL,0);
        return 0;
    }

    int arr[100]; 
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    selectionSort(arr,n);

    printf("Sorted Output:");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");

    return 0;
}
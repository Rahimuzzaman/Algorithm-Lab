#include<stdio.h>
#include<stdlib.h>
#define Size 10
int i;
int part(int a[],int start,int end)
{
    int pivot,temp,p;
    p=a[end];
    printf("\nbefore Sort(start: %d,End: %d)\n",start,end);
    for(i=start;i<=end;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=start,pivot=start;i<end;i++)
    {
        if(a[i]<=p)
        {
            temp = a[pivot];
            a[pivot] = a[i];
            a[i] = temp;
            pivot++;
        }
    }
    temp=a[pivot];
    a[pivot]=a[i];
    a[i]=temp;
    printf("\nAfter Sort(start: %d,End: %d)\n",start,end);
    for(i=start;i<=end;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return pivot;

}
void quick(int a[],int start,int end)
{
    int pivot;
    if(start<end)
    {
        pivot=part(a,start,end);
        quick(a,start,pivot-1);
        quick(a,pivot+1,end);
    }
}

int main()
{
    int array[Size],s;
    printf("\nEnter the size of array: ");
    scanf("%d",&s);
    printf("\nEnter the elements:\n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nBefore sorting:\n");
    for(i=0;i<s;i++)
    {
        printf("%d ",array[i]);
    }
    quick(array,0,s-1);
    printf("\nAfter sorting:\n");
    for(i=0;i<s;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}

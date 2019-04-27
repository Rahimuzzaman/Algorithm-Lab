#include<stdio.h>
int main()
{
    int n,a[20],i,j,temp;

    printf("Enter te size of an array\n");
    scanf("%d",&n);

    printf("Enter the elements into an array\n");

        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("Before sorting\n");

          for(i=0;i<n;i++)
          {
              printf("%d\n",a[i]);
          }

          printf("\n");


        for(i=1;i<n;i++)
        {
            temp=a[i];
            for(j=i;j>0&&temp<a[j-1];j--)
                {

                a[j]=a[j-1];

                }
                 a[j]=temp;
        }

        printf("After sorting\n");
        for(i=0;i<n;i++)
            printf("%d\t",a[i]);
        return 0;

}








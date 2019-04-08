#include<stdio.h>

void activity_selection(int start[], int end[], int n)
{
   printf("SELECTED ACTIVITIES INDICES ARE: ");
   printf("\n 0\n ");
   int j,i=0;
   for(j=1; j< n; j++)
      if(start[j] >= end[i])
          {
            printf("%d\n ",j);
            i=j;
          }
          else
          {
              printf("\n %d-> this slot will create clash with previous one\n",j);
          }
}

int main()
{
   int n,i,j;
   printf("Enter size of list: ");
   scanf("%d",&n);
   int start[n],end[n];
   printf("Enter start time and end time simultaneously: \n");

   for(i=0;i< n;i++)
      scanf("%d %d",&start[i],&end[i]);

   activity_selection(start,end,n);


   return 0;
}

#include<stdio.h>
int main()
{
    int array[100],i,n, d, key;
    printf("Enter number of elements \n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);

   for(i=0;i<n;i++)
      scanf("%d\n",&array[i]);


   for(i=1;i<n;i++)
    {
      key=array[i];
      d=i-1;


      while(key<array[d] && d>=0)
        {
         array[d+1]=array[d];
        d=d-1;
      }
      array[d+1]=key;
   }

   printf("Sorted elements:\n ");
   for(i=0;i<n;i++)
    {
      printf(" %d\n",array[i]);
   }


      return 0;

}




#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5};
    int i;
   //a[10]={2,3,4,5}
   for(i=5;i>0;i--)
   {
       a[i]=a[i-1];
   }
   for(i=0;i<5;i++)
   {
       printf("%d",a[i]);
   }


    return 0;
}

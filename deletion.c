#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5};
    int i;
   //a[10]={1,3,4,5}



   /*a[1]=a[2]; //1,3,3,4,5
   a[2]=a[3]; //1,3,4,4,5
   a[3]=a[4]; //1,3,4,5,5*/

   for(i=1;i<5;i++)
   {
       a[i]=a[i+1];
   }





   for(i=0;i<4;i++)
   {
       printf("%d\n",a[i]);
   }


    return 0;
}

#include<stdio.h>
int main()
{
    int array[100],i,n, d, temp;
    printf("Enter number of elements \n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);

    for(i=0;i<n;i++)
    {
        scanf("%d\n",&array[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(d=0;d<n-i-1;d++)
        {
            if(array[d]>array[d+1])
            {
                temp=array[d];
                array[d]=array[d+1];
                array[d+1]=temp;
            }
        }
    }

    printf("Sorted elements\n");

    for(i=0;i<n;i++)
    {
        printf("%d\n",array[i]);
    }

    return 0;
}

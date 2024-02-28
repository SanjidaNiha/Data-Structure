#include<stdio.h>
int main()
{
    float number[100],lowest;
    int i,n;
    printf("Enter size of array:\n");
    scanf("%d",&n);

    printf("Enter %d elements in array\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%f", &number[i]);
    }

    //initializing first index to be the lowest
    lowest=number[0];
    for(i=1;i<n;i++)
    {
        //loop executes only if there is any number in array lower than the first
        if(lowest>number[i])
        {
            //the minimum number stored in lowest
            lowest=number[i];
        }
    }
    printf("Lowest number is %f",lowest);


    return 0;
}

#include<stdio.h>
int main()
{
    int array[100], i,n;
    printf("Enter size of array:\n");
    scanf("%d",&n);

    printf("Enter %d elements in array\n",n);
    //taking input i=0 to i=4
    for(i=0;i<n;i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Entered Elements in array: ");
    //printing i[0] to i[4]
    for(i=0;i<n;i++)
    {
        printf("%d\n",array[i]);
    }



    return 0;
}

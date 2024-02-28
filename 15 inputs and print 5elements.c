 #include<stdio.h>
 int main()
 {
      int array[20];
      int i;

    printf("Input 15 elements in the array :\n");
    for(i=0; i<15; i++)
    {
	    printf("Index %d : ",i);
        scanf("%d", &array[i]);
    }

    printf("\n First 5 Elements in array are: ");
    for(i=0; i<5; i++)
    {
        printf("%d  ", array[i]);
    }

 }

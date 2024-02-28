#include<stdio.h>
int main()
{
     char a[10]= {'a','f','r','i','o'};
      int i;
      char letter;


     printf("Enter the letter : ");
    scanf("%c", &letter);

    for(i=0; i<5; i++)
    {
        if(a[i]==letter)
        {
			printf("letter found ");

        }
    }


    return 0;
}

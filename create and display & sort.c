#include<stdio.h>
#include<stdlib.h>

int array[5];
int temp=0;
struct node
{
    char data;
    struct node *neXT;
}*head = NULL;

typedef struct node ListNode;
typedef ListNode *ListNodePtr;

void funcAddLast(struct node **head, char valUE)
{
    //create a new node
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = valUE;
    newNode->neXT = NULL; //assigning null to pointer of newnode

    //if head is NULL, it is an empty list
    if(*head == NULL)
         *head = newNode;
    //Otherwise, find the last node and add the newNode
    else
    {
        struct node *lastNode = *head;

        //last node's next address will be NULL.
        while(lastNode->neXT != NULL)
        {
            lastNode = lastNode->neXT;
        }

        //add the newNode at the end of the linked list
        lastNode->neXT = newNode;
    }

}


void printList( ListNodePtr currentPtr )

{
   if ( currentPtr == NULL )
      printf( "List is empty.\n\n" );

   else {

      printf( "The list is:\n" );



      while ( currentPtr != NULL ) {

         printf( "%c --> ", currentPtr->data );

         currentPtr = currentPtr->neXT;

      }
      printf( "NULL\n\n" );

   }
}


void bubbleSort(int array[])
{
    int i, d;
    for (i = 0; i < 5 - 1; i++)

        // Last i elements are already in place
        for (d = 0; d < 5 - i - 1; d++)
            if (array[d] > array[d + 1])
            {
                temp=array[d];
                array[d]=array[d+1];
                array[d+1]=temp;
            }

}

void printSorted(int array[])
{
    int i;
    for (i = 0; i < 5; i++)
        printf("%d\n ", array[i]);

}
void inputArray(int array[])
{
    int i;
    printf("Enter elements in array: ");
    for (i = 0; i < 5; i++)
    {

        scanf("%d", &array[i]);
    }
}

int main()
{
    int data,choice;
     while(1)
    {


    printf("1 to sort a list of 5 integer numbers \n");
    printf("2 to create and display a linked list \n");
    printf("3 to exit\n");

    scanf("%d", &choice);


    switch(choice) {
    case 1:
        inputArray(array);
        bubbleSort(array);
        printf("Sorted array: \n");
        printSorted(array);
        break;
    case 2:
        printf("Enter the data:\n");
        scanf("%s", &data);
        funcAddLast(&head, data);
        scanf("%s", &data);
        funcAddLast(&head, data);
        scanf("%s", &data);
        funcAddLast(&head, data);
        scanf("%s", &data);
        funcAddLast(&head, data);
        scanf("%s", &data);
        funcAddLast(&head, data);

        printList(head);
        break;

    case 3:
        exit(1);

    default:
        printf("Invalid\n");
    }

}
}

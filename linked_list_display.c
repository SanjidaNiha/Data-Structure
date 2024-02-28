#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *neXT;
};
void funcAddLast(struct node **head, int valUE)
{
    //create a new node
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = valUE;
    newNode->neXT     = NULL; //assigning null to pointer of newnode

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


int main()
{

    struct node *head = NULL;

     funcAddLast(&head,555);
     funcAddLast(&head,666);
     funcAddLast(&head,777);

     //temp is a reference for head pointer.
  struct node *temp = head;

  //till the node becomes null, printing each nodes data
  while(temp != NULL)
  {
      printf("%d->",temp->data);
      temp = temp->neXT;
  }
  printf("NULL");

  //node structure
 /* struct node
  {
      int data;
      struct node *next;
  };

  //declaring nodes
  struct node *head,*middle,*last;

  //allocating memory for each node
  head   = malloc(sizeof(struct node));
  middle = malloc(sizeof(struct node));
  last   = malloc(sizeof(struct node));

  //assigning values to each node
  head->data   = 10;
  middle->data = 20;
  last->data   = 30;

  //connecting each nodes. head->middle->last
  head->next   = middle;
  middle->next = last;
  last->next   = NULL;

  //temp is a reference for head pointer.
  struct node *temp = head;

  //till the node becomes null, printing each nodes data
  while(temp != NULL)
  {
      printf("%d->",temp->data);
      temp = temp->next;
  }
  printf("NULL");*/

  return 0;
}

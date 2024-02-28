#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* link;
} *top=NULL;
//declare top globally


int isStackEmpty()
{
    if(top == NULL)
        return 1;
    else
        return 0;
}

void push(int data) {
    struct node* newnode; //creating new node
    newnode = malloc (sizeof(newnode));

    //if malloc returns null, stack is full
    if(newnode==NULL)
    {
        printf("Stack is full");
        exit(1);
    }

    newnode->data= data;
     newnode->link= NULL;

     newnode->link =top; //put the address of first node in the link part
     top= newnode; //top pointer pointing to the new node

}

int pop(){
    struct node* temp; //temporary pointer for purpose of deletion
    int value;
    if(isStackEmpty())
    {
        printf("Stack is empty");
        exit(1);
    }

    temp = top;            //update so that it can point to first node
    value = temp->data;  // storing the value of first node
    top = top->link;   //update top to point next node
    free(temp);         //delete the node pointed by temp
    temp = NULL;
    return value;        //return the value of first node

}

void print() {
    struct node* temp;
    temp = top;
    if(isStackEmpty())
    {
         printf("Stack is empty");
        exit(1);
    }
    printf("The elements in stack are : \n");
    while(temp) {

        printf("%d ",temp->data);
        temp= temp->link;
    }
    printf("\n");

}




int main()
{
    /*int data;
    printf("Enter the elements to push:\n");
    scanf("%d", &data);
    push(data);
    print();
    data = pop();
    printf("deleted data is %d\n",data);
    print();*/

    int data,pushOrPop;
    while(1)
    {


    printf("1 to push\n");
    printf("2 to pop\n");
    printf("3 to exit\n");

    scanf("%d", &pushOrPop);

    switch(pushOrPop) {
    case 1:
        printf("Enter the elements to push:\n");
        scanf("%d", &data);
        push(data);
        print();
        break;
    case 2:
        data = pop();
        printf("deleted data is %d\n",data);
        print();
        break;

    case 3:
        exit(1);

    default:
        printf("Invalid");
    }
    }

return 0;

}

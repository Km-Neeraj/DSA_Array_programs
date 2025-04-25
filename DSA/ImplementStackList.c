#include<stdio.h>
#include<stdlib.h>

typedef struct stack
{
                         int data;
                         struct stack* next;
}stack;

stack* makenode()
{
     stack* p=(stack*)malloc(sizeof(stack*));

     p->next=0;
     printf("Enter data");
     scanf("%d",&p->data);

     return p;
}

stack* push(stack* h)
{
    stack*p,*temp;
    p=makenode();
     p->next=h;
     return p;

}

stack* pop(stack* h)
{
                         stack* p;
                         if(h==0)
                         {
                                                  printf("stack underflow");
                         }
                         else
                         {

                         
                         printf("\npopped......%d",h->data);
                         p=h;
                         h=h->next;
                         free(p);
                         return h;
                         }

}

int main()
{
                         int ch;
                         stack* head=0;
                         while(1)
                         {
                             printf("\n 1........push");
                             printf("\n 2........pop");
                             printf("\n 3.......Exit");

                             printf("\n\nEnter your choice");
                             scanf("%d",&ch);

                             switch(ch)
                             {
                                                  case 1: head=push(head);
                                                  break;
                                                  case 2: head=pop(head);
                                                  break;
                                                  case 3: printf("Thanks for stack operation");
                                                  exit(0);
                                                  default:
                                                  exit(0);

                             }
                         }
                         return 0;


}
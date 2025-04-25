#include<stdio.h>
#include<stdlib.h>
typedef struct queue
{
                         int data;
                         struct queue* next;
}queue;

queue* makenode()
{
                         queue* p=(queue*)malloc(sizeof(queue*));
                          p->next=0;
                          printf("Enter data");
                          scanf("%d",&p->data);
                          return p;
}

queue* inqueue(queue* h)
{
     queue* p,*temp;
     p=makenode();

     if(h==0)
     {
                         return p;
     }
     temp=h;
     while(temp->next)
     {
                         temp=temp->next;
     }
     temp->next=p;
     
     return h;
}

queue* dequeue(queue* h)
{
                         queue* p;
                         if(h==0)
                         {
                                                  printf("Queue is already empty");
                                                  return h;
                         }
                         p=h;
                         h=h->next;
                         printf("Removing element %d from queue",p->data);
                         free(p);
                         return h;

}

int main()
{

                         int ch;
                         queue* head=0;
                         while(1)
                         {
                                                  printf("\n1......inqueu");
                                                  printf("\n2.......dequeue");
                                                  printf("\n3........Exit");

                                                  printf("\n\nEnter choice :");
                                                  scanf("%d",&ch);
                                                  switch(ch)
                                                  {
                                                                           case 1: head=inqueue(head);
                                                                           break;
                                                                           case 2: head=dequeue(head);
                                                                           break;
                                                                           case 3: printf("Thanks a lot");
                                                                           exit(0);
                                                                           default:
                                                                           exit(0);

                                                  }
                         }

                         return 0;

}

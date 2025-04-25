#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size];
int top=-1;

void push()
{
if(top==size-1)
{
                         printf("\n stack overflow......");

}
else{
                         top++;
                         printf("Enter data");
                         scanf("%d",&stack[top]);

}
}
void pop()
{
                         if(top==-1)
                         {
                                                  printf("\n stack underflow");
                         }
                         else{
                                                  printf("\npopped ......%d",stack[top]);
                                                  top--;
                         }
}
int main()
{
                         int ch;
                         while(1)
                         {
                                                  printf("\n1......push");
                                                  printf("\n2.....pop");
                                                  printf("\n 3.....Exit");

                                                  printf("\n\n Enter choice");
                                                  scanf("%d",&ch);

                                                  switch(ch)
                                                  {
                                                                           case 1:push();
                                                                           break;
                                                                           case 2: pop();
                                                                           break;
                                                                           case 3: printf("Thanks for stack operation using array");
                                                                           exit(0);
                                                                           default:
                                                                           exit(0);
                                                  }
                         }
                         return 0;
}

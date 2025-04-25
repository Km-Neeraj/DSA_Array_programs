#include<stdio.h>
#include<stdlib.h>
#define size 10

int queue[size];
int front = -1, rear = -1;

int makenode()
{
    int data;
    printf("Enter data: ");
    scanf("%d", &data);
    return data;
}

void inqueue()
{
    if(rear == size - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        int data = makenode();
        if(front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = data;
    }
}

void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("Queue is already empty\n");
    }
    else
    {
        printf("Removing element %d from queue\n", queue[front]);
        front++;
    }
}

int main()
{
    int ch;

    while(1)
    {
        printf("\n1......inqueue");
        printf("\n2.......dequeue");
        printf("\n3........Exit");

        printf("\n\nEnter choice : ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: inqueue();
                    break;
            case 2: dequeue();
                    break;
            case 3: printf("Thanks a lot");
                    exit(0);
            default: exit(0);
        }
    }

    return 0;
}

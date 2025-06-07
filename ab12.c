#include<stdio.h>
void display()
{
static int counter = 0;
counter += 2;
printf("%d ", counter);
}
int main()
{
display(); display(); display();
return 0;
}
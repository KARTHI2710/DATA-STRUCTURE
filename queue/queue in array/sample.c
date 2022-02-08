#include<stdio.h>
  
#define size 3
int arr[size];

int front  = 0;
int rear   = 0;

int isQueueFull()
{
    if(rear == size)
        return 1;
    return 0;
}

void enqueue(int val)
{
    if(isQueueFull())
        return;
    else
        //Task 2: Correct the below logic
        arr[rear] = val; 
        rear++;
}

int isQueueEmpty()
{
    //Implement Task 1 here
    if(rear==front)
        return 1;
         return 0;
}

int dequeue()
{
    int a;
    if(isQueueEmpty())
        return -1;
    else
        //Task 2: Correct the below logic
        a=arr[front];
        front++;
        return a;   
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    printf("%d ",dequeue());
    printf("%d ",dequeue());
    printf("%d ",dequeue());
    printf("%d ",dequeue());
    return 0;
}

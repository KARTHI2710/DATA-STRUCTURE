#include<stdio.h>

#define size 3
int stack[size];
int top = -1;

int isStackFull()
{
    if(top == size - 1)
        return 1;
    return 0;
}

void push(int val)
{
    if(isStackFull())
        return;
    else
        //Task 2: Complete the logic
        //top=top+1;
        ++top;
        stack[top]=val;
        
}

int isStackEmpty()
{
    //Task 1: Write logic for isStackEmpty()
    if(top==-1){
        return 1;
    }
    return 0;
}

int pop()
{
	int a;
    if(isStackEmpty())
        return -1;
    else
        //Task 2: Complete the logic
        a=stack[top];
       // top=top-1;
       --top;
       return a;
        
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    printf("%d ",pop());
    push(40);
    printf("%d ",pop());
    printf("%d ",pop());
    printf("%d ",pop());
    printf("%d ",pop());

    return 0;
}

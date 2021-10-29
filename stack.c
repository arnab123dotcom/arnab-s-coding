#include<stdio.h>
int arr[100],c,n,top,x,i;
void push()
{
    if(top>=n-1)
    {
        printf("Stack is over flow\n");
        
    }
    else
    {
        printf("Enter a value to be pushed:\n");
        scanf("%d",&x);
        top++;
        arr[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("Stack is under flow\n");
    }
    else
    {
        printf("The popped element is %d\n",arr[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("The elements in stack\n");
        for(i=top; i>=0; i--)
            printf("%d\n",arr[i]);
    }
    else
    {
        printf("The stack is empty");
    }
}
int main()
{
    top=-1;
    printf("Enter the size of stack:\n");
    scanf("%d",&n);
    printf("1.PUSH\t2.POP\t3.DISPLAY\t4.EXIT\n");
    do
    {
        printf("Enter your Choice:\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("EXIT");
                break;
            }                
        }
    }
    while(c!=4);
    return 0;
}

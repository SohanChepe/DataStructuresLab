#include <stdio.h>

int pushStack(int, int);
int popStack(int);
int peekStack(int);
void retStack(int);

int pushQueue(int, int, int, int);
int popQueue(int, int, int);
int peekQueue(int, int);
void retQueue(int, int);

int stack[100];
int queue[100];

int main()
{
    int optoper = 0;
    printf("1. Press '1' for Stack Operations\n");
    printf("2. Press '2' for Queue Operations\n");

    printf("Enter option :- ");
    scanf("%d", &optoper);

    switch (optoper)
    {
    case 1:
        {
        
            int top = -1;

            int option = 0;

            char loopvar = 'Y';

            while(loopvar == 'Y' || loopvar == 'y')
            {
                printf("OPTION MENU :- \n");
                printf("1. Push (Pushes (adds) an element on top of the stack)\n");
                printf("2. Pop (Pops (deletes) the element from top of stack)\n");
                printf("3. Top (Returns the element present at top of the stack)\n");
                printf("4. View the stack\n");

                printf("\nChoose the operation to be performed on stack :- ");

                scanf("%d", &option);

                printf("\n");

                switch (option)
                {
                case 1:
                    {
                        int inpPush;
                        printf("Enter the element to be pushed :- ");
                        scanf("%d", &inpPush);

                        top = pushStack(top, inpPush);
                        break;
                    }
                case 2:
                    {
                        top = popStack(top);
                        break;
                    }
                case 3:
                    {
                        int answer = peekStack(top);
                        if(answer != -1) printf("Element at top is :- %d\n", answer);
                        else printf("Stack is empty!\n");
                        break;
                    }
                case 4:
                    {
                        retStack(top);
                        break;
                    }
                default:
                    {
                        printf("Enter a valid option.\n");
                        break;
                    }
                }

                if(option > 4) continue;
                else
                {
                    printf("Would you like to continue[Y/y] or stop[N/n]? ");
                    scanf("%s", &loopvar);

                    if(loopvar == 'N' || loopvar == 'n')
                    {
                        printf("Thank You.\n");
                        break;
                    }
                    else if(loopvar != 'Y' || loopvar != 'y')
                    {
                        printf("I'll take that as a yes.\n\n");
                        continue;
                    }
                }
            }

            break;
        }

        case 2:
        {
            int front = 0;
            int rear = 0;
            int count = 0;
            int option = 0;

            char loopvar = 'Y';

            while (loopvar == 'Y' || loopvar == 'y')
            {
                printf("OPTION MENU :- \n");
                printf("1. Push (Pushes (adds) an element on top of the queue)\n");
                printf("2. Pop (Pops (deletes) the element from top of queue)\n");
                printf("3. Top (Returns the element present at top of the queue)\n");
                printf("4. View the queue\n");

                printf("\nChoose the operation to be performed on queue :- ");

                scanf("%d", &option);

                printf("\n");

                switch (option)
                {
                case 1:
                    {
                        int inpPush = 0;
                        printf("Enter the element to be pushed into the queue :- ");
                        scanf("%d", &inpPush);
                        
                        int answer = pushQueue(inpPush, count, front, rear);

                        if(answer == count + 1)
                        {
                            count++;
                            rear++;
                        }

                        break;
                    }

                case 2:
                    {
                        int answer = popQueue(count, front, rear);
                        if(answer == count - 1)
                        {
                            count--;
                            front++;
                        }           

                        break;
                    }

                case 3:
                    {
                        int answer = peekQueue(front, rear);

                        if(answer != -16000)
                        {
                            printf("Element at top of queue is :- %d", answer);
                        }
                        break;
                    }

                case 4:
                    {
                        retQueue(front, rear); 
                        break;
                    }

                default:
                    {
                        printf("Enter a valid option.\n");
                        break;
                    }
                }

                if(option > 4) continue;
                else
                {
                    printf("Would you like to continue[Y/y] or stop[N/n]? ");
                    scanf("%s", &loopvar);

                    if(loopvar == 'N' || loopvar == 'n')
                    {
                        printf("Thank You.\n");
                        break;
                    }
                    else if(loopvar != 'Y' || loopvar != 'y')
                    {
                        printf("I'll take that as a yes.\n\n");
                        continue;
                    }
                }

            }
            break;
        }

        default:
        {
            printf("Enter a valid option.\n");
            break;
        }
    }
    return 0;
}

int pushStack(int top, int push1)
{
    top++;
    if(top > 99)
    {
        printf("Stack is full!\n");
    }
    else 
    {
        stack[top] = push1;
    }
    return top;
}

int popStack(int top)
{
    top--;
    return top;
}

int peekStack(int top)
{
    if(top <= -1) return -1;
    else return stack[top];
}

void retStack(int top)
{
    if(top == -1) printf("Stack is empty!\n");
    else 
    {
        for(int i = 0; i  <= top; i++)
        {
            printf("%d ", stack[i]);
        }

        printf("\n");
    }
}

int pushQueue(int push, int count, int front, int rear)
{
    if(count == 100)
    {
        printf("Queue is full!\n");
    }
    else
    {
        queue[rear%100] = push;
        count++;
        rear++;
    }

    return count;
}

int popQueue(int count, int front, int rear)
{
    if(front == rear)
    {
        printf("Queue if empty!\n");
    }
    else
    {
        front++;
        count--;
    }

    return count;
}

int peekQueue(int front, int rear)
{
    if(front == rear)
    {
        return -16000;
    }

    else
    {
        return queue[front%100];
    }
}

void retQueue(int front, int rear)
{
    if(front == rear)
    {
        printf("Queue is empty!\n");
    }
    
    else
    {
        for(int i = front; i < rear; i++)
        {
            printf("%d ", queue[i%100]);
        }

        printf("\n");
    }

}

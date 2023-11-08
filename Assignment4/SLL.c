#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

struct Node* insert(struct Node*, int, int);
struct Node* delete(struct Node*, int);
struct Node* reverse(struct Node*);

void display(struct Node*);

int main()
{
	struct Node* head = NULL;

	char optctrl = 'Y';

	while (optctrl == 'Y' || optctrl == 'y')
	{
		printf("OPTION MENU - \n");
		printf("1. Insert an element.\n");
		printf("2. Delete an element.\n");
		printf("3. Reverse the list.\n");
		printf("4. Display the list.\n");

		int option = 0;

		printf("Select the operation you wish to perform - ");
		scanf("%d", &option);

		switch (option)
		{
		case 1:
			{
				printf("Current list is :- ");
				display(head);

                int elNum = 0;
                printf("Enter the number of elements you wish to add :- ");
                scanf("%d", &elNum);

				int index;
				printf("Enter the INDEX at which you wish to insert the element :- ");
				scanf("%d", &index);

                for(int i = 0; i < elNum; i++)
                {   
                    int inpPush;
                    printf("Enter the element to be inserted :- ");
                    scanf("%d", &inpPush);

                    head = insert(head, index, inpPush);
                    index++;
                }

				printf("Modified list is :- ");
				display(head);

				break;
			}

        case 2:
            {
                int inpIndex;
                printf("Current list is :- ");
                display(head);

                printf("Enter the index at which you wish to delete the element :- ");
                scanf("%d", &inpIndex);

                head = delete(head, inpIndex);

                printf("Modified list is :- ");
                display(head);

                break;
            }
        
        case 3:
            {
                head = reverse(head);
                printf("Reversed list is :- ");
                display(head);

                break;
            }

        case 4:
            {
                printf("The current list is :- ");
                display(head);

                break;
            }
		
		default:
			{
				printf("Enter a valid option.\n");
				break;
			}
		}
		printf("Do you wish to continue? [Y/n]  ");
		scanf("%s", &optctrl);

        printf("\n");
	}
	

	return 0;	
}

struct Node* insert(struct Node* head, int index, int push)
{
	int j = 1;
    struct Node* temp = head;

    if(temp != NULL)
    {
        while(temp -> next != NULL)
        {
            temp = temp -> next;
            j++;
        }
    }

    if(head == NULL)
    {
        head = (struct Node*)malloc(sizeof(struct Node));
        head ->data = push;
        head ->next = NULL;
    }

    else if(index == 0)
    {
        struct Node* current = malloc(sizeof(struct Node));
        current -> data = push;
        current -> next = head;
        head = current;
    }

    else if(index == j)
    {
        struct Node* current = malloc(sizeof(struct Node));
        current -> data = push;
        current -> next = NULL;

        temp -> next = current;
    }

    else
    {
        temp = head;
        int i = 1;
        while(i <= index)
        {
            temp = temp -> next;
            i++;
            printf("%d \n", i);
        }

        struct Node* current = malloc(sizeof(struct Node));
        current -> data = push;
        current -> next = temp -> next;
        temp -> next = current;
    }

	return head;
}

struct Node* delete(struct Node* head, int index)
{
	struct Node* temp = head;

	int i = 0;

	if(index == 0)
	{
		head = head -> next;
	}

	else
	{
		while(i < index - 1)
		{
			temp = temp -> next;
			i++;
		}

		temp -> next = temp -> next -> next;
	}

	return head;
}

struct Node* reverse(struct Node* head)
{
	struct Node* prevptr = NULL;
	struct Node* nextptr = NULL;
	struct Node* currentptr = head;

	while(currentptr != NULL)
	{
		nextptr = currentptr -> next;
		currentptr -> next = prevptr;
		prevptr = currentptr;
		currentptr = nextptr;
	}

	head = prevptr;

	return head;
}

void display(struct Node* head)
{
	struct Node* temp = head;

	while(temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}

	printf("\n");
}

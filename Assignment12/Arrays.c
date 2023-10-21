#include <stdio.h>

void insert(int[], int, int, int);
void delete(int[], int, int);
void modify(int[], int, int);
void bubbleSort(int[], int);
void selectionSort(int[], int);
void insertionSort(int[], int);
int linearSearch(int[], int, int);
int binarySearch(int[], int, int);

int main()
{
    int option = 0;

    printf("OPTION MENU - \n");
    printf("1. Insert (Inserts an element at a particular index in an array)\n");
    printf("2. Delete (Deletes an element from a particular index in an array)\n");
    printf("3. Modify (Modifies an element present at a particular index in an array)\n");
    printf("4. Sort (Sorts the array into ascending order)\n");
    printf("5. Search (Returns the index of a particular element in an array)\n");

    switch (option)
    {
    case 1:
        {
            //Insert
            int length1 = 0;
            printf("Enter the length of the array :- ");
            scanf("%d", &length1);
            int inparr1[length1];
            printf("Enter an array of size %d :- \n", length1);
            for(int i = 0; i < length1; i++)
            {
                scanf("%d", &inparr1[i]);
            }

            int inpIndex = 0;
            printf("Enter the index at which the element needs to be entered :- ");
            scanf("%d", &inpIndex);

            int inpElement = 0;
            printf("Enter the element that needs to be entered :- ");
            scanf("%d", &inpElement);

            insert(inparr1, length1, inpElement, inpIndex);

            break;
        }
    
    case 2:
        {
            //Delete
            int length1 = 0;
            printf("Enter the length of the array :- ");
            scanf("%d", &length1);
            int inparr1[length1];

            printf("Enter an array of size %d :- \n", length1);
            for(int i = 0; i < length1; i++)
            {
                scanf("%d", &inparr1[i]);
            }

            int inpIndex = 0;
            printf("Enter the index from which the element needs to be deleted :- ");
            scanf("%d", &inpIndex);

            delete(inparr1, length1, inpIndex);
            break;
        }

    case 3:
        {
            //Modify
            int length1 = 0;
            printf("Enter the length of an array :- ");
            scanf("%d", &length1);

            int inparr1[length1];

            printf("Enter an array of size %d :- \n", length1);

            for(int i = 0; i < length1; i++)
            {
                scanf("%d", &inparr1[i]);
            }


            int index = 0;
            printf("Enter the index of the element which needs to be modified :- ");
            scanf("%d", &index);

            int element = 0;
            printf("Enter the replacement for the selected index :- ");
            scanf("%d", &element);

            modify(inparr1, element, index);

            break;
        }

        case 4:
            {
                //Sorting
                int option1 = 0;
                printf("SORTING OPTION MENU - \n");
                printf("1. Bubble Sort (Sorts the given array using bubble sort)\n");
                printf("2. Selection Sort (Sorts the given array using selection sort)\n");
                printf("3. Insertion Sort (Sorts the given array using insertion sort)\n");

                switch (option1)
                {
                case 1:
                    {
                        //Bubble Sort
                        int length1 = 0;
                        printf("Enter the length of the array :- ");
                        scanf("%d", &length1);
                        int inparr1[length1];
                        printf("Enter an array of size %d :- \n", length1);
                        for(int i = 0; i < length1; i++)
                        {
                            scanf("%d", &inparr1[i]);
                        }

                        bubbleSort(inparr1, length1);

                        break;
                    }
                
                case 2:
                    {
                        //Selection Sort
                        int length1 = 0;
                        printf("Enter the length of the array :- ");
                        scanf("%d", &length1);
                        int inparr1[length1];
                        printf("Enter an array of size %d :- \n", length1);
                        for(int i = 0; i < length1; i++)
                        {
                            scanf("%d", &inparr1[i]);
                        }

                        selectionSort(inparr1, length1);

                        break;
                    }
                
                case 3:
                    {
                        //Inserion Sort
                        int length1 = 0;
                        printf("Enter the length of the array :- ");
                        scanf("%d", &length1);
                        int inparr1[length1];
                        printf("Enter an array of size %d :- \n", length1);
                        for(int i = 0; i < length1; i++)
                        {
                            scanf("%d", &inparr1[i]);
                        }

                        insertionSort(inparr1, length1);
                    }
                
                default:
                    {
                        printf("Enter a valid option.\n");
                        break;
                    }
                }

                break;
            }
        case 5:
            {
                int option1 = 0;
                printf("SEARCHING OPTION MENU - \n");
                printf("1. Linear Search (Returns the actual index of the required element in an array)\n");
                printf("2. Binary Search (Returns the index of the required element after sorting the array in ascending order)\n");
                
                switch (option1)
                {
                case 1:
                    {
                        //Linear Search
                        int length1 = 0;
                        printf("Enter the length of the array :- ");
                        scanf("%d", &length1);
                        int inparr1[length1];
                        printf("Enter an array of size %d :- \n", length1);
                        for(int i = 0; i < length1; i++)
                        {
                            scanf("%d", &inparr1[i]);
                        }

                        int search1 = 0;
                        printf("Enter the element to be searched :- ");
                        scanf("%d", &search1);

                        int answer = linearSearch(inparr1, length1, search1);
                        if(answer != -1) printf("The index at which required element is present is :- %d\n", answer);
                        else printf("Element not found.\n");

                        break;
                    }

                case 2:
                    {
                        //Binary Search
                        int length1 = 0;
                        printf("Enter the length of the array :- ");
                        scanf("%d", &length1);
                        int inparr1[length1];
                        printf("Enter an array of size %d :- \n", length1);
                        for(int i = 0; i < length1; i++)
                        {
                            scanf("%d", &inparr1[i]);
                        }

                        int search1 = 0;
                        printf("Enter the element to be searched :- ");
                        scanf("%d", &search1);

                        int answer = binarySearch(inparr1, length1, search1);

                        if(answer != -1) printf("\nThe index at which required element is present is :- %d\n", answer);
                        else printf("\nElement not found.\n");
                        
                        break;
                    }
                
                default:
                    {
                        printf("Enter a valid option.\n");
                        break;
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

void insert(int arr1[], int length, int element, int index)
{
    int arr2[length+1];

    for(int i = 0; i < index; i++)
    {
        arr2[i] = arr1[i];
    }

    arr2[index] = element;

    for(int i = index+1; i < length+1; i++)
    {
        arr2[i] = arr1[i-1];
    }

    printf("The original array is :- \n");

    for(int i = 0; i < length; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\nThe new array is :- \n");

    for(int i = 0; i < length+1; i++)
    {
        printf("%d ", arr2[i]);
    }

    printf("\n");
}

void delete(int arr1[], int length, int index)
{
    int arr2[length-1];

    for(int i = 0; i < index; i++)
    {
        arr2[i] = arr1[i];
    }

    for(int i = index; i < length-1; i++)
    {
        arr2[i] = arr1[i+1];
    }

    printf("The original array is :- \n");

    for(int i = 0; i < length; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\nThe new array is :- \n");

    for(int i = 0; i < length-1; i++)
    {
        printf("%d ", arr2[i]);
    }

    printf("\n");
}

void modify(int arr1[], int element, int index)
{
    printf("Original array is :- \n");
    for(int i = 0; arr1[i] != '\0'; i++)
    {
        printf("%d ", arr1[i]);
    }

    arr1[index] = element;

    printf("\nModified array is :- \n");
    for(int i = 0; arr1[i] != '\0'; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\n");
}

void bubbleSort(int arr1[], int length)
{
    printf("Original array is :- \n");

    for(int i = 0; i < length; i++)
    {
        printf("%d ", arr1[i]);
    }

    for(int i = 0; i < length; i++)
    {
        for(int j = 0; j < length-1; j++)
        {
            if(arr1[j] > arr1[j+1])
            {
                int temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
        }
    }

    printf("\nSorted array (using bubble sort) is :- \n");

    for(int i = 0; i < length; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\n");
}

void selectionSort(int arr1[], int length)
{
    printf("Original array is :- \n");
    for(int i = 0; i < length; i++)
    {
        printf("%d ", arr1[i]);
    }

    for(int i = 0; i < length - 1; i++)
    {
        int min = i;
        for(int j = i+1; j < length; j++)
        {
            if(arr1[min] > arr1[j])
            {
                min = j;
            }
        }

        int temp = arr1[i];
        arr1[i] = arr1[min];
        arr1[min] = temp;
    }

    printf("\nSorted array (using selection sort) is :- \n");

    for(int i = 0; i < length; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\n");
}

void insertionSort(int arr1[], int length)
{
    printf("Original array is :- \n");

    for(int i = 0; i < length; i++)
    {
        printf("%d ", arr1[i]);
    }

    for(int i = 0; i < length-1; i++)
    {
        for(int j = i+1; j > 0; j--)
        {
            if(j > i && arr1[j] < arr1[i])
            {
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
                i--;
            }
            
        }
    }

    printf("\nSorted array (using insertion sort) is :- \n");

    for(int i = 0; i < length; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\n");
}

int linearSearch(int arr1[], int length, int search)
{
    int found = -1;

    for(int i = 0; i < length; i++)
    {
        if(arr1[i] == search)
        {
            found = i;
            break;
        }
    }

    return found;

}

int binarySearch(int arr1[], int length, int search)
{
    int found = -1;

    for(int i = 0; i < length - 1; i++)
    {
        int min = i;
        for(int j = i+1; j < length; j++)
        {
            if(arr1[min] > arr1[j])
            {
                min = j;
            }
        }

        int temp = arr1[i];
        arr1[i] = arr1[min];
        arr1[min] = temp;
    }

    printf("\nSorted array is :- \n");

    for(int i = 0; i < length; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\n");

    int low  = 0;
    int high = length-1;
    int mid = (low+high)/2;

    while(low <= mid)
    {
        mid = (low+high)/2;

        if(search > arr1[mid])
        {
            low = mid + 1;
            high = length - 1;
        }

        else if(search == arr1[mid])
        {
            found = mid;
            break;
        }
        else if(search < arr1[mid])
        {
            low = 0;
            high = mid - 1;
        }
    }

    return found;
}
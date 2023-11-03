#include <stdio.h>

struct Operations{
    int serial;
    char name[50];
    
    char symbol;
    int quantity;
    float rate;
    float cost;
};

struct Operations arr[20];
int counter = 0;

void insert(int);
void display(int);
void sort(int);

int main()
{
    insert(counter);
    counter++;
    insert(counter);
    counter++;
    display(counter);
    return 0;
}

void insert(int count)
{
    struct Operations o1;
    o1.serial = count + 1;

    int inp;
    int quant;
    printf("SELECTION MENU - \n");
    printf("1. Resistor \n2. Capacitor \n3. Inductor \n4. Transistor \n");
    printf("Selection :- ");
    scanf("%d", &inp);
    printf("Enter the quantity - ");
    scanf("%d", &quant);

    o1.quantity = quant;

    switch (inp)
    {
    case 1:
        {
            char res[] = "Resistor";
            for(int i = 0; i < 8; i++)
            {
                o1.name[i] = res[i];
            }
            o1.name[8] = '\0';
            o1.symbol = 'R';
            o1.rate = 1.50;
            break;
        }
    case 2:
        {
            char cap[] = "Capacitor";
            for(int i = 0; i < 9; i++)
            {
                o1.name[i] = cap[i];
            }
            o1.name[9] = '\0';
            o1.symbol = 'C';
            o1.rate = 2.00;
            break;
        }
    case 3:
        {
            char ind[] = "Inductor";
            for(int i = 0; i < 8; i++)
            {
                o1.name[i] = ind[i];
            }
            o1.name[8] = '\0';
            o1.symbol = 'L';
            o1.rate = 2.50;
            break;
        }
    case 4:
        {
            char tr[] = "Transistor";
            for(int i = 0; i < 10; i++)
            {
                o1.name[i] = tr[i];
            }
            o1.name[10] = '\0';
            o1.symbol = 'T';
            o1.rate = 4.00;
            break;
        }
    
    default:
        {
            printf("Enter a valid option. \n");
            insert(count);
            break;
        }
    }

    o1.cost = quant * o1.rate;

    arr[count] = o1;
}

void display(int count)
{
    struct Operations o2;

    printf("Sr No. \tName \t\tSymbol \tQuantity \tRate \t\tCost \n");

    for(int i = 0; i < count; i++)
    {
        printf("%d \t", arr[i].serial);
        printf("%s \t", arr[i].name);
        printf("%c \t", arr[i].symbol);
        printf("%d \t\t", arr[i].quantity);
        printf("%f \t", arr[i].rate);
        printf("%f \n", arr[i].cost);  
    }

    printf("\n");
}

void sort(int count)
{

}
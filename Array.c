#include <stdio.h> // printf and scanf
#include <conio.h> // getch and clrscr
#define SIZE 5     // 0 1 2 3 4

int num;
int arr[5]; // store the values
int location;

// to add the Nubmer
void add()
{
    if (SIZE == -1) // sat  // dy
    {
        printf("\n The Array is Full");
    }
    else
    {
        printf("\n Enter the Nubmer ");
        scanf("%d", &num);
    }
}

// Display all Numbers
void display()
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf("%d", arr[i]);
    }
}

// Remove the Number from array
void Remove()
{
    if (SIZE == 0)
    {
        printf("\nthere is number in array");
    }
    else
    {
        printf("Enter the Location u want to remove the Number : ");
        scanf("%d", &location);
        arr[location - 1] = 0; //
    }
}

// Search the Number
void search()
{
    int i;
    int found = 0; // not found

    printf("Enter the Number that u want to Search :");
    scanf("%d", &num);

    for (i = 0; i < SIZE; i++)
    {
        if (arr[i] == num)
        {
            found = 1;
        }
    }

    if (found == 1)
    {
        printf("\n Found");
    }
    else
    {
        printf("\n Not Found");
    }
}

void main()
{
    int choice;

    while (1)
    {

        printf("\n 1.. Add the Number");
        printf("\n 2.. Display the Number");
        printf("\n 3.. Remove the Number");
        printf("\n 4.. Search the Number");
        printf("\n 0.. Exit");

        printf("Enter Your choice :");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add();
            break;

        case 2:
            display();
            break;

        case 3:
            Remove();
            break;

        case 4:
            search();
            break;

            // case 0:
            //         exit(0);
            //     break;

        default:
            printf("Enter Valid Number !");
            break;
        }
    }
}
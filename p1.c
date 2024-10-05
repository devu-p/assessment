#include <stdio.h>

// Function prototypes
double addition(double, double);
double subtraction(double, double);
double multiplication(double, double);
double division(double, double);

void main()
{
    double  num1, num2, a = 1;
    int choice;

    while (a)
    {
    // display the menu 
    printf("\n----------Menu---------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

        if (!(choice >= 5 || choice <= 0))
        {
            printf("\nEnter first number: ");
            scanf("%lf", &num1);
            printf("\nEnter second number: ");
            scanf("%lf", &num2);
        }

        switch (choice)
        {
        case 1:
            printf("addition is :%lf", addition(num1, num2));
            break;
        case 2:
            printf("Subtraction is: %lf", subtraction(num1, num2));
            break;
        case 3:
            printf("Multiplication is : %lf", multiplication(num1, num2));
            break;
        case 4:
            printf("Division is : %.2f", division(num1, num2));
            break;
        default:           
            a = 0;
            printf("Invalid choice!!!\n");
            break;
        
        }
    }
}

// Function to perform addition
double addition(double num1, double num2)
{
    return num1 + num2;
}

// Function to perform subtraction
double subtraction(double num1, double num2)
{
    return num1 - num2;
}

// Function to perform multiplication
double multiplication(double num1, double num2)
{
    return num1 * num2;
}

// Function to perform division
double division(double num1, double num2)
{
    return num1 / num2;
}

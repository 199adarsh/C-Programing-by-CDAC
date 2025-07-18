//5. Write a program to create four function calculator. Four functions are +, -, *, /

#include <stdio.h>

int main () {
    int num1, num2, result;
    char operation;

    printf("Enter the First Number: ");
    scanf("%d", &num1);

    printf("Enter the Second Number: ");
    scanf("%d", &num2);

    printf("Enter your operation (+, -, *, /): ");
    scanf(" %c", &operation);

    switch(operation) {
        case '+':
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;
        case '/':
            if(num2 == 0)
                printf("Error: Division by zero\n");
            else {
                result = num1 / num2;
                printf("Result: %d\n", result);
            }
            break;
        default:
            printf("Invalid operation\n");
    }

    return 0;
}
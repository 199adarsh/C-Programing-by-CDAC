/* 1. Write a program to accept two numbers and display division of the two numbers. Check divide by zero
error. If divider is zero then display appropriate error message. */



#include <stdio.h>

int main(){
    int num1, num2, div;

    printf("\nEnter the First Number : ");
    scanf("%d", &num1);

    printf("\nEnter the Second Number : ");
    scanf("%d", &num2);

    if(num2 == 0) {
        printf("The Divider is Zero (Error)");
    } else {
        div = num1 / num2;
        printf("\nThe division is %d", div);
    }

    return 0;
}
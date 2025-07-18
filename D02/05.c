#include <stdio.h>


int fibonacci(int n) {

    if (n == 0)
        return 0;
    
        else if (n == 1)
        return 1;

    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter the term (n): ");

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        printf("Fibonacci term at position %d is: %d\n", n, fibonacci(n));
    }
    return 0;
}

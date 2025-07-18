#include <stdio.h>

void Fibonacci(int n) {
    int a = 0, b = 1, next;

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return;
    }

    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int terms;

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    Fibonacci(terms);

    return 0;
}

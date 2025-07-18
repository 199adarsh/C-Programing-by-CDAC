#include <stdio.h>

int main() {
    int n, i ,a = 0, b = 1, fib;

    printf("Enter n: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Invalid input. n must be positive.\n");
        return 1;
    }

    if(n == 1)
        fib = a;
    else {
        for(i = 3; i <= n; i++) {
            fib = a + b;
            a = b;
            b = fib;
        }
    }

    printf("The %dth term of the Fibonacci series is %d\n", n, fib);

    return 0;
}
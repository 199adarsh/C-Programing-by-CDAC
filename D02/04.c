#include <stdio.h>

void printBinary(int n) {
    if (n > 0) {
        printBinary(n / 2);  
        printf("%d", n % 2); 
    }
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number); 
    if (number == 0) {
       
        printf("Binary: 0\n");
    } else {
        printf("Binary: ");
        printBinary(number); 
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int num, original, sum = 0, reverse = 0, armstrong = 0, digits = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;


    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += digit;
        reverse = reverse * 10 + digit;

        int p = 1;
        for(int i = 0; i < digits; i++)
            p *= digit;
            armstrong += p;
            temp /= 10;
    }

    printf("Sum of digits: %d\n", sum);
    printf("Reversed number: %d\n", reverse);

    if (armstrong == original)
        printf("%d is an Armstrong number\n", original);
    else
        printf("%d is not an Armstrong number\n", original);

    return 0;
}
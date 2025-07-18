/*4. Write a program to accept 5 digit number and check whether it is a numeric palindrome. (if reversed
number is same as entered number it is called as palindrome) */

#include <stdio.h>

int main() {
    int num, temp, reverse = 0;
    printf("Enter a 5 digit number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10; 
    }
    printf("The reversed number is %d\n", reverse);

    if (reverse == num)
        printf("%d is a palindrome\n", num);
    else
        printf("%d is not a palindrome\n", num);

    return 0;
}
#include <stdio.h>

int main() {
    int base, index, i, result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter index : ");
    scanf("%d", &index);

    
    if(index < 0) {
        printf("[Error Negative integer ]\n");
        return 1;
    }

    for(i = 0; i < index; i++)
        result *= base;

    printf("%d power %d = %d\n", base, index, result);

    return 0;
}
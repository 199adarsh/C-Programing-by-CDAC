#include <stdio.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void primesInRange(int start, int end) {
    for (int i = start; i <= end; ++i) {
        if (is_prime(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int start, end;
    printf("Enter start number of range: ");
    scanf("%d", &start);

    printf("Enter end number of range: ");
    scanf("%d", &end);
    
    primesInRange(start, end);
    return 0;
}
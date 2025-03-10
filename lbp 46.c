#include <stdio.h>

int main() {
    int start, end;
    
    // Taking input for range
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);
    
    printf("Prime numbers between %d and %d are: ", start, end);
    
    for (int num = start; num <= end; num++) {
        if (num < 2) continue;
        int is_prime = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) {
            printf("%d ", num);
        }
    }
    printf("\n");
    
    return 0;
}
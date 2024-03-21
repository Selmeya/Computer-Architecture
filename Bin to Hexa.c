#include <stdio.h>

int main() {
    long num, binary_num, decimal_num = 0, base = 1, rem;

    printf("Enter a binary number:\n");
    scanf("%ld", &num);
    binary_num = num;

    while (num > 0) {
        decimal_num += (num % 10) * base;
        num /= 10;
        base *= 2;
    }

    printf("Hexadecimal: %lX\n", decimal_num);
    return 0;
}

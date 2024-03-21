#include <stdio.h>

int main() {
    int n;
    printf("Enter the hexadecimal number: ");
    scanf("%x", &n);
    printf("Decimal value: %d\n", n);

    printf("Octal value: ");
    printf("%o", n);

    return 0;
}

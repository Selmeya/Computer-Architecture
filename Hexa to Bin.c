#include <stdio.h>

int main() {
    int n;
    printf("Enter the hexadecimal number: ");
    scanf("%x", &n);
    printf("Decimal value: %d\n", n);

    printf("Binary value: ");
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    return 0;
}

#include <stdio.h>

int main() {
    int n;
    printf("Enter the decimal number: ");
    scanf("%d", &n);

    int a[10], i = 0;
    while (n > 0) {
        a[i++] = n % 8;
        n /= 8;
    }

    printf("Octal of Given Number is ");
    while (i-- > 0) {
        printf("%d", a[i]);
    }

    return 0;
}

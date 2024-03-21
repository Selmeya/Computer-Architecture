#include <stdio.h>

int main() {
    int a, b, sum;
    printf("Enter two integers for multiplication: ");
    scanf("%d %d", &a, &b);
    sum = a * b;

    printf("Integer multiplication:\n");
    printf("%d * %d = %d\n", a, b, sum);

    int x, y, difference;
    printf("\nEnter two integers for division: ");
    scanf("%d %d", &x, &y);
    difference = x / y;

    printf("\nInteger Division:\n");
    printf("%d / %d = %d\n", x, y, difference);

    return 0;
}

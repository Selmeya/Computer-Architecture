#include <stdio.h>

int main() {
    char octalnum;
    printf("Enter any octal number: ");
    while (scanf("%c", &octalnum) == 1) {
        switch (octalnum) {
            case '0': printf("0000");
            break;
            case '1': printf("0001");
            break;
            case '2': printf("0010");
            break;
            case '3': printf("0011");
            break;
            case '4': printf("0100");
            break;
            case '5': printf("0101");
            break;
            case '6': printf("0110");

            break;
            case '7': printf("0111");
            break;
            case '8':printf("1000"); break;
            case '9': printf("1001");break;
            default:
                return 0;
        }
    }
    return 0;
}

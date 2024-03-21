#include <stdio.h>
#include <stdlib.h>

#define C 256
#define M 1024

typedef struct { int v, t, d; } Cb;

void accessCache(int a, Cb *c) {
    int i = a % C, t = a / C;
    if (c[i].v && c[i].t == t)
        printf("Cache hit! Data found at address %d\n", a);
    else {
        printf("Cache miss! Data not found at address %d\n", a);
        c[i].v = 1; c[i].t = t; c[i].d = a;
    }
}

int main() {
    Cb c[C]; int m[M];
    for (int i = 0; i < C; i++) c[i] = (Cb){0, 0, 0};
    for (int i = 0; i < M; i++) m[i] = i;

    int a;
    printf("Enter the memory address (0 - %d): ", M - 1);
    scanf("%d", &a);
    accessCache(a, c);
    return 0;
}

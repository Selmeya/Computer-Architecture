#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array, size, i;
    printf("Enter size: ");
    scanf("%d", &size);
    array = (int *)malloc(size * sizeof(int));
    if (array == NULL) return 1;
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) scanf("%d", &array[i]);
    printf("Elements: ");
    for (i = 0; i < size; i++) printf("%d ", array[i]);
    printf("\n");
    free(array);
    return 0;
}

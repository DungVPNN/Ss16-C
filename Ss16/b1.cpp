#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;

    printf("C�ch 1:\n");
    printf("Gi� tr? c?a x: %d\n", x);
    printf("�?a ch? c?a x: %p\n", (void *)&x);

    printf("C�ch 2:\n");
    printf("Gi� tr? c?a x th�ng qua con tr?: %d\n", *ptr);
    printf("�?a ch? c?a x th�ng qua con tr?: %p\n", (void *)ptr);

    return 0;
}


#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;

    printf("Cách 1:\n");
    printf("Giá tr? c?a x: %d\n", x);
    printf("Ð?a ch? c?a x: %p\n", (void *)&x);

    printf("Cách 2:\n");
    printf("Giá tr? c?a x thông qua con tr?: %d\n", *ptr);
    printf("Ð?a ch? c?a x thông qua con tr?: %p\n", (void *)ptr);

    return 0;
}


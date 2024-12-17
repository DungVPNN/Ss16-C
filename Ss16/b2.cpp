#include <stdio.h>

void thayDoiGiaTri(int *a, int *b) {
    *a += 10;
    *b += 20;
}

int main() {
    int x = 5, y = 10;

    printf("Tru?c khi g?i hàm:\n");
    printf("x = %d, y = %d\n", x, y);

    thayDoiGiaTri(&x, &y);

    printf("Sau khi g?i hàm:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}


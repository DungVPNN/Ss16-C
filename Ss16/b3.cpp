#include <stdio.h>

void tinhTong(int a, int b, int *ketQua) {
    *ketQua = a + b;
}

int main() {
    int x = 7, y = 8, tong = 0;

    printf("Hai s? nguy�n ban d?u:\n");
    printf("x = %d, y = %d\n", x, y);

    tinhTong(x, y, &tong);

    printf("T?ng c?a x v� y l�: %d\n", tong);

    return 0;
}


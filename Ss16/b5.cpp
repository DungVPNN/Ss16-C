#include <stdio.h>

void capNhatPhanTu(int *arr, int viTri, int giaTri) {
    arr[viTri] = giaTri;
}

void inMang(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Mang ban dau:\n");
    inMang(arr, size);

    int viTri = 2;
    int giaTriMoi = 99;

    capNhatPhanTu(arr, viTri, giaTriMoi);

    printf("Mang sau khi cap nhat phan tu tai vi tri %d la %d:\n", viTri, giaTriMoi);
    inMang(arr, size);

    return 0;
}


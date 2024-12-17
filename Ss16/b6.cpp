#include <stdio.h>

int timKiemPhanTu(int *arr, int size, int giaTriCanTim) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == giaTriCanTim) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6, 7, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int giaTriCanTim = 5;

    printf("Mang: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nGia tri can tim: %d\n", giaTriCanTim);

    int viTri = timKiemPhanTu(arr, size, giaTriCanTim);

    if (viTri != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri: %d\n", giaTriCanTim, viTri);
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", giaTriCanTim);
    }

    return 0;
}


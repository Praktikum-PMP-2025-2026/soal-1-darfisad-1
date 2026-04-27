/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 3 - Structures and Dynamic Array
 *   Hari dan Tanggal    : Senin, 27 April 2026
 *   Nama (NIM)          : Darfis Ahmad Dostriano (13224096)
 *   Nama File           : Sensor_Badai.c
 *   Deskripsi           : Membuat sorting badai
 * 
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = NULL;
    int size = 0;
    int value;
    float median;

    while (scanf("%d", &value) == 1 && value != -1) {
        arr = realloc(arr, (size + 1) * sizeof(int));
        arr[size++] = value;
    }
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("COUNT %d ", size);
    printf("SORTED ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    if (size % 2 == 1) {
        median = arr[(size - 1) / 2];
        printf("MEDIAN %g", median);
    } else {
        median = (arr[(size - 1) / 2 + 1] + arr[(size - 1) / 2]) / 2.0f;
        if ((arr[(size-1)/2] + arr[(size-1)/2+1])%2 == 0){
            printf("MEDIAN %g", median);
        }
        else {
            printf("MEDIAN %.2f", median);
        }
    }
    return 0;
}

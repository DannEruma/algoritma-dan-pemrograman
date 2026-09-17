#include <stdio.h>

int main () {
    int hari;
    printf("Hari Ke...: ");
    scanf("%d", &hari);

    if (hari == 1) {
        printf("Minggu");
    } else if (hari == 2) {
        printf("Senin");
    } else if (hari == 3) {
        printf("Selasa");
    } else if (hari == 4) {
        printf("Rabu");
    } else if (hari == 5) {
        printf("Kamis");
    } else if (hari == 6) {
        printf("Jumat");
    } else if (hari == 7) {
        printf("Sabtu");
    } else {
        printf("Nilai yang anda input salah!");
    }
    return 0;
}


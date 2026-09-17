#include <stdio.h>

int main () {
    int nilai;
    printf("Masukkan nilai: ");
    scanf("%d", &nilai);
    
    if (nilai >= 70) {
        printf("Anda Lulus!");
    } else {
        printf("Anda Tidak Lulus!");
    }
    return 0;
}


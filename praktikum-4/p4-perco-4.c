#include <stdio.h>

int main() {
    char huruf;

    printf("Masukkan nilai huruf (A, B, C, D, E): ");
    scanf("%c", &huruf);

    if (huruf == 'A') {
        printf("Nilai Angka %d", 4);
    } else if (huruf == 'B') {
        printf("Nilai Angka %d", 3);
    } else if (huruf == 'C') {
        printf("Nilai Angka %d", 2);
    } else if(huruf == 'D') {
        printf("Nilai Angka %d", 1);
    } else if(huruf  == 'E') {
        printf("Nilai Angka %d", 0);
    } else {
        printf("Anda Salah Masukkan Nilai Huruf!");
    }
    return 0;
}
#include <stdio.h>

int main () {
    char nilai_huruf;
    printf("Masukkan nilai huruf (A, B, C, D, E): ");
    scanf("%c", &nilai_huruf);

    switch (nilai_huruf)
    {
    case 'A':
        printf("Nilainya: %d", 4);
        break;
    case 'B':
        printf("Nilainya: %d", 3);
        break;
    case 'C':
        printf("Nilainya: %d", 2);
        break;
    case 'D':
        printf("Nilainya: %d", 1);
        break;
    case 'E':
        printf("Nilainya: %d", 0);
        break;
    default:
    printf("Anda Salah Memasukkan nilai huruf!");
        break;
    }
    return 0;
}
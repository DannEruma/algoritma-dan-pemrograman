#include <stdio.h>
int main()
{
    float luas, alas, tinggi;

    printf("Masukkan alas: ");
    scanf("%f", &alas);

    printf("Masukkan tinggi: ");
    scanf("%f", &tinggi);

    float luas = 0.5 * alas * tinggi;

    printf("Luas segitiga adalah: %f\n", luas);

    return 0;
}


#include <stdio.h>
int main()
{
    float volume, panjang, lebar, tinggi;

    printf("Masukkan panjang(cm): ");
    scanf("%f", &panjang);
    printf("Masukkan lebar(cm): ");
    scanf("%f", &lebar);
    printf("Masukkan tinggi(cm): ");
    scanf("%f", &tinggi);

    volume = panjang * lebar * tinggi;
    printf("Jadi Volumenya adalah: %.2f cm\n", volume);
    return 0;
}




#include <stdio.h>

int main()
{
    float nomor, alas, tinggi, panjang, lebar, sisi, luas;

    printf("Pilih Bangun Datar! : \n");
    printf("1. Segitiga\n");
    printf("2. Persegi Panjang\n");
    printf("3. Bujur Sangkar\n");
    printf("Masukkan Pilihan Anda: ");
    scanf("%f", &nomor);

    if (nomor == 1) {
        printf("Pilihan anda adalah Segitiga!\n");
        printf("Masukkan nilai alas: ");
        scanf("%f", &alas);
        printf("Massukkan nilai tinggi: ");
        scanf("%f", &tinggi);
        float luas = 0.5 * alas * tinggi;
        printf("Jadi luasnya adalah %f", luas );
        } else if (nomor == 2) {
            printf("Pilihan anda adalah Persegi Panjang!\n");
            printf("Masukkan nilai panjang: ");
            scanf("%f", &panjang);
            printf("Massukkan nilai lebar: ");
            scanf("%f", &lebar);
            float luas = panjang * lebar;
            printf("Jadi luasnya adalah %f", luas );
        } else if (nomor == 3) {
            printf("Pilihan anda adalah Bujur Sangkar!\n");
            printf("Masukkan nilai sisi: ");
            scanf("%f", &sisi);
            float luas = sisi * sisi;
            printf("Jadi luasnya adalah %f", luas );
        } else {
            printf("PILIHAN ANDA TIDAK VALID!");
        }
        
    return 0;
}



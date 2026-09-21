#include <stdio.h>

int main()
{
    int nomor, alas, tinggi, panjang, lebar, sisi, luas;

    printf("Pilih Bangun Datar! : \n");
    printf("1. Segitiga\n");
    printf("2. Persegi Panjang\n");
    printf("3. Bujur Sangkar\n");
    printf("Masukkan Pilihan Anda: ");
    scanf("%d", &nomor);

    if (nomor == 1) {
        printf("Pilihan anda adalah Segitiga!\n");
        printf("Masukkan nilai alas: ");
        scanf("%d", &alas);
        printf("Massukkan nilai tinggi: ");
        scanf("%d", &tinggi);
        luas = 0.5 * alas * tinggi;
        printf("Jadi luasnya adalah %d", luas );
        } else if (nomor == 2) {
            printf("Pilihan anda adalah Persegi Panjang!\n");
            printf("Masukkan nilai panjang: ");
            scanf("%d", &panjang);
            printf("Massukkan nilai lebar: ");
            scanf("%d", &lebar);
            luas = panjang * lebar;
            printf("Jadi luasnya adalah %d", luas );
        } else if (nomor == 3) {
            printf("Pilihan anda adalah Bujur Sangkar!\n");
            printf("Masukkan nilai sisi: ");
            scanf("%d", &sisi);
            luas = sisi * sisi;
            printf("Jadi luasnya adalah %d", luas );
        } else {
            printf("PILIHAN ANDA TIDAK VALID!");
        }
        
    return 0;
}

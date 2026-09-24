#include <stdio.h>

int main() {
    int a, b, c, hasil;

    printf("Masukkan 3 Angka: ");
    scanf("%d %d %d", &a , &b, &c);

    if (a<b)
        if (a<c) 
        hasil = a;
     else 
        hasil = c;
     else if (b<c)
        hasil = b;
     else
        hasil = c;
    printf("Angka yang terkecil adalah %d", hasil);
    return 0;
}

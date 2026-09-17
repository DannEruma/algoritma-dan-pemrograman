#include <stdio.h>
int main()
{
    float a,b,c;

    printf("Masukkan nilai a: ");
    scanf("%f", &a);
    printf("Masukkan nilai b: ");
    scanf("%f", &b);
    printf("Masukkan nilai c: ");
    scanf("%f", &c);

    c=a;
    a=b;
    b=c;

    printf("Nilai pertama sekarang: %.2f\n", a);
    printf("Nilai kedua sekarang: %.2f\n", b);
    printf("Nilai ketiga sekarang: %.2f\n", c);
    return 0;
}


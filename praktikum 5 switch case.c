#include <stdio.h>

int main() {
    int pilihan;
    float a, b, hasil;

    printf("1. Luas Persegi\n");
    printf("2. Luas Persegi Panjang\n");
    printf("3. Luas Segitiga\n");
    printf("Pilih menu: ");
    scanf("%d", &pilihan);

    printf("Masukkan dua bilangan: ");
    scanf("%f %f", &a, &b);

    switch (pilihan) {
        case 1:
            hasil = a * a;
            printf("Hasil = %.2f\n", hasil);
            break;

        case 2:
            hasil = a * b;
            printf("Hasil = %.2f\n", hasil);
            break;

        case 3:
            hasil = 0.5 * a * b;
            printf("Hasil = %.2f\n", hasil);
            break;

        default:
            printf("Pilihan tidak valid\n");
    }

    return 0;
}
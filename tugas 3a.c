#include <stdio.h>

int main() {
    float suhu;

    printf("Masukkan suhu (dalam C): ");
    scanf("%f", &suhu);

    if (suhu <= 20) {
        printf("Suhu di bawah: Dingin\n");
    } else if (suhu >= 20 && suhu <= 29) {
        printf("Suhu dalam kategori: Normal\n");
    } else {
        printf("Suhu di atas: Panas\n");
    }

    return 0;
}
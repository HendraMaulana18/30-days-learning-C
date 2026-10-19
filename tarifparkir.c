#include <stdio.h>
#include <stdlib.h>

int main() {
    int durasi;
    long long tarif;

    printf("Masukkan durasi parkir (dalam jam): ");
    scanf("%d", &durasi);

    if (durasi > 24) {
        printf("Durasi parkir tidak boleh lebih dari 24 jam.\n");
        return 1;
    }

    if (durasi <= 0) {
        printf("Durasi parkir tidak valid.\n");
        return 1;
    }

    if (durasi == 1) {
        tarif = 5000;
    } else {
        tarif = 5000 + (durasi - 1) * 2000;
    }

    printf("Tarif parkir: Rp %lld\n", tarif);

    return 0;
}
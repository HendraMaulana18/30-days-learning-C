#include <stdio.h>

int main() {
    int usia;

    printf("Masukkan usia: ");
    scanf("%d", &usia);
    

    if (usia >= 17) {
        printf("Usia sudah memenuhi syarat\n");
    } else {
        printf("Usia belum memenuhi syarat\n");
    }

    return 0;
}

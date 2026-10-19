#include <stdio.h>
#include <conio.h>

int main() {
    int nilai_Mahasiswa;
    printf("Masukkan nilai mahasiswa: ");
    scanf("%d", &nilai_Mahasiswa);

    if (nilai_Mahasiswa > 60) {
        printf("Lulus\n");
        if (nilai_Mahasiswa > 85) {
            printf("Predikat: A\n");
        } else {
            printf("Predikat: B\n");
        }
    } else {
        printf("Tidak Lulus\n");
    }
    return 0;
    getch();
}

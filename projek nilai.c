#include <stdio.h>
int main()
{
    int nilai;
    printf("Masukkan Nilai : ");
    scanf("%d",&nilai);

    if(nilai >= 80){
        printf("Nilai Anda A\n");
    }
    if(nilai >= 60){
        printf("Nilai Anda B\n");
    }
    if(nilai >= 40){
        printf("Nilai Anda C\n");
    }
    if(nilai >= 20){
        printf("Nilai Anda D\n");
    }
    else{
        printf("Bungul\n");
    }
    return 0;
}
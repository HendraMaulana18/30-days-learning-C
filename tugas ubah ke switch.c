#include <stdio.h>
#include <conio.h>

int main() {
    char letter;
    int sum, valid_flag;

    printf("masukkan huruf: ");
    scanf("%c", &letter);

    switch (letter) {
        case 'X':
            sum = 0;
           printf("output = %d", sum);
            break;
        case 'Z':
            valid_flag = 1;
            printf("output = %d", valid_flag);
            break;
        case 'A':
            sum = 1;
            printf("output = %d", sum);
            break;
        default:
            printf("Unknown letter -->%c", letter);
            break;
    }

    printf("sum = %d\nvalid_flag = %d\n", sum, valid_flag);
    return 0;
    getch();
}


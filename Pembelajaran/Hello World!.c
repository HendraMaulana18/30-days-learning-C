#include <stdio.h> // wajib ada untuk menggunakan fungsi printf
int main() // fungsi utama yang akan dijalankan pertama kali
{
    printf("Hello, world!");
    printf("Hello, world!\n");// \n adalah karakter escape untuk membuat baris baru
    printf("Hello, world!\t");// \t adalah karakter escape untuk membuat tab
    printf("Hello, world!\n\n");// \n\n adalah karakter escape untuk membuat 2 baris baru
    printf("Hello, world! \\");// \\ adalah karakter escape untuk menampilkan karakter backslash
    printf("They call him \"Hello World!\".");// \" adalah karakter escape untuk menampilkan tanda kutip ganda
    
    return 0; 
}
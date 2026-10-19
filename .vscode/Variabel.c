#include <stdio.h>

int main() {
  // buat variabel
  int myNum = 15;              // int adalah tipe data untuk bilangan bulat dan myNum adalah nama variabelnya
  float myFloatNum = 5.99;     // float adalah tipe data untuk bilangan desimal dan myFloatNum adalah nama variabelnya
  char myLetter = 'D';         // char adalah tipe data untuk karakter dan myLetter adalah nama variabelnya

  // Print variables
  printf("%d\n", myNum); // %d adalah format spesifier untuk menampilkan bilangan bulat
  printf("%f\n", myFloatNum); // %f adalah format spesifier untuk menampilkan bilangan desimal
  printf("%c\n", myLetter); // %c adalah format spesifier untuk menampilkan karakter
  return 0;
}
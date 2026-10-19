#include <stdio.h>

int main() {
  int myNum = 15;
  
  int myOtherNum = 23;

  // ubah nilai myNum menjadi nilai myOtherNum
  myNum = myOtherNum;

  // myNum sekarang memiliki nilai 23
  printf("%d", myNum);
  
  return 0;
}
// https://www.mycompiler.io/ja/online-c-compiler
// https://efrei.poupa.net/Programmation%20en%20C/Cours/The_C_Puzzle_Book.pdf
#include <stdio.h>

int main() {
    int x;
    x = - 3 + 4 * 5 - 6; printf("%d\n", x);
    x = 3 + 4 % 5 - 6; printf("%d\n", x);
    x = -3 * 4 % -6 / 5; printf("%d\n", x);
    x = ( 7 + 6 ) % 5 / 2; printf("%d\n", x);
    return 0;
}
/* 
11
1
0
1
  */

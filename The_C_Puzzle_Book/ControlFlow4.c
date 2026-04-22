// https://www.mycompiler.io/ja/online-c-compiler
// https://efrei.poupa.net/Programmation%20en%20C/Cours/The_C_Puzzle_Book.pdf

#include <stdio.h> 
#define PR(format,value) printf(#value "= %format\t",(value)) 
#define NL putchar('\n') 
#define PRINT1(f,x1) PR(f,x1), NL 
#define PRINT2(f,x1, x2) PR(f,x1), PRINT1(f,x2) 
#define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3) 
#define PRINT4(f,x1,x2,x3,x4) PR(f,x1), PRINT3(f,x2,x3,x4) 

char input[] = "SSSWILTECH1\1\11W\1WALLMP1";

int main( )
{
    int i, c;
    for( i=2; (c=input[i]) !='\0'; i++) {
        switch(c) {
        case 'a': 
            putchar('i'); continue;
        case '1': 
            break;
        case 1: 
            while( (c=input[++i])!='\1' && c != '\0' );
        case 9: 
            putchar('S');
        case 'E': 
        case 'L': continue;
        default: 
            putchar(c); continue;
        }
        putchar (' '); 
    }
    putchar ('\n');
}

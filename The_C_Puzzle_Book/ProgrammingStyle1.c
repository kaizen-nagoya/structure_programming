// https://www.mycompiler.io/ja/online-c-compiler
// https://efrei.poupa.net/Programmation%20en%20C/Cours/The_C_Puzzle_Book.pdf

#include <stdio.h> 
#define PR(format,value) printf(#value "= %" #format "\t", (value))
#define NL putchar('\n') 
#define PRINT1(f,x1) PR(f,x1), NL 
#define PRINT2(f,x1, x2) PR(f,x1), PRINT1(f,x2) 
#define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3) 
#define PRINT4(f,x1,x2,x3,x4) PR(f,x1), PRINT3(f,x2,x3,x4) 

#define A 0
#define B 0
#define B1 PRINT1(s,"B")
#define C 0
#define D PRINT1(s,"D")
#define E PRINT1(s,"E")
#define F PRINT1(s,"F")
#define OTHER0 PRINT1(s,"OTHER0")
#define OTHERa PRINT1(s,"OTHERa")
#define OTHERS PRINT1(s,"OTHERS")
#define DIGIT PRINT1(s,"DIGIT")
#define ALPHA PRINT1(s,"ALPHA")

int main() {
   int c;
    while (A) { 
    if(B) continue; 
    C; 
    } 
    do { 
        if(!A) continue; 
        else B1; 
        C; 
    } while(A); 
    
    if(A) 
        if(B) 
            if(C) D; 
            else;
        else;
    else
        if(B) 
            if(C) E; 
            else F; 
        else;

    while ( (c=getchar() ) !='\n' ) { 
    if( c==' ' ) continue; 
    if( c=='\t' ) continue; 
    if( c<'O' ) return(OTHER0); 
    if( c<='9' ) return(DIGIT); 
    if( c<'a' ) return(OTHERa); 
    if( c<='z' ) return(ALPHA); 
//(Programming Style 1.1) 
//(Programming Style 1.2) 
//(Programming Style 1.3) 
    return(OTHERS); 
    }
}
/*
"OTHER0"= OTHER0
*/

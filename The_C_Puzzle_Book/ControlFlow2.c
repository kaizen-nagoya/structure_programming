// https://www.mycompiler.io/ja/online-c-compiler
// https://efrei.poupa.net/Programmation%20en%20C/Cours/The_C_Puzzle_Book.pdf

#include <stdio.h> 
#define PR(format,value) printf(#value "= %" #format "\t",(value))
#define NL putchar('\n')
#define PRINT1(f,x1) PR(f,x1), NL
#define PRINT2(f,x1,x2) PR(f,x1), PRINT1(f,x2)
#define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3)
#define PRINT4(f,x1,x2,x3,x4) PR(f,x1), PRINT3(f,x2,x3,x4)

int main() {
    int x, y, z;

    x = y = 0;
    while( y < 10 ) ++y; x += y;
    PRINT2(d,x,y);

    x = y = 0;
    while( y < 10 ) x += ++y;
    PRINT2(d,x,y);
    
    y = 1 ;
    while ( y < 10 ){
        x = y++; z = ++y;
    }
    PRINT3(d, x, y, z);
    
    for( y = 1; y < 10; y++ ) x = y;
    PRINT2(d, x, y);

    for( y = 1; (x = y) < 10; y++)
    PRINT2(d, x, y);

    for( x = 0, y = 1000; y > 1; x++, y /= 10 )
        PRINT2 (d, x, y) ;
    
}

/*
実行結果
x= 10	y= 10	
x= 55	y= 10	
x= 9	y= 11	z= 11	
x= 9	y= 10	
x= 1	y= 1	
x= 2	y= 2	
x= 3	y= 3	
x= 4	y= 4	
x= 5	y= 5	
x= 6	y= 6	
x= 7	y= 7	
x= 8	y= 8	
x= 9	y= 9	
x= 0	y= 1000	
x= 1	y= 100	
x= 2	y= 10	


理想結果
x = 10  Y = 10 
x = 55  y = 10 
x = 9   y = 11  z = 11 
x = 9   y = 10 
x = 10  y = 10 
x = 0   y = 1000
x = 1   y = 100
x = 2   y = 10
*/

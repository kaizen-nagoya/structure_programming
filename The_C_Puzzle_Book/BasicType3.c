// https://www.mycompiler.io/ja/online-c-compiler
// https://efrei.poupa.net/Programmation%20en%20C/Cours/The_C_Puzzle_Book.pdf

#include <stdio.h> 
#define PR(x) printf("x = %g\t",(double)(x» 
#define NL putchar('\n') 
#define PRINT1(x1) PR(x1); NL 
#define PRINT2(x1,x2) PR(x1); PRINT1(x2) 
int main(vpod) 
{ 
	ouble d=3.2, X; 
	nt i=2, y; 
	 = (y-d/i)*2; PRINT2(x,y); 
	 - (x=d/i)*2; PRINT2(x,y); 
	 d * (x=2.5/d); PRINT1(y); 
	 d * (y = «int)2.9+1.1)/d); PRINT2(x,y); 
}
//PUZZLE 
//(Basic TypeJ 
//(Basic TypeJ 
//(Basic Typej 
//(Basic Typej

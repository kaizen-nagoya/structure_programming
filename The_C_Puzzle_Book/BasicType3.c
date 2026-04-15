// https://www.mycompiler.io/ja/online-c-compiler
// https://efrei.poupa.net/Programmation%20en%20C/Cours/The_C_Puzzle_Book.pdf
// https://www.mycompiler.io/ja/online-c-compiler
// https://efrei.poupa.net/Programmation%20en%20C/Cours/The_C_Puzzle_Book.pdf

#include <stdio.h> 
#define PR(x) printf("x = %g\t",(double)(x))
#define NL putchar('\n') 
#define PRINT1(x1) PR(x1); NL 
#define PRINT2(x1,x2) PR(x1); PRINT1(x2) 
int main(void) 
{ 
	double d=3.2, x; 
	int i=2, y; 
	 x= (y=d/i)*2; PRINT2(x,y); 
	 y= (x=d/i)*2; PRINT2(x,y); 
	 y= d * (x=2.5/d); PRINT1(y); 
	 x= d * (y = ((int)2.9+1.1)/d); PRINT2(x,y); 
}
// x = 2	x = 1	
// x = 1.6	x = 3	
// x = 2	
// x = 0	x = 0	
/*
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
*/
//PUZZLE 
//(Basic TypeJ 
//(Basic TypeJ 
//(Basic Typej 
//(Basic Typej
/*
main.c: In function 'main':
main.c:9:5: warning: type of 'vpod' defaults to 'int' [-Wimplicit-int]
    9 | int main(vpod)
      |     ^~~~
main.c:11:9: error: unknown type name 'ouble'; did you mean 'double'?
   11 |         ouble d=3.2, X;
      |         ^~~~~
      |         double
main.c:12:9: error: unknown type name 'nt'; did you mean 'int'?
   12 |         nt i=2, y;
      |         ^~
      |         int
main.c:13:10: error: expected expression before '=' token
   13 |          = (y-d/i)*2; PRINT2(x,y);
      |          ^
main.c:5:43: error: stray '\302' in program
    5 | #define PR(x) printf("x = %g\t",(double)(x<U+00BB>
      |                                           ^~~~~~~~
main.c:8:23: note: in expansion of macro 'PR'
    8 | #define PRINT2(x1,x2) PR(x1); PRINT1(x2)
      |                       ^~
main.c:13:23: note: in expansion of macro 'PRINT2'
   13 |          = (y-d/i)*2; PRINT2(x,y);
      |                       ^~~~~~
main.c:13:30: error: 'x' undeclared (first use in this function)
   13 |          = (y-d/i)*2; PRINT2(x,y);
      |                              ^
main.c:5:42: note: in definition of macro 'PR'
    5 | #define PR(x) printf("x = %g\t",(double)(x»
      |                                          ^
main.c:13:23: note: in expansion of macro 'PRINT2'
   13 |          = (y-d/i)*2; PRINT2(x,y);
      |                       ^~~~~~
main.c:13:30: note: each undeclared identifier is reported only once for each function it appears in
   13 |          = (y-d/i)*2; PRINT2(x,y);
      |                              ^
main.c:5:42: note: in definition of macro 'PR'
    5 | #define PR(x) printf("x = %g\t",(double)(x»
      |                                          ^
main.c:13:23: note: in expansion of macro 'PRINT2'
   13 |          = (y-d/i)*2; PRINT2(x,y);
      |                       ^~~~~~
main.c:8:29: error: expected ')' before ';' token
    8 | #define PRINT2(x1,x2) PR(x1); PRINT1(x2)
      |                             ^
main.c:13:23: note: in expansion of macro 'PRINT2'
   13 |          = (y-d/i)*2; PRINT2(x,y);
      |                       ^~~~~~
main.c:5:41: note: to match this '('
    5 | #define PR(x) printf("x = %g\t",(double)(x»
      |                                         ^
main.c:8:23: note: in expansion of macro 'PR'
    8 | #define PRINT2(x1,x2) PR(x1); PRINT1(x2)
      |                       ^~
main.c:13:23: note: in expansion of macro 'PRINT2'
   13 |          = (y-d/i)*2; PRINT2(x,y);
      |                       ^~~~~~
main.c:5:43: error: stray '\302' in program
    5 | #define PR(x) printf("x = %g\t",(double)(x<U+00BB>
      |                                           ^~~~~~~~
main.c:7:20: note: in expansion of macro 'PR'
    7 | #define PRINT1(x1) PR(x1); NL
      |                    ^~
main.c:8:31: note: in expansion of macro 'PRINT1'
    8 | #define PRINT2(x1,x2) PR(x1); PRINT1(x2)
      |                               ^~~~~~
main.c:13:23: note: in expansion of macro 'PRINT2'
   13 |          = (y-d/i)*2; PRINT2(x,y);
      |                       ^~~~~~
main.c:5:43: error: stray '\302' in program
    5 | #define PR(x) printf("x = %g\t",(double)(x<U+00BB>
      |                                           ^~~~~~~~
main.c:8:23: note: in expansion of macro 'PR'
    8 | #define PRINT2(x1,x2) PR(x1); PRINT1(x2)
      |                       ^~
main.c:14:23: note: in expansion of macro 'PRINT2'
   14 |          - (x=d/i)*2; PRINT2(x,y);
      |                       ^~~~~~
main.c:5:43: error: stray '\302' in program
    5 | #define PR(x) printf("x = %g\t",(double)(x<U+00BB>
      |                                           ^~~~~~~~
main.c:7:20: note: in expansion of macro 'PR'
    7 | #define PRINT1(x1) PR(x1); NL
      |                    ^~
main.c:8:31: note: in expansion of macro 'PRINT1'
    8 | #define PRINT2(x1,x2) PR(x1); PRINT1(x2)
      |                               ^~~~~~
main.c:14:23: note: in expansion of macro 'PRINT2'
   14 |          - (x=d/i)*2; PRINT2(x,y);
      |                       ^~~~~~
main.c:5:43: error: stray '\302' in program
    5 | #define PR(x) printf("x = %g\t",(double)(x<U+00BB>
      |                                           ^~~~~~~~
main.c:7:20: note: in expansion of macro 'PR'
    7 | #define PRINT1(x1) PR(x1); NL
      |                    ^~
main.c:15:25: note: in expansion of macro 'PRINT1'
   15 |          d * (x=2.5/d); PRINT1(y);
      |                         ^~~~~~
main.c:16:19: error: stray '\302' in program
   16 |          d * (y = <U+00AB>int)2.9+1.1)/d); PRINT2(x,y);
      |                   ^~~~~~~~
main.c:5:43: error: stray '\302' in program
    5 | #define PR(x) printf("x = %g\t",(double)(x<U+00BB>
      |                                           ^~~~~~~~
main.c:8:23: note: in expansion of macro 'PR'
    8 | #define PRINT2(x1,x2) PR(x1); PRINT1(x2)
      |                       ^~
main.c:16:37: note: in expansion of macro 'PRINT2'
   16 |          d * (y = «int)2.9+1.1)/d); PRINT2(x,y);
      |                                     ^~~~~~
main.c:5:43: error: stray '\302' in program
    5 | #define PR(x) printf("x = %g\t",(double)(x<U+00BB>
      |                                           ^~~~~~~~
main.c:7:20: note: in expansion of macro 'PR'
    7 | #define PRINT1(x1) PR(x1); NL
      |                    ^~
main.c:8:31: note: in expansion of macro 'PRINT1'
    8 | #define PRINT2(x1,x2) PR(x1); PRINT1(x2)
      |                               ^~~~~~
main.c:16:37: note: in expansion of macro 'PRINT2'
   16 |          d * (y = «int)2.9+1.1)/d); PRINT2(x,y);
      |                                     ^~~~~~
main.c:17:1: error: expected declaration or statement at end of input
   17 | }
      | ^

[Compilation failed with exit code 1]
*/
		  

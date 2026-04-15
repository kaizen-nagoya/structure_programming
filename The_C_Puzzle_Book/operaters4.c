// https://www.mycompiler.io/ja/online-c-compiler
// https://efrei.poupa.net/Programmation%20en%20C/Cours/The_C_Puzzle_Book.pdf

//Operation 4
#include <stdio.h>
#define PRINT(int) printf("int = %d\n", int)")

int main() {
    int x, y, z；
    x=03, y=02, z=01；
    PRINT（x | y & z);
    PRINT（x | y & ~z);
    PRINT（x ^ y & ~z);
    PRINT（x & y && z);

    x=1, y=-1；
    PRINT（!x | x);
    PRINT（~x | x);
    PRINT（x ^ x);

    x <<=3; PRINT(x);
    y <<=3; PRINT(y);
    y >>=3: PRINT(y)
    
//        int x=1, y=1, z=1；
//    PRINT（x < y ? y : x);
//    PRINT (x < y ? x);

}
/* main.cpp:3:45: warning: missing terminating " character
    3 | #define PRINT(int) printf("int = %d\n", int)")
      |                                             ^
main.cpp:3:45: error: missing terminating " character
    3 | #define PRINT(int) printf("int = %d\n", int)")
      |                                             ^~
main.cpp:18:13: note: in expansion of macro 'PRINT'
   18 |     x <<=3; PRINT(x);
      |             ^~~~~
main.cpp:3:45: error: missing terminating " character
    3 | #define PRINT(int) printf("int = %d\n", int)")
      |                                             ^~
main.cpp:19:13: note: in expansion of macro 'PRINT'
   19 |     y <<=3; PRINT(y);
      |             ^~~~~
main.cpp:3:45: error: missing terminating " character
    3 | #define PRINT(int) printf("int = %d\n", int)")
      |                                             ^~
main.cpp:20:13: note: in expansion of macro 'PRINT'
   20 |     y >>=3: PRINT(y)
      |             ^~~~~
main.cpp: In function 'int main()':
main.cpp:7:5: error: expected initializer before 'x'
    7 |     x=03, y=02, z=01；
      |     ^
main.cpp:9:5: error: 'PRINT\U0000ff08x' was not declared in this scope
    9 |     PRINT（x | y & ~z);
      |     ^~~~~~~~
main.cpp:9:21: error: 'z' was not declared in this scope
    9 |     PRINT（x | y & ~z);
      |                     ^
main.cpp:13:13: error: unable to find numeric literal operator 'operator""\U0000ff1b'
   13 |     x=1, y=-1；
      |             ^~~
main.cpp:15:5: error: 'PRINT\U0000ff08' was not declared in this scope; did you mean 'PRINT'?
   15 |     PRINT（~x | x);
      |     ^~~~~~~
      |     PRINT
main.cpp:20:11: error: expected ';' before ':' token
   20 |     y >>=3: PRINT(y)
      |           ^
      |           ;

[Compilation failed with exit code 1]
Sponsored: Filestack
All-in-one solution f */
/*
main.cpp: In function 'int main()':
main.cpp:7:5: error: expected initializer before 'x'
    7 |     x=03, y=02, z=01；
      |     ^
main.cpp:9:5: error: 'PRINT\U0000ff08x' was not declared in this scope
    9 |     PRINT（x | y & ~z);
      |     ^~~~~~~~
main.cpp:9:21: error: 'z' was not declared in this scope
    9 |     PRINT（x | y & ~z);
      |                     ^
main.cpp:13:13: error: unable to find numeric literal operator 'operator""\U0000ff1b'
   13 |     x=1, y=-1；
      |             ^~~
main.cpp:15:5: error: 'PRINT\U0000ff08' was not declared in this scope; did you mean 'PRINT'?
   15 |     PRINT（~x | x);
      |     ^~~~~~~
      |     PRINT
main.cpp:3:45: error: expected ';' before ')' token
    3 | #define PRINT(int) printf("int = %d\n", int))
      |                                             ^
main.cpp:18:13: note: in expansion of macro 'PRINT'
   18 |     x <<=3; PRINT(x);
      |             ^~~~~
main.cpp:3:45: error: expected ';' before ')' token
    3 | #define PRINT(int) printf("int = %d\n", int))
      | 
main.cpp:19:13: note: in expansion of macro 'PRINT'
   19 |     y <<=3; PRINT(y);
      |             ^~~~~
main.cpp:20:11: error: expected ';' before ':' token
   20 |     y >>=3: PRINT(y)
      |           ^
      |           ;

[Compilation failed with exit code 1] */         
/*
main.c: In function 'main':
main.c:5:5: error: expected '=', ',', ';', 'asm' or '__attribute__' before 'x'
    5 |     x=03, y=02, z=01；
      |     ^
main.c:5:19: error: invalid suffix "；" on integer constant
    5 |     x=03, y=02, z=01；
      |                   ^~~~
main.c:7:5: error: 'PRINT\U0000ff08x' undeclared (first use in this function)
    7 |     PRINT（x | y & ~z);
      |     ^~~~~~~~
main.c:7:5: note: each undeclared identifier is reported only once for each function it appears in
main.c:7:21: error: 'z' undeclared (first use in this function)
    7 |     PRINT（x | y & ~z);
      |                     ^
main.c:7:22: error: expected ';' before ')' token
    7 |     PRINT（x | y & ~z);
      |                      ^
      |                      ;
main.c:7:22: error: expected statement before ')' token
main.c:8:22: error: expected ';' before ')' token
    8 |     PRINT（x ^ y & ~z);
      |                      ^
      |                      ;
main.c:8:22: error: expected statement before ')' token
main.c:9:22: error: expected ';' before ')' token
    9 |     PRINT（x & y && z);
      |                      ^
      |                      ;
main.c:9:22: error: expected statement before ')' token
main.c:11:13: error: invalid suffix "；" on integer constant
   11 |     x=1, y=-1；
      |             ^~~
main.c:11:16: error: expected ';' before 'PRINT\U0000ff08'
   11 |     x=1, y=-1；
      |                ^
      |                ;
   12 |     PRINT（!x | x);
      |     ~~~~~~~     
main.c:12:18: error: expected statement before ')' token
   12 |     PRINT（!x | x);
      |                  ^
main.c:13:5: error: 'PRINT\U0000ff08' undeclared (first use in this function)
   13 |     PRINT（~x | x);
      |     ^~~~~~~
main.c:13:12: error: expected ';' before '~' token
   13 |     PRINT（~x | x);
     |            ^
      |            ;
main.c:13:18: error: expected statement before ')' token
   13 |     PRINT（~x | x);
      |                  ^
main.c:14:17: error: expected ';' before ')' token
   14 |     PRINT（x ^ x);
      |                 ^
      |                 ;
main.c:14:17: error: expected statement before ')' token
main.c:16:13: warning: implicit declaration of function 'PRINT' [-Wimplicit-function-declaration]
   16 |     x <<=3; PRINT(x);
      |             ^~~~~
main.c:18:11: error: expected ';' before ':' token
   18 |     y >>=3: PRINT(y)
      |           ^
      |           ;

[Compilation failed with exit code 1]
Sponsored: Filestack */

    
    

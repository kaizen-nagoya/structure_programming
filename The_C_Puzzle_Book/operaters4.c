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
    

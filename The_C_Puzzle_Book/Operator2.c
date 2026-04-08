#include<stdio.h>
#define PRINTX printf("%d\n",x)

int main(){
    int x=2,y,z;

    x *=3+2; PRINTX;
    x *=y=z=4; PRINTX;
    x =y==z; PRINTX;
    x==(y=z); PRINTX;

      printf("%d\n",(y=z)); // add 20260408 Dr. Kiyoshi  Ogawa
    printf("%d\n",(x==(y=z)));
  
    return 0;
}
/*
  10
40
1
1
4
0
*/

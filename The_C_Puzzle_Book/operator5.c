#include<stdio.h>
//#define PRINT(int) printf("int = %d\n",int)
#define PRINT(int) printf(#int "= %d\n",int)

int main() {
    int x = 1, y = 1, z = 1;

    //PRINT(x);

    x += y += z;
    //PRINT(x); PRINT(y); PRINT(z);
  
    PRINT(x < y ? y : x);               //(Operators 5.1)

    PRINT(x < y ? x ++ : y ++);
    PRINT(x); PRINT(y);                 //(Operators 5.2)

    PRINT(z += x < y ? x ++ : y++);
    PRINT(y); PRINT(z);                 //(Operators 5.3)

    x = 3; y = z = 4;
    PRINT( (z >= y >= x) ? 1 : 0);      //(Operators 5.4)
    PRINT(z >= y && y >= x);            //(Operators 5.5)
    //return 0;
}
/*

x < y ? y : x= 3
x < y ? x ++ : y ++= 2
x= 3
y= 3
z += x < y ? x ++ : y++= 4
y= 4
z= 4
(z >= y >= x) ? 1 : 0= 0
z >= y && y >= x= 1

*/
/*

出力
int = 3
int = 2
int = 3
int = 3
int = 4
int = 4
int = 4
int = 0
int = 1
*/

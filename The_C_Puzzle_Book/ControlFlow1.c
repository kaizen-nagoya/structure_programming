// https://www.mycompiler.io/ja/online-c-compiler
// https://efrei.poupa.net/Programmation%20en%20C/Cours/The_C_Puzzle_Book.pdf

#include <stdio.h> 
#define PR(format,value) printf(#value "= " format "\t", (value))
#define NL putchar('\n') 
#define PRINT1(f,x1) PR(f,x1), NL 
#define PRINT2(f,x1, x2) PR(f,x1), PRINT1(f,x2) 
#define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3) 
#define PRINT4(f,x1,x2,x3,x4) PR(f,x1), PRINT3(f,x2,x3,x4) 

int main() { 
    int x, y= 1, z;
    /*if(1){
        printf("true\n");
    }*/
    /*if(0){
        printf("false\n");
    }*/
    //↑if(0)だと条件を満たしていないことになっている？ためスルー
    //↓は↑の挙動と同じ
    /*if(z = 0){
        printf("あああ\n");
    }*/
    
    if( y!=0 ) x=5; 
    PRINT1 ("%d",x);
    
    if( y==0 ) x=3; 
    else x=5; 
    PRINT1 ("%d",x);
    
    x=1; 
    if( y<0 ) if( y>0 ) x=3; 
    else x=5; 
    /*if (y < 0) {
        if (y > 0) {
            x = 3;
        } 
        else {
            x = 5;
        }
    }*/
    PRINT1 ("%d",x);
    
    //PRINT1 ("%d",y); 
    //↑何もいじっていなければ y = 1
    
    if( z=y<0 ) x=3;
    else if( y==0 ) x=5; 
    else x=7;
    PRINT2("%d",x,z);
    
    if( z=(y==0) ) x=5; x=3;
    PRINT2("%d",x,z); 

    //PRINT3("%d",x,y,z);
    //↑x= 3	y= 1　z= 0
    
    if( x=z=y ); x=3; 
    //z=yののち、x=z?
    PRINT2("%d",x,z);
}
/*
x= 5	
x= 5	
x= 1	
x= 7	z= 0	
x= 3	z= 0	
x= 3	z= 1	
*/


#include <stdio.h> 
#define PR(format,value) printf(#value "=%" #format "\t",(value))
#define NL putchar('\n') 
#define PRINT1(f,x1) PR(f,x1), NL 
#define PRINT2(f,x1, x2) PR(f,x1), PRINT1(f,x2) 
#define PRINT3(f,x1,x2,x3) PR(f,x1), PRINT2(f,x2,x3) 
#define PRINT4(f,x1,x2,x3,x4) PR(f,x1), PRINT3(f,x2,x3,x4) 

#define ENUF 3 
#define EOS '\0' 
#define NEXT(i) input[i++] 
#define FALSE 0 
#define TRUE 1

char input[]="PI=3.14159, approximately"; 

int main( ) 
{ 
    char c; 
    int done, high, i, in, low;
    i=low=in=high=0; 
    while( c=NEXT(i) != EOS ) 
        if( c<'0') low++; 
        else if( c>'9') high++; 
        else in++;
    PRINT3(d,low,in,high); 
    i=low=in=high=0; done=FALSE;
    while( (c=NEXT(i)) !=EOS && !done )
        if( c<'0') low++; 
        else if( c>'9') high++; 
        else in++; 
        if( low>=ENUF || high>=ENUF || in>=ENUF) 
            done = TRUE; 
    PRINT3(d,low,in,high); 
    i=low=in=high=0; done=FALSE;
    while( (c=NEXT(i))!=EOS && !done )
        if ( c<'0') done = (++low==ENUF); 
        else if( c>'9') done = (++high==ENUF); 
        else done = (++in==ENUF); 
    PRINT3(d,low,in,high);
}
/*
low=25	in=0	high=0	
low=3	in=6	high=16	
low=0	in=0	high=3	
*/

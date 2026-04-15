#include<stdio.h>
//#define PRINT(format, x) printf("x= %" format "\n", x)
#define PRINT(format, x) printf(#x "= %" format "\n", x)

int integer =5;
char character='5';
char *string ="5";

int main()
{   
    
    PRINT("s",string); PRINT("c",character); PRINT("d",integer);
    PRINT("s",string);PRINT("c",character);PRINT("d",integer=53);
    PRINT("s",string);PRINT("c",character);PRINT("c",integer=53);
    
    PRINT("d",('5'>5));
    {
        int sx=-8;
        unsigned ux=-8;

        PRINT("o",sx);PRINT("o",ux);
        PRINT("o",sx>>3);PRINT("o",ux>>3);
        PRINT("d",sx>>3);PRINT("d",ux>>3);
        
    }
}

/*
string= 5
character= 5
integer= 5
string= 5
character= 5
integer=53= 53
string= 5
character= 5
integer=53= 5
('5'>5)= 1
sx= 37777777770
ux= 37777777770
sx>>3= 37777777777
ux>>3= 3777777777
sx>>3= -1
ux>>3= 536870911
*/

#include<stdio.h>
//#define PRINT(format, x) printf("x= %" format "\n", x)
#define PRINT(format, x) printf(#x "= %" format "\n", x)

int integer =5;
char character='5';
char *string ="5";

int main()
{   
    
    PRINT("s",string); PRINT("c",character); PRINT("d",integer);
    PRINT("s",string);PRINT("c",character);PRINT("d",integer=53);
    PRINT("s",string);PRINT("c",character);PRINT("c",integer=53);

    
    PRINT("d",('5'>5));
// ->
printf("x=%""d""\n", '5'>5);
// ->
    printf("x=%d\n", '5'>5);
    
// ->
    printf("'5'>5=%""d""\n", '5'>5);
// ->
    printf("'5'>5=%d\n", '5'>5);
    
    {
        int sx=-8;
        unsigned ux=-8;

        PRINT("o",sx);PRINT("o",ux);
        PRINT("o",sx>>3);PRINT("o",ux>>3);
        PRINT("d",sx>>3);PRINT("d",ux>>3);
        
    }
}

/*
string= 5
character= 5
integer= 5
string= 5
character= 5
integer=53= 53
string= 5
character= 5
integer=53= 5
('5'>5)= 1
x=1
x=1
'5'>5=1
'5'>5=1
sx= 37777777770
ux= 37777777770
sx>>3= 37777777777
ux>>3= 3777777777
sx>>3= -1
ux>>3= 536870911
*/

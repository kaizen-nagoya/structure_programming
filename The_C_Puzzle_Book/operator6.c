#include <stdio.h>

#define PRINT3(x,y,z) printf("x=%d\ty=%d\tz=%d\n",x,y,z)


int main() {
    int x, y, z;

    x = y = z = 1;
    ++x || ++y && ++z; PRINT3(x,y,z);

    x = y = z = 1;
    ++x && ++y || ++z; PRINT3(x,y,z);

    x = y = z = 1;
    ++x && ++y && ++z; PRINT3(x,y,z);

    x = y = z = -1;
    ++x && ++y || ++z; PRINT3(x,y,z);
    x = y = z = -1;                        // add this line for clarification 20260415 
    ++x && (++y || ++z); PRINT3(x,y,z);   // add this line for clarification 20260415
     x = y = z = -1;                      // add this line for clarification 20260415
    (++x && ++y) || ++z; PRINT3(x,y,z);   // add this line for clarification 20260415

    x = y = z = -1;
    ++x || ++y && ++z; PRINT3(x,y,z);

    x = y = z = -1;
    ++x && ++y && ++z; PRINT3(x,y,z);
    
}

/*
x=2	y=1	z=1
x=2	y=2	z=1
x=2	y=2	z=2
x=0	y=-1	z=0
x=0	y=-1	z=-1
x=0	y=-1	z=0
x=0	y=0	z=-1
x=0	y=-1	z=-1
*/

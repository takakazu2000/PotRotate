#include "PotRotate.hpp"
#include <math.h>
#include <stdio.h>

void potrotation(float* x, float* y, float rotation)
{
    *x = *x + r * cos(rotation);
    *y = *y + r * sin(rotation);
}

int  main(){
    float x = 10;
    float y = 10;
    float rotation = 30 * PI / 180;
    potrotation(&x,&y,rotation);

    for( int i=0; i<10; i++ ){
        printf("x:%f.2, y:%f.2\r\n",x,y);
    }

    return 0;
} 
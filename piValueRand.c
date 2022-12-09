#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isInCircle(float posX, float posY){
    if((posX*posX+posY*posY)<=1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n=10000000;
    float x, y, counter=0;
    time_t t1;

    srand((unsigned) time (&t1));

    for(int i=0; i<n; i++){
        x = (float)rand()/(float)(RAND_MAX)*2-1;
        y = (float)rand()/(float)(RAND_MAX)*2-1;
        counter += isInCircle(x, y);
    }

    printf("%f", counter/n*4);

    return 0;
}
#include <stdio.h>
#include <unistd.h>
#include "control.h"

int main(char *argv){
    int han1;
    int P1, P2, P3, P4, P5; 
    long han2;
    int han3;
    init();
    setTime();
    exePython();
    //setSurvival();
    while(rk){//ここにプログラム
        han1 = detectZombie1();
        han2 = detectZombie2();
        han3 = detectZombie3();
        //printf("han1=%d\n" , han1);
        //printf("han2=%ld\n" , han2);

        if((han3/1)%10){printf("〇");}else{printf("　");}
        if((han3/10)%10){printf("〇");}else{printf("　");}
        if((han3/100)%10){printf("〇");}else{printf("　");}
        if((han3/1000)%10){printf("〇");}else{printf("　");}
        if((han3/10000)%10){printf("〇");}else{printf("　");}
        if((han3/100000)%10){printf("〇");}else{printf("　");}
        printf("\n---------------\n");

        sleep(1);
    }
    setCreative();
    setMorning();
}

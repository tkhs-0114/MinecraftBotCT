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
        //printf("han1=%d\n" , han1);
        //printf("han2=%ld\n" , han2);

        P1 = (han2 / 1000000000000) % 1000;
        P2 = (han2 / 1000000000) % 1000;
        P3 = (han2 / 1000000) % 1000;
        P4 = (han2 / 1000) % 1000;
        P5 = (han2 / 1) % 1000;

        if((P4/1)%10){printf("近");}
        else if((P4/10)%10){printf("中");}
        else if((P4/100)%10){printf("遠");}
        else{printf("　");}
        printf("|　|");
        if((P3/1)%10){printf("近");}
        else if((P3/10)%10){printf("中");}
        else if((P3/100)%10){printf("遠");}
        else{printf("　");}
        printf("\n");
        if((P2/1)%10){printf("近");}
        else if((P2/10)%10){printf("中");}
        else if((P2/100)%10){printf("遠");}
        else{printf("　");}
        printf("|");
        if((P5/1)%10){printf("近");}
        else if((P5/10)%10){printf("中");}
        else if((P5/100)%10){printf("遠");}
        else{printf("　");}
        printf("|");
        if((P1/1)%10){printf("近");}
        else if((P1/10)%10){printf("中");}
        else if((P1/100)%10){printf("遠");}
        else{printf("　");}
        printf("\n------------\n");

        //printf("\n---------------\n");

        sleep(1);
    }
    setCreative();
    setMorning();
}

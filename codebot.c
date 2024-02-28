#include <stdio.h>
#include <unistd.h>
#include "control.h"

int main(char *argv){
    int han1;
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

        if((han1 / 1000000)%10 == 1){
            printf("|左上|");
        }else{printf("|　　|");}
        if((han1 / 100000)%10 == 1){
            printf("中上|");
        }else{printf("　　|");}
        if((han1 / 10000)%10 == 1){
            printf("右上|");
        }else{printf("　　|");}
        printf("\n");
        if((han1 / 1000)%10 == 1){
            printf("|左下|");
        }else{printf("|　　|");}
        if((han1 / 100)%10 == 1){
            printf("中下|");
        }else{printf("　　|");}
        if((han1 / 10)%10 == 1){
            printf("右下|");
        }else{printf("　　|");}
        printf("\n---------------\n");

        sleep(1);
    }
    setCreative();
    setMorning();
}

#include <stdio.h>
#include <unistd.h>
#include "control.h"

int ZONBI_F(int han){
    if((han/100)%10 == 1){
        printf("FRONT\n");
        return 0;
    }
    if((han/100000)%10 == 1){
        printf("LONG\n");
        return 0;
    }
    return 1;
}
int ZONBI_L(int han){
    if((han/1000000)%10 == 1){
        return 0;
    }
    if((han/1000)%10 == 1){
        return 0;
    }
    return 1;
}
int ZONBI_R(int han){
    if((han/10000)%10 == 1){
        return 0;
    }
    if((han/10)%10 == 1){
        return 0;
    }
    return 1;
}

int main(char *argv){
    int han1;
    long han2;
    int cnt = 0;
    int Rote = 0;
    init();
    setTime();
    exePython();
    //setSurvival();
    while(rk){//ここにプログラム
        han1 = detectZombie1();
        //han2 = detectZombie2();
        //printf("han1=%d\n" , han1);
        //printf("han2=%ld\n" , han2);

        cnt++;

        han1 = detectZombie1();
        if(ZONBI_L(han1) == 0){Rote=1;}else{Rote=-1;}

        while(ZONBI_F(han1)){
            if(!rk){break;};
            if(Rote==1){cameraLeft(0.4);}
            else if(Rote==-1){cameraRight(0.4);}
            han1 = detectZombie1();
        }
        sleep(1);

        
        //cameraRight(0.4);
        //moveJump(2);
        //cameraLeft(0.4);

        

        printf("%d\n", cnt%10);

        //sleep(0.1);
    }
    //setCreative();
    //setMorning();
}
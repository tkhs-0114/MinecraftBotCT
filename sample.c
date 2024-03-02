#include <stdio.h>
#include <unistd.h>
#include "control.h"

int main(int argc, char *argv[]){
    int han1 , han3;
    long han2;
    long test_date;
            int number;
    int pre[8] = {-1, 0, 0, 0, 0, 0, 0, 0 };
    init();          //Minecraftのゲームコントロール関数．ウィンドウサイズを設定する等を行う．
    //setTime();       //Minecraft上で時間を夜にしてくれる．
    exePython();     //画像処理プログラムを実行する関数．実行結果はdetectZombie，detectZombie2，detectMobs関数で取得できる．
    setSurvival();   //サバイバルモードにする．
    while(rk){       //無限loopする．rkはF12キーを押すと0となり，プログラムが停止します．
        /*ここからBotプログラムを書く*/
        han1 = detectZombie1();
        han2 = detectZombie2();
        han3 = detectZombie3();


        attackLeft();
        moveBack(1.0);
        sleep(0.1);


        /*ここまでBotプログラムを書く*/
    }
    setCreative();  //クリエイティブモードにする．
    setMorning();   //朝にする．
}

void sprit_7(int number,int N[]){

    N[1] = number % 10;
    number /= 10;
    N[2] = number % 10;
    number /= 10;
    N[3] = number % 10;
    number /= 10;
    N[4] = number % 10;
    number /= 10;
    N[5] = number % 10;
    number /= 10;
    N[6] = number % 10;
    number /= 10;
    N[7] = number % 10;


}

void addpre(int N[],int pre[]){
    pre[1] = N[1];
    pre[2] = N[2];
    pre[3] = N[3];
    pre[4] = N[4];
    pre[5] = N[5];
    pre[6] = N[6];
    pre[7] = N[7];

}
/*        int number = detectZombie1();
        int N[8]= { -1, 0, 0, 0, 0, 0, 0, 0 };
        sprit_7(number,N);*/

void hit_and_away(){

}

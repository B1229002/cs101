#include <stdio.h>

int main(){
    double PI=0.0f;
    int i=1;
    //while()內的東西成立就會跑{} 
    while((int)(PI*100000)!=314159){
        if(i%2==1){
            //PI=PI+4/i
            PI+=4.0/(2*i-1);
        }
        else{
            PI-=4.0/(2*i-1);
        }
        //printf("%f",PI); 跟電腦確認自己要的值 Debug （找到對的地方把printf 插入）
        i++;
    }
    printf("%d\n",i);
    //printf("%f",PI);
    return 0;
}

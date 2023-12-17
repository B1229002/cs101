#include <stdio.h>

int main(){
    int i=1234;
    //把1234 用i代入
    int other=i/10000;
    //都要取餘數
    int thousand=i/1000%10;
    int hurdred=i/100%10;
    int ten=i/10%10;
    int one=i%10;
    int ans=one*1000+ten*10+hurdred*100+thousand*1+other*10000;
    //Debug
    // printf("%d\n",other);
    // printf("%d\n",thousand);
    printf("%d",ans);
    return 0;
}

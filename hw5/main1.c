#include <stdio.h>

int main(){
    int n=7;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++){
            //東西總共都是跑四次，例如分配字跑一次 空隔跑三次
            if(j<=n-i){
                printf (" ");
            }
            else{
                printf("%d ",i);
            }
        }
        printf("\n");
    }
}

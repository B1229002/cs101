#include <stdio.h>

    int main(){
    for(int i=1, j=1;i<=9;j++){
        int ans=i*j;
        printf("%d*%d=%d\t",i,j,ans);
        //j==9 的時候換行 才不會跑到數字10
        if (j==9){
            printf("\n");
            //從一開始乘
            j=0;
            i++;
        }

    }
    
}

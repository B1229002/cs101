#include <stdio.h>

int main(){
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            int ans=i*j;
            printf("%d*%d=%d\t",i,j,ans);
        }
        printf("\n");
    }
    
}

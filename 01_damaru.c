#include<stdio.h>

int main(){
    int i,j,k=3;
    for(i=1;i<=7;i++){
        for(j=1;j<=7;j++){
            if(j<=4+k && j>=4-k)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
            
        }
        printf("\n");
        i<4? k--:k++;
    }
    return 0;
}
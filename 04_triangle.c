#include<stdio.h>

void main(){
    int i,j,k=1;
    for(i=4;i>=1;i--){
        for(j=1;j<=4;j++){
            if(j>=i)
                printf("%d",k++);
                // if(k>9)
                //     k=0;
            else
                printf(" ");

            if(k==10)
                k=0;
        }
        printf("\n");
    }
}
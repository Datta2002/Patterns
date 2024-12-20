#include<stdio.h>

void main(){
    int i,j,k=0;
    for(i=1;i<=10;i++){
        for(j=1;j<=9;j++){
            if(i==1 && j==5 || i==10 && j==5)
                printf("*");
            else if (j==5+k || j==5-k)
                printf("&");
            else
                printf(" ");
            
        }
        printf("\n");
        i<5? k++:--k;

    }
}
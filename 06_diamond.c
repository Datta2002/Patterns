#include<stdio.h>

void main(){
    int i,j,k=0;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j>=3-k && j<=3+k)
            printf(" *");
            else
            printf("  ");
        }
        if(i<=3)
            k++;
        else
            k--;
        printf("\n");
    }
}


// void main(){
//     int i,a[5];
//     for(i=0;i<=5;i++){
//         scanf("%d",&a[i]);
//     }

//     for(i=4;i>=0;i--){
//         printf("%d  ",a[i]);
//     }
// }

// void main(){
//     int i,sum=0;
//     int a[]={5123,920,1725,12,1007,519136};
//     // printf("%d",a[6]);
//     for(i=0;i<6;i++){
//         sum=sum+a[i];
//     }
//         printf("%d  ",sum);
// }
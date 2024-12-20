#include<stdio.h>

// void main(){
//     int i,j,k=1;
//     for(i=1;i<=4;i++){
//         for(j=1;j<=4;j++){
//             if(i==1 || i==4 || (i+j)==5)
//                 printf("%2d",k++);
//             else    
//                 printf("  ");
//         }
//         printf("\n");
//         k=k+2;
//     }

// }


// void main(){
//     int i,j,k=4,m=10;
//     for(i=1;i<=4;i++){
//         for(j=1;j<=4;j++){
//             if(i==1)
//                 printf("%3d",j);
//             else if(i+j==5){
//                 printf("%3d",k);
//                 k=k+2;
//             }
//             else if(i==4)    
//                 printf("%3d",m++);
//             else    
//                 printf("   ");
//         }
//         printf("\n");
//     }
// }

void main(){
    int i,j,k=0;
    for(i=1;i<=3;i++){
        for(j=1;j<=4;j++){
            printf("%d",k%3);
            k--;
        }
        printf("\n");
    }
}
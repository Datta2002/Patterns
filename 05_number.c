#include<stdio.h>

// void main(){
//     int i,j,k=1;
//     for(i=1;i<=3;i++){
//         for(j=1;j<=4;j++){
//             if(k<0)
//                 k=2;
//             printf("%d",k--);
//     }
//     printf("\n");
// }
// }

// void main(){
//     int s1[]={1234,2705,370,124,556,665};
//     int s2[50],j=0;
//     for(int i=0;i<=5;i++){
//         if(s1[i]%5==0){
//             s2[j]=s1[i];
//         }
//             printf("%d  ",s2[j]);
//             j++;
//     }
// }

void main(){
    char ch[15]="Hi Hello!!";
    int i,count=0;

    for(i=0;ch[i]!='\0';i++){
        count++;
    }
    ch[i+1]='\0';
    printf("%d",count);
}
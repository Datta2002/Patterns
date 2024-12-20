#include<stdio.h>

// void main(){
//     char temp;
//     char st[]="Hello";
//     int size=0;

//     for(int i=0;st[i]!='\0';i++){
//         size++;
//     }

//     printf("%d\n",size/2);
//     for(int i=0;i<size/2;i++){
//         temp=st[i];
//         st[i]=st[size-i-1];
//         st[size-i-1]=temp;
//     }
//     printf("%s",st);
// }

void main(){
    int arr[]={1342,1428,13,75,9};
    int i,sum,rev,size=0;

    for(i=0;arr[i]!='\0';i++)
        size++;

    printf("%d\n\n",size);
//     for(i=0;i<=size;i++){
//         sum=0;
//         while (arr[i]>0)
//         {
//             rev=arr[i]%10;
//             arr[i]=arr[i]/10;
//             sum=sum*10+rev;
//         }
//         printf("%d ",sum);
        
//     }
}
#include<stdio.h>
#include<string.h>

void main(){
    char firstString[20]="Heart",secondString[20]="eartH",count=0,i,j,temp=0;

    // gets(firstString);
    // gets(secondString);

    int len=strlen(firstString);

    for(i=0;i<len-1;i++){
        for(j=0;j<len;j++){
            if(firstString[j]>firstString[j+1]){
                temp=firstString[j];
                firstString[j]=firstString[j+1];
                firstString[j+1]=temp;
            }
        }
    }

    printf("%s",firstString);
    // printf("%s",secondString);

}
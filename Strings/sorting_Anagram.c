#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(){
    char firstString[20]="HeartH",secondString[20]="eartHt",count=0,i,j,temp=0;

    // gets(firstString);
    // gets(secondString);

    int len1=strlen(firstString);
    int len2=strlen(secondString);
    

    if(len1!=len2 ){
        printf("Not Anagram\n");
        exit(0);
        
    }
        
    for(i=0;i<len1-1;i++){
        for(j=i+1;j<len1;j++){
            if(firstString[i]>firstString[j]){
                temp=firstString[i];
                firstString[i]=firstString[j];
                firstString[j]=temp;
            }
        }
    }



    for(i=0;i<len2-1;i++){
        for(j=i+1;j<len2;j++){
            if(secondString[i]>secondString[j]){
                temp=secondString[i];
                secondString[i]=secondString[j];
                secondString[j]=temp;
            }
        }
    }
    


    printf("%s\n",firstString);
    printf("%s\n",secondString);
    
    for(i=0; i<len1;i++){
        if(firstString[i]==secondString[i])
            count++;
    }
    
    if(len2==count && len1==count)
        printf("Anagram");
    else
        printf("Not Anagram");
    
}
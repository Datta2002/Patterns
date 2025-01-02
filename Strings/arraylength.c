#include<stdio.h>
void main()
{   
    int temp;
    int a[]={1000,100,200,600,300,400,500,800};
    int i;
    // for(i=0;a[i]!='\0';i++){   //  here it gives unpredicatible behavior due to '\0' it is char and it compared to ascii of null which is 0.
    for(i=0;i< sizeof(a)/sizeof(a[0]);i++){
    printf("%d-->  %d \n",i,a[i]); 

    }
}
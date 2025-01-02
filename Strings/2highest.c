
#include<stdio.h>
void main()
{   
    int temp;
    int a[200]={1000,100,200,600,300,400,500,800};
    int i,j; 
    for(i=0;i<=6;i++)
       {
        for(j=i+1;j<=8;j++)
        {
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
    }
    for(i=0;i<=5;i++){
        printf("%d ",a[i]);
    }
            printf("\n%d",a[1]);

}
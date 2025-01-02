#include<stdio.h>
void main()
{
    int a[200]={100,200,600,300,400,500};
    int i; 
    int max =a[0];
    for(i=0;i<=4;i++)
    {
        if(a[i]> max)
        {
            max=a[i];
        }
        
    }
            printf("%d", max);

}

void main(){
    int i,j,k=0;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j>=3-k && j<=3+k)
            printf(" *");
            else
            printf("  ");
        }
        if(i<4)
            k++;
        else
            k--;
        printf("\n");
    }
}

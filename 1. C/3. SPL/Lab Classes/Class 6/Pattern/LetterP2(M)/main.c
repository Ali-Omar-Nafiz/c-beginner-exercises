#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n; i++){
        for(int j=1; j<=n;j++){
                if(((i==j || i+j==n+1) && i<=n/2+1) || (j==n/2+1 && i>=n/2+1)){
                    printf("*");
                    //for M, (j==1 || j==n)
                }else{
                printf(" ");}
        }printf("\n");
    }
    return 0;
}

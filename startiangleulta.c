#include <stdio.h>
int main(){
    int n,m;
    printf("enter a number n: ");
    scanf("%d",&n);


    printf("enter a number m: ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++)
        printf("*");
          printf("\n");
    }

return 0;


}
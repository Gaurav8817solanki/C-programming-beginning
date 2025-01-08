


#include <stdio.h>
void cheakprime(int n){
    for(int i=2; i<=n;i++){
        if(n%2==0){
            printf("is not prime");
        }
        else{
            printf("is prime");
        }
    }
    return ;
}
int main(){
    int n;
    printf("enter a number n: ");
    scanf("%d",&n);
    cheakprime(n);

return 0;


}
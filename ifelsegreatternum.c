#include<stdio.h>
int main(){

int a,b,c;
printf("take a number a:  ");
scanf("%d",&a);
printf("take a number b:  ");
scanf("%d",&b);
printf("take a number c:  ");
scanf("%d",&c);
if(a>b&&a>c){
    printf("the number a is grettest number");
}
else if(b>a&&b>c){
    printf("the number b is grettest number");
}
else(c>a&&c>b);{
    printf("the number c is gettest numbewr");
}
    return 0;
}
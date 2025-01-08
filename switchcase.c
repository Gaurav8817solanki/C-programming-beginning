#include<stdio.h>
int main(){
    
int a=53;
int b=28;
//
char n;
printf("take opertaer n : ");
    scanf("%c",&n);
switch  (n){
case '+':
{printf("%ld",a+b);
break;}
case '-':
{printf("%ld",a-b);
break;}
case '*':
{printf("%ld",a*b);
break;}
case '/':
{printf("%lf",a/b);
break;}


default :
printf("this is a wrong operator");
break;
}
    return 0;
}
#include<stdio.h>
int main(){
    int a, b;
    int c;
    printf("enter a number a: ");
    scanf("%d",&a);
    printf("enter a number b: ");
    scanf("%d",&b);
  //  printf("enter a number c: ");
    //scanf("%d",&c);
if(a>b) {
    printf("%d greter number is\n ",a);

}
 else if(b>a) {
    
    printf("%d greter number is \n ", b);

}

else  {
    printf("both are equal\n");
}

return 0;
}
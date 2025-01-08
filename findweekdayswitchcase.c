#include<stdio.h>

int main(){
    

//
char n;
printf("take weekday n: ");
scanf("%c",&n);
switch  (n){
case '1':
{printf("monday");
break;
}
case '2':
{printf("tuesday");
break;
}
case '3':
{printf("wednesday");
break;
}
case '4':
{printf("thursday");
break;
}
case '5':
{printf("friday");
break;
}
case '6':
{printf("saturday");
break;
}
case '7':
{printf("suonday");
break;
}
default :
{printf("this is not weekday");
    break;}
}
    return 0;
}



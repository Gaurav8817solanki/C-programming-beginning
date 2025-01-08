#include<stdio.h>
#include <stdlib.h>
#include <string.h>
struct student{
    char* name ;
    int roll_naumber;
    int age;
    float mark;
};
int main (){
struct student students[2];
int n = sizeof(students)/sizeof(struct student);
students[0].name = "gaurav";
students[0].roll_naumber=1;
students[0].age = 18;
students[0].mark=91.6;
students[1].name = "divyanshi";
students[1].roll_naumber=2;
students[1].age = 19;
students[1].mark=92.6;

printf("\n");
printf("   student record   ");
printf("\n");

for(int i = 0;i<n;i++){
    printf("\nstudent%d:\n",i+1);
    printf("name :%s\n",students[i].name);
 printf("roll_naumber :%d\n",students[i].roll_naumber);
 printf("age :%d\n",students[i].age);
 printf("mark  :%f\n",students[i].mark);
}
printf("\n");

    return 0;
}
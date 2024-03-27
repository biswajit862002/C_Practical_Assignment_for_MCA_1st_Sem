// 8.	write a program to input name, marks of 5 subjects ofa student and display the name of the student, the total marks scored, percentage scored and the class of result.

#include<stdio.h>

int main()
{
    char name[40];
    float a,b,c,d,e,total=0,per=0;
    printf("Enter your name : ");
    fgets(name,40,stdin);
    printf("Enter your 5  subjects marks : ");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);

    total = a+b+c+d+e;
    per = (total*100)/500.0;

    printf("Name : %s",name);
    printf("Total marks scored : %.2f",total);
    printf("\nPercentage scored : %.2f",per);

    return 0;
}
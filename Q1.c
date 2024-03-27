// 1.	Write a program to calculate simple and compound interest.

#include<stdio.h>
#include<math.h>

double simple_interest(double,double,double);
double compound_interest(double,double,double);

int main()
{
    double p,r,t,si=0,ci=0;
    printf("Enter Principal,Rate & Time : ");
    scanf("%lf %lf %lf",&p,&r,&t);

    si = simple_interest(p,r,t);
    ci = compound_interest(p,r,t);

    printf("Simple Interest is = %lf",si);
    printf("\nCompound Interest is = %lf",ci);

    return 0;
}

double simple_interest(double p,double r,double t)
{
    double si = (p*r*t)/100.0;
    return(si);
}

double compound_interest(double p,double r,double t)
{
    double ci = p*(pow((1+r/100),t)) - p;
    return(ci);
}
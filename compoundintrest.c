#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double amount,time,rate,principalamt,ci;
    printf("Enter the principal amount:");
    scanf("%f",&principalamt);
    printf("enter the time:");
    scanf("%f",&time);
    printf("Enter the rate:");
    scanf("%f",&rate);
    ci=principalamt*((pow(1+rate/100),time));
    printf("the compound intrest is:%f",ci);
    return 0;
}

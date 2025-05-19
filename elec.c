#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    float amount;
    char name[20];
    int units;
    printf("enter the consumer name:\n");
    scanf("%s",&name);
    printf("Enter the no.of units consumed:\n");
    scanf("%d",&units);
    if(units<=200)
    {
        amount=units*80;
    }
    else if(units>200 && units<=300)
    {
        amount=200*80;
        amount=amount+(units-200)*90;
    }
    else
    {
        amount=(units-300)*100;
        amount=amount+100*90;
        amount=amount+200*80;
    }
    amount=amount/100;
    amount=amount+100;
    if(amount>400)
    {
        amount=amount+15*amount/100;
    }
    printf("amount to be paid is:%f\n",amount);
}

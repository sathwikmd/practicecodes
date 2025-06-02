#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int units;
    float amount;
    char name[20];
    printf("enter the consumer name:\n");
    scanf("%s",&name);
    printf("Enter the no.of units consumed:\n");
    scanf("%d",&units);
    if(units<=200)
    {
        amount=units*80;
    }
    else if(units>200&&units<=300)
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
    printf("total amount to be paid %f\n",amount);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int op1,op2,res;
    char oper;
    printf("enter the operator:\n");
    scanf("%c",&oper);
    printf("Enter two operands:\n");
    scanf("%d %d",&op1,&op2);
    switch(oper)
    {
        case '+':
        res=op1+op2;
        break;
        case '-':
        res=op1-op2;
        break;
        case '*':
        res=op1*op2;
        break;
        case '/':
        if(op2==0)
        {
            printf("Divide by zero error\n");
            exit(0);
        }
        else
        {
            res=op1/op2;
        }
        break;
        default:
        printf("Not a valid operator\n");
        break;
    }
    printf("Result:%d",res);
    return 0;
}

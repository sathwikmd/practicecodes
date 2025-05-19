#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    char oper;
    int op1,op2,res;
    printf("Enter the operator(+,-,*,/)\n");
    scanf("%c",&oper);
    printf("Enter two operands(only integers)\n");
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
        printf("invalid operator\n");
        exit(0);
    }
    printf("result=%d",res);
    return 0;
}

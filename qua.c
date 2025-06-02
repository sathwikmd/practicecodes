#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float a,b,c,disc;
    float root1,root2,real,imag;
    printf("Enter the values of a,b and c:\n");
    scanf("%f %f %f",&a,&b,&c);
    if((a==0)&&(b==0))
    {
        printf("invalid coefficients\n");
        printf("enter valid coefficients\n");
    }
    else if(a==0)
    {
        printf("linear equation\n");
        root1=-c/b;
        printf("Root %.3f",root1);
    }
    else
    {
        disc=b*b-4*a*c;
        if(disc==0)
        {
        printf("roots are real and equal\n");
        root1=root2=-b/(2*a);
        printf("root 1=%.3f\nroot 2=%.3f",root1,root2);
        }
        else if(disc>0)
        {
        printf("roots are real and distinct\n");
        root1=(-b+sqrt(disc))/(2*a);
        root2=(-b-sqrt(disc))/(2*a);
        printf("Root 1=%.3f\nRoot 2=%.3f",root1,root2);
        }
        else
        {
            printf("Roots are real and imaginary\n");
            real=-b/(2*a);
            imag=sqrt(fabs(disc))/(2*a);
            printf("Root 1=%.3f+i%.3f\n",real,imag);
            printf("root 2=%.3f-i%.3f\n",real,imag);
        }
    }
    return 0;
}

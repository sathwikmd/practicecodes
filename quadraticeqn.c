#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    float a,b,c,disc;
    float root1,root2,real,imag;
    printf("Enter the values of a,b and c:\n");
    scanf("%f %f %f",&a,&b,&c);
    if((a==0) && (b==0))
    {
        printf("invalid co-efficient");
        printf("Try again with valid inputs");
    }
    else if(a==0)
    {
        printf("linear equation");
        root1=-c/b;
        printf("root=%.3f",root1);
    }
    else
    {
        disc=b*b-4*a*c;
        if(disc==0)
        {
            printf("roots are real and equal\n");
            root1=root2=-b/(2*a);
            printf("root1=%.3f\nRoot2=%.3f\n",root1,root2);
        }
        else if(disc>0)
        {
            printf("roots are real and distict\n");
            root1=(-b+sqrt(disc))/(2*a);
            root2=(-b-sqrt(disc))/(2*a);
            printf("root1=%.3f\nroot2=%.3f\n",root1,root2);
        }
        else
        {
            printf("Roots are real and imaginary\n");
            real=-b/(2*a);
            imag=sqrt(fabs(disc))/(2*a);
            printf("Root1=%.3f+i%.3f\n",root1);
            printf("root2=%.3f-i%.3f\n",root2);
        }
    }
    return 0;
}

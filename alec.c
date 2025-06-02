#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i,j,n,a[20],temp;
    printf("Enter the no.of array elements:\n");
    scanf("%d",&n);
    printf("Enter the array elemnts:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The original elemnts are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        printf("\nArray elements after sorting:\n");
        for(i=0;i<n;i++)
        {
            printf("%d\n",a[i]);
        }
    }
    return 0;
}

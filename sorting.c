#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int i,j,n,a[10],temp;
    printf("Enter the no.of array elements:\n");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("original array elemnts are:\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    printf("sorted array elements are:\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}

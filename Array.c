#include<stdio.h>
int main ()
{
    int a[50],n,i;
    printf("Enter the number of elemets:");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("enter a[%d]=",i);
        scanf("%d",a[i]);
    }
    for (i=0;i<n;i++)
    printf("%d\t",a[i]);
    return 0 ;

}

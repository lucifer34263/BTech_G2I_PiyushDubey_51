#include <stdio.h>
int main()
{int t,a,b;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
t=a;
a=b;
b=t;
printf("The numbers after swapping are\n");
printf("The first number is %d\n",a);
printf("The second number is %d\n",b);

return 0;

}
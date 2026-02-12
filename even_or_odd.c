#include<stdio.h>
int main()
{ int x;
printf("Enter the number to be checked:");
scanf("%d",&x);
if (x%2==0)
{printf("The number entered is even");
}
else
{printf("The number is odd");
}
return 0;
}
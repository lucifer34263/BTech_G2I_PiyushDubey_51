#include<stdio.h>
int main() {
int a,b,c;
printf("Enter the number u want the sum upto:");
scanf("%d",&a);
for (b=0; b<=a; b++)
{c=c+b;
}
printf("The sum of number upto %d digits is: %d",a,c);

return 0;
}
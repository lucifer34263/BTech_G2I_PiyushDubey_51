#include<stdio.h>
int main()
{ float x,y,z; 
printf("PLEASE ENTER DISTINCT NUMBERS\n");
printf("Enter the first number:");
scanf("%f",&x);
printf("Enter the second number:");
scanf("%f",&y);
printf("Enter the third number:");
scanf("%f",&z);
if (x>y && x>z)
{printf("First number is the greatest");
}
else if(y>z && y>x)
{ printf("Second number is the greatest");
}
else
{printf("Third number is the greatest");
}
return 0;
}
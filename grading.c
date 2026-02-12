#include<stdio.h>
int main()
{ int a,b,c,x,y,z;
    float p;
printf("Enter the marks of first subject:");
scanf("%d",&a);
printf("Enter the marks of second subject:");
scanf("%d",&b);
printf("Enter the marks of third subject:");
scanf("%d",&c);
printf("Enter the marks of fourth subject:");
scanf("%d",&x);
printf("Enter the marks of fifth subject:");
scanf("%d",&y);
z=(x+y+a+b+c);
p=(z*100.00)/500;
printf("Your percetage is =%0.2f\n",p);
if (p>=90)
{printf("Your Grade is A");
}
else if(p>=80 && p<90)
{printf("Your Grade is B");
}
else if(p>=60 && p<80)
{printf("Your Grade is C");
}
else
{printf("Your Grade is D");
}
return 0;
}
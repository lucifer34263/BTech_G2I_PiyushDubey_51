#include<stdio.h> 
int main()
{ int a;
float b,c,d,e;
printf("Enter 1 if u want to convert miles to kms\n Enter 2 for converting kms to miles\n");
scanf("%d",&a);
    if (a==1)
    {printf("Enter the distance in miles:");
    scanf("%f",&b);
    c=(1.61*b);
    printf("The distance in kms is %0.2f",c);
    }
    else if (a==2)
    {printf("Enter the distance in kms:");
    scanf("%f",&d);
    e=(0.62)*d;
    printf("The distance is miles is:%0.2f",e);
    }
    else
    printf("Entered choice is wrong!\n Please choose from the provided options");
    return 0;
    }

#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,x1,x2,d,e;
    printf("THE REAL ROOTS CALCULATOR\n");
    printf("ENTER THE COEFF OF x^2:");
    scanf("%f",&a);
    printf("ENTER THE COEFF OF x:");
    scanf("%f",&b);
    printf("ENTER THE CONSTANT TERM:");
    scanf("%f",&c);
    e=pow(b,2)-4*a*c;
    d=sqrt(e);
x1=(-b-d)/(2*a);
x2=(-b+d)/(2*a);
printf("The first root of the following equation is;%f\n",x1);
printf("The second root of the following equation is;%f",x2);

return 0;
}    

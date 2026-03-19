#include<stdio.h>
int main(){
    int a,b,c,d=1;
    printf("Enter base:");
    scanf("%d",&a);
 printf("Enter the power for the number ");  
 scanf("%d",&b); 
 for (c=1;c<=b;c++)
 {
    d*=a;
 }
 printf("The number a powered to b is=%d",d);
 return 0;
}
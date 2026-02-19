#include<stdio.h>
int main()
{ float a,b,c;
    char op;
    printf("Choose from the following operations; \"+\", \"-\", \"*\", \"/\"\n");
    printf("Enter the choice of operation u want to perform:");
    scanf("%c",&op);
    printf("choose the first number;");
    scanf("%f",&a);
    printf("choose the next number;");
    scanf("%f",&b);
    switch(op)
{ case '+': c=a+b;
    printf("The addition of the two numbers given is:%f",c);
    break;
    case '-': c=a-b;
    break;
    printf("The subtraction of the given number is%f",c);
    case '*': c=a*b;
    printf("The multiplication of the given two  umbers is:%f",c);
    break;
    case '/': c=a/b;
    printf("The Division of the two given numbers is:%f",c);
    break;
}
return 0;
}
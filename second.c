#include<stdio.h>
int main(){
    int x,y;
    printf("enter the first number:");
    scanf("%d",&x);
    printf("enter the second number:");
    scanf("%d",&y);
    if (x==y)
    {printf("The two numbers entered are same.");
    }
    else
    {printf("The two numbers entered are not same.");
    }
    return 0;
}
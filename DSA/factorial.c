#include<stdio.h>

int fact(int n){
    if(n==0){
        return 1;
    }else{
        return fact(n-1)*n;
    }
}

int main(){
    int n,result;
    printf("Enter the number :  ");
    scanf("%d" , &n);

    result=fact(n);
    printf("Factorial of the number is %d" ,result);

    return 0;
}
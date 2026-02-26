#include <stdio.h>
#include <math.h>
int main()
{
    int prin, roi, time, si,ci;

    printf("Enter the principal:");
    scanf("%d", &prin);
    printf("Enter the rate of interest:");
    scanf("%d", &roi);
    printf("Enter the time period:");
    scanf("%d", &time);
    si=(prin*roi*time)/100.0;
    ci=(prin*(pow((1+roi/100.0),time)))-prin;
    printf("The Simple Interest is %d\n",si);
    printf("The Compound Interest is %d\n",ci);

    return 0;
}
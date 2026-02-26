#include <stdio.h>
int main()
{float cel,fah;
    printf("Enter the temperature (in Celsius):");
    scanf("%f",&cel);
    fah=((9*cel)/5+32);
    printf("The temperature (in Fahrenheit) is: %0.2f°F",fah); 
    
    return 0;

}
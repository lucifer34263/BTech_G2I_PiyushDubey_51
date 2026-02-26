#include <stdio.h>
#include <math.h>   
int main()
{
    float pi, radius, circum, area;
    pi = 3.14;
    printf("Enter the radius:");
    scanf("%f", &radius);
    circum=2*pi*radius;
    area=pi*pow((radius),2);
    printf("The Circumference of the circle is %.2f\n", circum);
    printf("The Area of the circle is %0.2f\n", area);
    
    return 0;
}
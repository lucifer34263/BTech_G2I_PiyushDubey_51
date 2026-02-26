#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5,sum;
    float percent;
    printf("Enter marks of first subject:");
    scanf("%d", &m1);
    printf("Enter marks of second subject:");
    scanf("%d", &m2);
    printf("Enter marks of third subject:");
    scanf("%d", &m3);
    printf("Enter marks of fourth subject:");
    scanf("%d", &m4);
    printf("Enter marks of fifth subject:");
    scanf("%d", &m5);

    sum = m1 + m2 + m3 + m4 + m5;
    printf("Total marks obtained: %d/500\n", sum);
    percent=sum/5.0;
    printf("Your Percentage is: %.2f%%\n", percent);
    
    return 0;
}
#include <stdio.h>
int main()
{
   int s1, s2, s3;
   printf("Enter side 1=");
   scanf("%d", &s1);
   printf("Enter side 2=");
   scanf("%d", &s2);
   printf("Enter side 3=");
   scanf("%d", &s3);

   if (s1 + s2 > s3 && s2 + s3 > s1 && s1 + s3 > s2)
   {
      printf("it is a triangle.\n");

      if (s1 == s2 == s3)
      {
         printf("it is a equilateral triangle.\n");
      }
      else if (s1 == s2 || s2 == s3 || s3 == s1)
      {
         printf("it is a isosceles traingle.\n");
      }
      else if (s1 != s2 != s3)
      {
         printf("it is a scalen triang;e.\n");
      }
   }
   else
   {
      printf("it is a not a triangle");
   }
   return 0;
}

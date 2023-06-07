#include <stdio.h>
// To print any table
int main()
{
   int i, a;
   printf("Enter a number:");
   scanf("%d", &a);
   i = a;
   while (i <= a * 10)
   {
      printf("\n%d", i);
      i = i + a;
   }

   return 0;
}
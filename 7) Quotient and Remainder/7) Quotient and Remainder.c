#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y;
   printf("enter the two numbers: ");
   scanf("%d %d",&x,&y);
   if (y == 0) {
       printf("Error: Division by zero is not allowed.\n");
   } else {
       printf("Quotient (int) is = %d, and remainder is = %d\n", x / y, x % y);
   }
    return 0;
}

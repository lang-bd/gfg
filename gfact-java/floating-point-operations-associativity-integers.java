#include<stdio.h>
#include<stdio.h>
int main()
{
   // A and B have sane values but apposite signs
   int A = -500000000;
   int B =  500000000;
 
   int C = 1;
 
   printf(" A + (B + C) is equal to %d \n", A + (B + C));
   printf("(A + B) + C is equal to %d", (A + B) + C);
 
   return 0;
}
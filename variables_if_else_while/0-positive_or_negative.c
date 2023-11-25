#include <stdio.h>
 
int main () {

   /* local variable definition */
   int a = 100;
 
   /* check the boolean condition */
   if( a > 0 ) {
      /* if condition is true then print the following */
      printf("a is positive\n" );
   } else if( a == 0 ) {
      /* if condition is false then print the following */
      printf("a is 0\n" );
   } else {
      /* if condition is false then print the following */
      printf("a is negative\n" );
   }
   
   printf("value of a is : %d\n", a);
 
   return 0;
}

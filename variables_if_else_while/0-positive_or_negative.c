#include <stdio.h>
 
int main () {

random r = new random();
/* local variable definition */
int n = r.next(-10,10);

printf("value of n is : %d\n", n);
/* check the boolean condition */
if( n > 0 ) {
/* if condition is true then print the following */
printf("n is positive\n" );
} else if( n == 0 ) {
/* if condition is false then print the following */
printf("%d\n is zero\n" );
} else {
/* if condition is false then print the following */
printf("n is negative\n" );
}
return 0;
}

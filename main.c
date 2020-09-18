// Author: Chetan Mitra czm5805@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(int );


int main(void) {
 int number = atof(readline("Enter an int: "));
 int sum = digit_sum(number);
 printf("sum of digits of %i is %i.\n", number,sum);
}


int digit_sum(int n) {
  if (n < 1)
  {
    return 0;
  }
  else
  {
    return n%10 + digit_sum(n/10);
  }
}
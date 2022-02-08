/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  float mark1=0, mark2=0;
  float avg=0;

  printf("Enter mark for subject 1 : ");
  scanf("%f", &mark1);

  printf("Enter mark for subject 2 : ");
  scanf("%f", &mark2);

  avg=(mark1+mark2)/2;
  printf("Average : %.2f\n", avg);
  
  return 0;
}


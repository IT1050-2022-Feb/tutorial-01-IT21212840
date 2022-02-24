/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float M1,M2,average;
  printf("Enter Mark 1:");
  scanf("%f",&M1);

  printf("Enter Mark 2:");
  scanf("%f",&M2);

  average=(M1+M2)/2;

  printf("Average is %.2f",average);
  
  return 0;
}

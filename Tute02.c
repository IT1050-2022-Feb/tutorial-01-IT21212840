/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  float distance,payment,remain,cal1;

  printf("Input the distance the van has travelled : ");
  scanf("%f",&distance);

  //cal1=distance-30;

  cal1=30*50;
  remain=(distance-30)*40;
  
  payment=cal1+remain;
  printf("the amount to be paid %.2f",payment);
  
  return 0;
}

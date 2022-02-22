/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int sub_1,sub_2;
  float cal,average;
  
  printf("subject_1: ");
  scanf("%d",&sub_1);

  printf("subject_2: ");
  scanf("%d",&sub_2);

  cal = sub_1 + sub_2;
  average = cal/2;
  
  printf("calculate: %2f ",cal);
  printf("\naverage: %2f",average);
  
  return 0;
}


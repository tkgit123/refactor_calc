#include "calc_input.h"
#include <stdio.h>

//Om menu_choice är 4 när num2 är 0 returnera 1 för fel
int get_input(int menu_choice, float *num1, float *num2) {
  printf("Enter first number: "); //User input for first number
  scanf("%f", num1);

  printf("Enter second number: "); //User input for second number
  scanf("%f", num2);
  
  if(menu_choice == 4 && *num2 == 0) {
    return 1;
  } else {
    return 0;
  }
  
}

  

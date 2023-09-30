#include <stdio.h>
int main() {



int x;
int y;

// Ask the user to type a number AND a character
printf("Type a number for X press enter \nAND a number for Y and press enter: \n");

// Get and save the number AND character the user types
scanf("%d %d", &x, &y);

// Print the number
printf("X is: %d\n", x);

// Print the character
printf("Y is: %d\n", y);

if (x > y) {
  printf("X is greater than Y");
} else if (x < y) {
  printf("X is not greater than Y");
} else {
  printf("X is equal to Y");  
}
}
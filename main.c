#include <stdio.h> // this is needed for printf and scanf

int main() {
  // first define the variables used in the program
  int motors; // number of motors (whole number)
  double
      weight; // total weight of packages (i used "double" so it can be decimal)
  double capacity;  // how much 1 motor can carry (decimal)
  double per_motor; // how much each motor needs to carry (decimal)

  capacity = 5.6; // each motor can carry 5.6 kg

  // ask user for number of motors
  printf("How many motors are carrying the packages? ");
  scanf("%d", &motors); // stores the users integer in the variable "motors"

  // ask user for weight of packages
  printf("How many kg of packages do we expect? ");
  scanf("%lf", &weight); // stores the users integer in the variable "weight"

  // make sure motors is not zero
  if (motors > 0) {
    per_motor = weight / motors; // calculate load per motor

    // check if per_motor is less or equal to capacity
    if (per_motor <= capacity) {
      printf("Yes! The conveyor belt can carry the packages.\n");
    } else {
      printf("No. The conveyor belt cannot carry the packages.\n");
    }
  } else {
    // if motors = 0, the conveyer belt cannot work
    printf("No. The conveyor belt cannot carry the packages.\n");
  }

  return 0; // end of program
}

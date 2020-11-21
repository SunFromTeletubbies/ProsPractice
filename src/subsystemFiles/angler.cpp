#include "main.h"

pros::ADIPotentiometer anglerPot('A');

//Helper functions
void setAngler(int power){
  angler = power;
}

//Driver control functions
void setAnglerMotors(){
  int anglerPower = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_UP) - controller.get_digital(pros::E_CONTROLLER_DIGITAL_DOWN));
  setAngler(anglerPower);
}

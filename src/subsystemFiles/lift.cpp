#include "main.h"

//Helper functions
void setLift(int power){
  lift = power;
}

//Driver control functions
void setLiftMotors() {
  int liftPower = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1) - controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2));
  setLift(liftPower);
}

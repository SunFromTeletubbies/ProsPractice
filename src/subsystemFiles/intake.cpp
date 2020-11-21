#include "main.h"

//Helper functions
void setIntake(int power){
  intakeLeft = power;
  intakeRight = power;
}

//Driver control functions
void setIntakeMotors(){
  //bottom trigger intakes, top trigger outtakes
  int intakePower = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L1) - controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2));
  setIntake(intakePower);
}

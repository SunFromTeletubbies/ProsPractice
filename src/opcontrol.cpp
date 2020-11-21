#include "main.h"

void opcontrol() {
  while(true) {
    //Control drive
    setDriveMotors();
    //Control intake
    setIntakeMotors();
    //Control lift
    setLiftMotors();
    //Control angler
    setAnglerMotors();
    pros::delay(10);
  }
}

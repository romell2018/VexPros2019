#include "Subsystems/Arm.h"
pros::Motor arm(motorports::k_arm);

void ArmUp(){
  arm.move_velocity(100); // This is 100 because it's a 100rpm motor
}
void ArmDown(){
  arm.move_velocity(-100); // This is -100 because it's a 100rpm motor
}
void ArmOff(){
  arm.move_velocity(0); 
}

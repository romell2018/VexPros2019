#include  "Subsystems/DriveTrain.h"
pros::Motor frontLeft(motorports::k_frontLeft);
pros::Motor frontRight(motorports::k_frontRight);
pros::Motor backLeft(motorports::k_backLeft);
pros::Motor backRight(motorports::k_backRight);

  void TankDrive(double left, double right){
    if (abs(left) > 15 || (right) > 15){
      frontLeft.move(left);
      backLeft.move(left);
      frontRight.move(right);
      backRight.move(right);
  }else{
      frontLeft.move(0);
      backLeft.move(0);
      frontRight.move(0);
      backRight.move(0);
  }
  }
  void ArcadeDrive(double magnitude, double rotation){
    if (abs(magnitude) > 15 || (rotation) > 15){
      frontLeft.move(magnitude + rotation);
      backLeft.move(magnitude + rotation);
      frontRight.move(magnitude - rotation);
      backRight.move(magnitude - rotation);
  }else{
      frontLeft.move(0);
      backLeft.move(0);
      frontRight.move(0);
      backRight.move(0);
  }
  }

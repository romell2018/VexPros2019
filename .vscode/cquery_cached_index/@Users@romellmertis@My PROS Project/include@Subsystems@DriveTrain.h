#include "robotmap.h"
#include "pros/motors.hpp"
#include <math.h>

void TankDrive(double left, double right);
void ArcadeDrive(double magnitude, double rotation);

pros::Motor frontLeft(motorports::frontLeft);
pros::Motor frontRight(motorports::frontRight);
pros::Motor backLeft(motorports::backLeft);
pros::Motor backRight(motorports::backRight);

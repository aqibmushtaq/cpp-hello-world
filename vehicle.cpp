using namespace std;

#include <iostream>
#include "vehicle.h"

int Vehicle::getTopSpeed() {
    return topSpeed;
}

void Vehicle::setTopSpeed(int topSpeed) {
    this->topSpeed = topSpeed;
}

int Vehicle::getPower() {
    return power;
}

void Vehicle::setPower(int power) {
    this->power = power;
}

int Vehicle::getWeight() {
    return weight;
}

void Vehicle::setWeight(int weight) {
    this->weight = weight;
}

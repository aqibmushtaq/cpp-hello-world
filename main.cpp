using namespace std;

#include <iostream>
#include "vehicle.h"

int main () {
    //blah
    cout<<"hello world!"<<endl;

    int topSpeed, power, weight;
    cout<<"Vehicle top speed: ";
    cin>>topSpeed;
    cout<<endl;

    cout<<"Vehicle power: ";
    cin>>power;
    cout<<endl;

    cout<<"Vehicle weight: ";
    cin>>weight;
    cout<<endl;

    Vehicle v;
    v.setTopSpeed(topSpeed);
    v.setPower(power);
    v.setWeight(weight);

    cout<<"Vehicle info: "<<endl;
    cout<<"TopSpeed: "<<v.getTopSpeed()<<endl;
    cout<<"Power: "<<v.getPower()<<endl;
    cout<<"Weight: "<<v.getWeight()<<endl;
}

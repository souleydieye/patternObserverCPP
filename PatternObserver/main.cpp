#include <iostream>
#include "Driver.h"
#include "TrafficLight.h"

using namespace std;

int main()
{
    Driver driver1;
    TrafficLight trafficLightInstance;
    trafficLightInstance.notify();
    trafficLightInstance.addObserver(&driver1);
    trafficLightInstance.notify();
    trafficLightInstance.switchStateColorTo("red");
    Driver driver2;
    trafficLightInstance.addObserver(&driver2);
    trafficLightInstance.switchStateColorTo("green");
    cout << "Gooo!!!! " << endl;

    return 0;
}

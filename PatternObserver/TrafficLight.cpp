#include <string>
#include <set>
#include <iostream>
#include "TrafficLight.h"

using namespace std;

TrafficLight::TrafficLight()
{
	//Constructeur

}

TrafficLight::~TrafficLight()
{
	//Destructeur
}

void TrafficLight::addObserver(Observer* observer)
{
	// Add o on the list
    std::cout << "A new instance of driver has been added to the list " << std::endl;
	listOfObservers.push_front(observer);
}

const void TrafficLight::removeObserver(Observer* observer)
{
	// remove O from the list
	listOfObservers.remove(observer);
}

const void TrafficLight::notify()
{
	// Notify all the Observers
    	list<Observer*>::const_iterator end = listOfObservers.end();
        for (list<Observer*>::const_iterator observerId = listOfObservers.begin(); observerId != end; ++observerId)
            (*observerId)->update(colorState);
}

void TrafficLight::switchStateColorTo(std::string color)
{
	colorState = color;
	// Assuming C++ is multithread
	this ->notify();
}

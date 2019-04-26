#include <string>
#include <set>
#include <iostream>
#include "Observer.h"
#include <list>

using namespace std;

class TrafficLight
{
private:
	list<Observer*> listOfObservers;
	std::string colorState = "Yellow";
public:
	TrafficLight();
	~TrafficLight();
	void addObserver(Observer* observer);
	const void removeObserver(Observer* observer);
	const void notify();
	void switchStateColorTo(std::string color);

};


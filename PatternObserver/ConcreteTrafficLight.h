#include <string>
#include <set>
#include <iostream>

class ConcreteTrafficLight : public TrafficLight
{
private:
	list<Observer*> listOfObservers;
	std::string colorState;
public:
	ConcreteTrafficLight();
	~ConcreteTrafficLight();
	void addObserver(Observer* observer);
	void removeObserver(Observer* observer);
	void notifyObservers();
	void switchStateColorTo(std::string color);
};

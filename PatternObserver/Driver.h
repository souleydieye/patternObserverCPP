#include <string>
#include <set>
#include <iostream>
#include <string>
#include "Observer.h"

class Driver : public Observer
{
public:

	void update(std::string color);
};

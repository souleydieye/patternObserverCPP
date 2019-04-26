#include <string>
#include <set>
#include <iostream>
#ifndef Observer_CPP
#define Observer_CPP
class Observer
{
public:
	virtual void update(std::string color) = 0;
};




#endif

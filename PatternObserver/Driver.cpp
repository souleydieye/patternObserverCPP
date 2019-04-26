#include <string>
#include <set>
#include <iostream>
#include "Observer.h"
#include "Driver.h"

/*
Driver::Driver()
{

	std::cout << "A new instance of driver has been created " << std::endl;
}

Driver::~Driver()
{
	std::cout << "a driver is deleted " << std::endl;
}*/


    void Driver::update(std::string color){
    std::cout << "the Traffic Light is : " << color << std::endl;
}


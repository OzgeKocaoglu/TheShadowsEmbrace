#pragma once
#include <iostream>
#include "Skill.h"

class Ability
{
private:
	int value;

public:
	Ability() {
		std::cout << "Ability created.\n";
	}

	int getValue() 
	{
		return value;
	}
	
	void setValue(int value) 
	{
		this->value = value;
	}
};


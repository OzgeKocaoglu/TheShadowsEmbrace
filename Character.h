#pragma once
#include "Strength.h"
#include "Dexterity.h"
#include "Intelligence.h"
#include "Wisdom.h"
#include "Charisma.h"

class Character
{
private:
	float health;

	Strength strength;
	Dexterity dexterity;
	Intelligence intelligence;
	Wisdom wisdom;
	Charisma charisma;

public:
	void setHealth(float health) {
		this->health = health;
	}

	float getHealth() {
		return health;
	}

};


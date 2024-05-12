#pragma once
#include <iostream>
#include "Character.h"
#include "Barbarian.h"

class PlayerCharacter : public Character, public Barbarian
{
public :
	PlayerCharacter() {
		setHealth(100);

		std::cout << "Player character created.\n";
	}
};


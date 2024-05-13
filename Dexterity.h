#pragma once
#include "Ability.h"
#include "Acrobatics.h"
#include "SleightOfHand.h"
#include "Stealth.h"

class Dexterity : public Ability
{
public : 
	Acrobatics acrobatics;
	SleightOfHand sleightOfHand;
	Stealth stealth;
};


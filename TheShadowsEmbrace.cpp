
#include <iostream>
#include "PlayerCharacter.h"

using namespace std;

int main()
{
    PlayerCharacter player;

    cout << "Healt : " << player.getHealth() << "\n";

    player.setHealth(40);

    cout << "Healt : " << player.getHealth();
}


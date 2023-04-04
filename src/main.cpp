#include <iostream>
#include <cstdlib>
#include "Intro.h"
#include "Player.h"

int main()
{
        //intro
    IntroMessage();

        // Player name and class
        Player player;
        std::string name, classType;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Select your class (Wizard, Warrior, Rogue): ";
    std::cin >>classType;

    system("cls");

    createPlayer(player, name, classType);

        //Player stats
    std::cout << "Welcome, " << player.name << " the " << player.classType << "!" << std::endl;
    std::cout << "Your Stats are:\n";
    std::cout << "Health: " << player.health << std::endl;
    std::cout << "Defense: " << player.defense << std::endl;
    std::cout << "Attack Damage: " << player.attackdmg << std::endl;
    std::cout << "Magic Damage: " << player.magicdmg << std::endl;











    return 0;
}

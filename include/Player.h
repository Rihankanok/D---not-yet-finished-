#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <vector>


class Player {

public:
    std::string name;
    std::string classType;
    int health;
    int defense;
    int attackdmg;
    int magicdmg;
};


void createPlayer(Player &player, std::string name, std::string classType) 
{
    player.name = name;
    player.classType = classType;
    if (classType == "Wizard") 
    {
        player.health = 60;
        player.defense = 5;
        player.attackdmg = 5;
        player.magicdmg = 30;
    }

    else if (classType == "Warrior")
    {
        player.health = 100;
        player.defense = 20;
        player.attackdmg = 20;
        player.magicdmg = 0;
    }
    
    else if (classType == "Rogue")
    {
        player.health = 80;
        player.defense = 10;
        player.attackdmg = 25;
        player.magicdmg = 5;
    }

    else
    {
        std::cout << "Class does not exist.\n";
    }
}

#endif

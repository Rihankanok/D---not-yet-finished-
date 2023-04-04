#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>
#include <string>


class Enemy {
public:
    std::string enemyType;
    int health;
    int defense;
    int attack;
};

class Goblin : public Enemy {
public:
    Goblin() {
        enemyType = "Goblin";
        health = 30;
        defense = 5;
        attack = 10
    }

    class Orc : public Enemy {
public:
    Orc() {
        enemyType = "Orc";
        health = 50;
        defense = 10;
        attack = 15;
    }
};

class Troll : public Enemy {
public:
    Troll() {
        enemyType = "Troll";
        health = 80;
        defense = 15;
        attack = 20;
    }
};
};




















#endif
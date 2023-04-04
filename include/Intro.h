#ifndef INTRO_H
#define INTRO_H

#include <iostream>
#include <string>
#include <cstdlib>

void IntroMessage() {
    std::string Intro = R"(

    Welcome to D++, the thrilling C++ RPG adventure game. Get ready to embark on a journey filled with obstacles and battles as you explore a vast world filled with mysteries and treasures. 
    Choose your character class and battle against fierce monsters to become the greatest hero in the land. The future of the world rests on your shoulders.
    Are you ready to take on the challenge?
    yes/no)";
    std::cout << Intro << std::endl;
    std::string answer;
    std::cin >> answer;

    if (answer == "yes")
    {
        system("cls");
    }
    else
    {
        std::cout << "Farewell then.\n";
    }
}

#endif
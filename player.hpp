#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
#include <iostream>
#include <limits>
#include <random>
#include <ctime>

class Player {

private:
    std::string name;
    int hp;
public:
    // 1-arg ctor
    Player(std::string name);
    // setters
    
    // getters
    std::string getPlayerName() const;
    int getHP() const;

    // player abilities
    int Punch(Player& enemy);
    int Kick(Player& enemy); 

    // enemy abilities
    int Scratch(Player& player);
    int Bite(Player& player);

    int SetDamageModifier(int min, int max);
    void DisplayBattle(std::string_view Action, int Damage, Player& Player) const;
};

#endif // PLAYER_HPP

/*
    Player class
        Attributes
            - Name, HP
        Player Methods
            - punch, kick, block
        Enemy Methods
            - scratch, bite

    - Create Menu
        - Name character 
        - Name enemy

    - Allow the player to choose which ability to use.
        - pass in enemy object by reference
    - Whoever gets to 0 health first loses
        - Check health after every 'turn'
*/
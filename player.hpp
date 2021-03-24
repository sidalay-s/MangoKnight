#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
#include <iostream>
#include <limits>

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

class Player {

private:
    std::string name;
    int hp;
public:
    // 1-arg ctor
    Player(std::string name);
    // getter
    int getHP() const;

    // player abilities
    int Punch(Player& enemy);
    int Kick(Player& enemy); 

    // enemy abilities
    int Scratch(Player& player);
    int Bite(Player& player);

};

#endif // PLAYER_HPP
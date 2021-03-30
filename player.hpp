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
    void setPlayerName(std::string name);
    void setPlayerHp(int hp);
    // getters
    std::string getPlayerName() const;
    int getHP() const;

    enum class Element {Fire, Water, Air, Earth, Ice};

    enum class Spell {};

    enum class Buff {IceArmor, FireArmor, };

    enum class Debuff {Wet, Burn, Bleed, Frozen, Stunned};

    int Attack(Player& player, int min, int max, std::string_view AtkType);

    // player abilities
    int Punch(Player& enemy);
    int Kick(Player& enemy); 

    // enemy abilities
    int Scratch(Player& player);
    int Bite(Player& player);

    int GetDamageModifier(int min, int max);
    void DisplayBattle(std::string_view Action, int Damage, Player& Player) const;

    bool isDead(Player& player) const;
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
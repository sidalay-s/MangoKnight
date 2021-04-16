#ifndef BATTLE_HPP
#define BATTLE_HPP

#include "player.hpp"

class Battle {
private:
    size_t PhaseCount{};
    size_t TurnCount{};
    Player Mage1;
    Player Mage2;
public:
    Battle(Player a, Player b);

    void PreBattle();
    void Start();
    Player Phase();
    Player Turn();

};

#endif // BATTLE_HPP
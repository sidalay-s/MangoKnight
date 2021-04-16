#include "battle.hpp"

Battle::Battle(Player a, Player b) 
    : PhaseCount{1}, TurnCount{1}, Mage1{a}, Mage2{b} {
}

Player Battle::Start() {
    while (true) {
        if (!(Mage1.getHP() <= 0 || Mage2.getHP() <= 0)) {
            if (PhaseCount == 1 && TurnCount <= 3) {
                
            }
            else if (PhaseCount == 2 && (TurnCount > 3 && TurnCount <= 6)) {

            }
        }
    } 
}
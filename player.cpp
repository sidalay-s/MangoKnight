#include "player.hpp"

std::mt19937 seeds(time(nullptr));

std::string SeparatingLine {"-----------------------------------"};

// Constructor
Player::Player(std::string name)
    : name{name}, hp{100} {
    std::cout << '\n' << name << " has entered the battle!!!!\n";
}

// Setters
// void Player::setPlayerName(std::string name) {
//     this->name = name;
// }

// void Player::setPlayerHp(int hp) {
//     this->hp = hp;
// }

// Getters
std::string Player::getPlayerName() const {
    return name;
}

int Player::getHP() const {
    return hp;
}

int Player::GetDamageModifier(int min, int max) {
    std::uniform_int_distribution DamageRange{min, max};
    int Damage{DamageRange(seeds)};
    return Damage;
}

void Player::DisplayBattle(std::string_view Action, int Damage, Player& Player) const {
    std::cout << SeparatingLine << '\n' << this->name << " uses " << Action << " for " << Damage << " damage!\n";
    std::cout << Player.name << " has " << Player.hp << " hp left!\n" << SeparatingLine << '\n';
}

bool Player::isDead(Player& player) const {
    if (player.hp <= 0)
        return true;
    else 
        return false;
}

int Player::Attack(Player& player, int min, int max, std::string_view AtkType) {
    int Damage(GetDamageModifier(min, max));
    player.hp -= Damage;
    if (isDead(player)) {player.hp = 0;}
    DisplayBattle(AtkType, Damage, player);
    return player.hp;
}

int Player::Punch(Player& enemy) {
    return Attack(enemy, 5, 10, "PUNCH");
}

int Player::Kick(Player& enemy) {
    return Attack(enemy, 1, 20, "KICK");
}

int Player::Scratch(Player& player) {
    return Attack(player, 6, 9, "SCRATCH");
}

int Player::Bite(Player& player) {
    return Attack(player, 5, 15, "BITE");
}
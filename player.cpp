#include "player.hpp"

std::mt19937 seeds(time(nullptr));

std::string SeparatingLine {"---------------------------------------"};

int Player::SetDamageModifier(int min, int max) {
    std::uniform_int_distribution DamageRange{min, max};
    int Damage{DamageRange(seeds)};
    return Damage;
}

Player::Player(std::string name)
    : name{name}, hp{100} {
    std::cout << '\n' << name << " has entered the battle!!!!" << std::endl;
}

std::string Player::getPlayerName() const {
    return name;
}

int Player::getHP() const {
    return hp;
}

int Player::Punch(Player& enemy) {
    int PunchDamage{SetDamageModifier(5,10)};
    enemy.hp -= PunchDamage;
    std::cout << SeparatingLine << std::endl;
    std::cout << this->name << " uses PUNCH for " << PunchDamage << " damage!" << std::endl;
    std::cout << enemy.name << " has " << enemy.hp << " hp left!\n" << std::endl;
    return enemy.hp;
}

int Player::Kick(Player& enemy) {
    int KickDamage{SetDamageModifier(1,20)};
    enemy.hp -= KickDamage;
    std::cout << SeparatingLine << std::endl;
    std::cout << this->name << " uses KICK for " << KickDamage << " damage!" << std::endl;
    std::cout << enemy.name << " has " << enemy.hp << " hp left!\n" << std::endl;
    return enemy.hp;
}

int Player::Scratch(Player& player) {
    int ScratchDamage{SetDamageModifier(6,9)};
    player.hp -= ScratchDamage;
    std::cout << this->name << " uses SCRATCH for " << ScratchDamage << " damage!" << std::endl;
    std::cout << player.name << " has " << player.hp << " hp left!" << std::endl;
    std::cout << SeparatingLine << std::endl;
    return player.hp;
}

int Player::Bite(Player& player) {
    int BiteDamage{SetDamageModifier(5,15)};
    player.hp -= BiteDamage;
    std::cout << this->name << " uses BITE for " << BiteDamage << " damage!" << std::endl;
    std::cout << player.name << " has " << player.hp << " hp left!" << std::endl;
    std::cout << SeparatingLine << std::endl;
    return player.hp;
}
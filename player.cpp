#include "player.hpp"

std::mt19937 seeds(time(nullptr));

std::string SeparatingLine {"-----------------------------------"};

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

int Player::SetDamageModifier(int min, int max) {
    std::uniform_int_distribution DamageRange{min, max};
    int Damage{DamageRange(seeds)};
    return Damage;
}

void Player::DisplayBattle(std::string_view Action, int Damage, Player& Player) const {
    std::cout << SeparatingLine << '\n' << this->name << " uses " << Action << " for " << Damage << " damage!\n";
    std::cout << Player.name << " has " << Player.hp << " hp left!\n" << SeparatingLine << std::endl;
}

int Player::Punch(Player& enemy) {
    int PunchDamage{SetDamageModifier(5,10)};
    enemy.hp -= PunchDamage;
    DisplayBattle("PUNCH", PunchDamage, enemy);
    return enemy.hp;
}

int Player::Kick(Player& enemy) {
    int KickDamage{SetDamageModifier(1,20)};
    enemy.hp -= KickDamage;
    DisplayBattle("KICK", KickDamage, enemy);
    return enemy.hp;
}

int Player::Scratch(Player& player) {
    int ScratchDamage{SetDamageModifier(6,9)};
    player.hp -= ScratchDamage;
    DisplayBattle("SCRATCH", ScratchDamage, player);
    return player.hp;
}

int Player::Bite(Player& player) {
    int BiteDamage{SetDamageModifier(5,15)};
    player.hp -= BiteDamage;
    DisplayBattle("BITE", BiteDamage, player);
    return player.hp;
}
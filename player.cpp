#include "player.hpp"

Player::Player(std::string name)
    : name{name}, hp{100} {
    std::cout << '\n' << name << " has entered the battle!!!!" << std::endl;
}

int Player::getHP() const {
    return hp;
}

int Player::Punch(Player& enemy) {
    std::cout << '\n' << enemy.name << " has taken 10 damage!" << std::endl;
    enemy.hp -=10;
    std::cout << enemy.name << " has " << enemy.hp << " hp left" << std::endl;
    return enemy.hp;
}

int Player::Kick(Player& enemy) {
    std::cout << '\n' << enemy.name << " has taken 20 damage!" << std::endl;
    enemy.hp -=30;
    std::cout << enemy.name << " has " << enemy.hp << " hp left" << std::endl;
    return enemy.hp;
}

int Player::Scratch(Player& player) {
    std::cout << '\n' << player.name << " has taken 10 damage!" << std::endl;
    player.hp -=10;
    std::cout << player.name << " has " << player.hp << " hp left" << std::endl;
    return player.hp;
}

int Player::Bite(Player& player) {
    std::cout << '\n' << player.name << " has taken 20 damage!" << std::endl;
    player.hp -=20;
    std::cout << player.name << " has " << player.hp << " hp left" << std::endl;
    return player.hp;
}
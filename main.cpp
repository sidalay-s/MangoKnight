#include "player.hpp"

std::mt19937 seed (time(nullptr));

int main() {

    std::cout << "Welcome to the Mango battle arena!\n";

    std::string PlayerName{};
    std::string EnemyName{};

    std::cout << "\nPlease enter your name: ";
    std::cin >> PlayerName;

    Player Mango{PlayerName};
    
    std::cout << "\nEnter the name of your mortal enemy: ";
    std::cin >> EnemyName;
    
    Player Enemy{EnemyName};

    // Battle(Mango, Enemy);
}

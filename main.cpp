#include "player.hpp"

int PlayerTurn(Player& player, Player& enemy);
int EnemyTurn(Player& player, Player& enemy);

int main() {
    std::cout << "Welcome to the Mango battle arena!" << std::endl;

    std::string PlayerName{};
    std::string EnemyName{};

    std::cout << "\nPlease enter your name: ";
    std::cin >> PlayerName;

    Player Mango{PlayerName};
    
    std::cout << "\nEnter the name of the one you despise the most: ";
    std::cin >> EnemyName;
    
    Player Enemy{EnemyName};

    while (true) {
        if (PlayerTurn(Mango, Enemy) <= 0) {
            std::cout << "\nYou have WON! " << PlayerName << " is victorious!!" << std::endl;
            break;
        }
        if (EnemyTurn(Mango, Enemy) <= 0) {
            std::cout << "\nYou have LOST! " << EnemyName << " has kicked your butt!!" << std::endl;
            break;
        }
    }        
}

int PlayerTurn(Player& player, Player& enemy) {
    char UserInput;
    
    std::cout << "\nChoose your action: \n"
              << "1. Punch\n"
              << "2. Kick\n" << std::endl;

    if (std::cin >> UserInput) {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        switch (UserInput) {
            case '1':
                std::cout << "\nPlayer uses punch!" << std::endl;
                player.Punch(enemy);
                break;
            case '2':
                std::cout << "\nPlayer uses kick!" << std::endl;
                player.Kick(enemy);
                break;
            default:
                std::cout << "Invalid input. Try again\n" << std::endl;
                PlayerTurn(player, enemy);
        }
    }

    // else if (std::cin.fail()) {
    //     std::cin.clear();
    //     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    //     std::cout << "\nInvalid input. Please try again" << std::endl;
    //     PlayerTurn(player, enemy);
    // }

    else {
        PlayerTurn(player, enemy);
    }

    return enemy.getHP();
}

int EnemyTurn(Player& player, Player& enemy) {

    std::cout << "\nEnemy uses bite!" << std::endl;
    enemy.Bite(player);
    return player.getHP();
}
    
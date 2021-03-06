#include <player.hpp>

int UserTurn(Player& player, Player& enemy);
int EnemyTurn(Player& player, Player& enemy);
void Battle(Player& player, Player& enemy);

std::mt19937 seed (time(nullptr));

int UserTurn(Player& player, Player& enemy) {
    char UserInput;
    
    std::cout << "\nChoose your action: \n"
              << "1. Punch\n"
              << "2. Kick\n\n";

    if (std::cin >> UserInput) {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        switch (UserInput) {
            case '1':
                player.Punch(enemy);
                break;
            case '2':
                player.Kick(enemy);
                break;
            default:
                std::cout << "Invalid input. Try again\n\n";
                UserTurn(player, enemy);
        }
    }

    // else if (std::cin.fail()) {
    //     std::cin.clear();
    //     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    //     std::cout << "\nInvalid input. Please try again" << std::endl;
    //     UserTurn(player, enemy);
    // }

    else {
        UserTurn(player, enemy);
    }

    return enemy.getHP();
}

int EnemyTurn(Player& player, Player& enemy) {

    std::uniform_int_distribution<int> distribution{1,2};
    int enemyInput {distribution(seed)};
    // std::cout << '\n' << enemyInput << std::endl;

    switch (enemyInput) {
        case 1:
            enemy.Scratch(player);
            break;
        case 2:
            enemy.Bite(player);
            break;
    }

    return player.getHP();
}
    
void Battle(Player& player, Player& enemy) {
    std::uniform_int_distribution<int> Turnbase{1,2};
    int HeadsTails {Turnbase(seed)};

    if (HeadsTails == 1)
        std::cout << '\n' << player.getPlayerName() << " makes the first move!\n";
    else 
        std::cout << '\n' << enemy.getPlayerName() << " makes the first move!\n";
    
    while (true) {
        if (HeadsTails == 1) {
            if (UserTurn(player, enemy) <= 0) {
                std::cout << "\nYou have WON! " << player.getPlayerName() << " is victorious!!" << std::endl;
                break;
            }
            if (EnemyTurn(player, enemy) <= 0) {
                std::cout << "\nYou have LOST! " << enemy.getPlayerName() << " has kicked your butt!!" << std::endl;
                break;
            }
        }
        else {
            if (EnemyTurn(player, enemy) <= 0) {
                std::cout << "\nYou have LOST! " << enemy.getPlayerName() << " has kicked your butt!!" << std::endl;
                break;
            }
            if (UserTurn(player, enemy) <= 0) {
                std::cout << "\nYou have WON! " << player.getPlayerName() << " is victorious!!" << std::endl;
                break;
            }
        }
    }   
}
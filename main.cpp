#include "player.hpp"

std::mt19937 seed (time(nullptr));

int main() {

    // try {

        Element Fire  {Element::Raw::Fire};
        Element Water {Element::Raw::Water};
        Element Air   {Element::Raw::Air};
        Element Earth {Element::Raw::Earth};
        Element Ice   {Element::Raw::Shadow};

        std::cout << "Hello!" << std::endl;

    // }
    // catch (const std::exception& test) {
    //     std::cerr << test.what() << std::endl;
    //     std::terminate(); 
    // }
    

    // std::string PlayerName{};
    // std::string EnemyName{};

    // std::cout << "\nPlease enter your name: ";
    // std::cin >> PlayerName;

    // Player Mango{PlayerName};
    
    // std::cout << "\nEnter the name of your mortal enemy: ";
    // std::cin >> EnemyName;
    
    // Player Enemy{EnemyName};

    // Battle(Mango, Enemy);
    
}

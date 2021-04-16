#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
#include <iostream>
#include <limits>
#include <random>
#include <ctime>
#include "resonance.hpp"

struct PlayerStats {
    size_t XP{};
    size_t Level{};
    size_t Rank{};

    size_t DamageCounter{};
    bool IsWinner;

    size_t MatchCount{};
    size_t Wins{};
    size_t Losses{};
    size_t WinRate{};

    size_t FireUseCount{};
    size_t WaterUseCount{};
    size_t AirUseCount{};
    size_t EarthUseCount{};
    size_t IceUseCount{};
    size_t ShadowUseCount{};

    Element::Raw FavoriteElement{};
};

class Player {

private:
    const std::string Name;
    int HP;
    Resonance Draw;
    PlayerStats Statistics;
public:
    // 1-arg ctor
    Player(std::string name);
    // getters
    std::string GetPlayerName() const;
    int GetHP() const;
    bool IsDead(Player& player) const;
    void GainXP();
    void CheckXP();
    void LevelUp();
    void CastSpell();

    void Steam();
    void Fireball();


    // int Attack(Player& player, int min, int max, std::string_view AtkType);

    // // player abilities
    // int Punch(Player& enemy);
    // int Kick(Player& enemy); 

    // // enemy abilities
    // int Scratch(Player& player);
    // int Bite(Player& player);

    // int GetDamageModifier(int min, int max);
    // void DisplayBattle(std::string_view Action, int Damage, Player& Player) const;

    
};

#endif // PLAYER_HPP

/*
    PHASES [TODO]
    - ? multiple-turn based battle system where user & opponent have to plan out their battle in advanced ?
    - ? allow for unused elements to transfer over to the next turn ?
    - ? allow to discard all unused elements to get a whole new assortment next turn ?
    - 'Phase' used to represent a complete multi-turn sequence ?
    - ? when battle commences, each player's actions should be played out simultaneously ?

    SPELLS [TODO]
    - ? do we need to make Element-type class ?
    - ? Use the term 'Conjure' or 'Sorcery' to indicate combined elemental spells ?
    - ? Operator overload+ for conjuring/sorcery spells ?
    - How will we implement Buffs / Debuffs (Should these be player object attributes?)

    CHARACTER [TODO]
    - Players have a profile and mage with access to: 
        {statistics}
        {ranking}
        {match history}
        {? talent trees ?} 
        {customizable outfits} *PURELY COSMETIC*
            - 4 piece armor (head, body, legs, arms)
            - 1 piece weapon set (staff, wand/shield)
            - Espers (pet/companions)
            - Map skins
    
    MATCH HISTORY [TODO]
    - Add some kind of tracker to record the battle history (this should be viewable by both players after a match has ended)
    - Create a 'battle simulator' that will allow a player to 'playback' a match
        - This will also be useful to test and simulate battles for debugging
    - Will need functions to calculate damage and ? save it into a config file ?

    MAPS [TODO]
    - ? Environmental statuses ?
        - ? Ice map - ice elemental benefits ?

    STORY [TODO]
    - World of magic
    - Mages looking for power are seeking out legendary artifacts
    - Source of mages power is dependent on their 'resonance' 
*/

/*
    Player class
        Attributes
            - Name, HP
        Player Methods
            - punch, kick, block
        Enemy Methods
            - scratch, bite

    - Create Menu
        - Name character 
        - Name enemy

    - Allow the player to choose which ability to use.
        - pass in enemy object by reference
    - Whoever gets to 0 health first loses
        - Check health after every 'turn'
*/
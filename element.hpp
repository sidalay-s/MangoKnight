#ifndef ELEMENT_HPP
#define ELEMENT_HPP

class Element {
public:
    enum class Raw {Fire, Water, Air, Earth, Ice};
    // enum class Spell {IceArmor, FireArmor};
    // enum class Buff {IceRes, FireRes, };
    // enum class Debuff {Wet, Burn, Bleed, Frozen, Stunned};
private:
    const Raw Type{};
    const int RawDamage{};
    
public:
    Element(Raw Type);
}; 

#endif // ELEMENT_HPP

/*
    PHASES
    - ? multiple-turn based battle system where user & opponent have to plan out their battle in advanced ?
    - ? allow for unused elements to transfer over to the next turn ?
    - ? allow to discard all unused elements to get a whole new assortment next turn ?
    - 'Phase' used to represent a complete multi-turn sequence ?
    - ? when battle commences, each player's actions should be played out simultaneously ?

    SPELLS
    - ? do we need to make Element-type a class ?
    - ? Use the term 'Conjure' or 'Sorcery' to indicate combined elemental spells ?
    - ? Operator overload+ for conjuring/sorcery spells ?
    - How will we implement Buffs / Debuffs (Should these be player object attributes?)

    CHARACTER
    - Players have a profile and mage with access to: 
        {statistics}
        {match history}
        {ranking}
        {? talent trees ?} 
        {customizable outfits} *PURELY COSMETIC*
            - 4 piece armor (head, body, legs, arms)
            - 1 piece weapon set (staff, wand/shield)
            - Espers (pet/companions)
            - Map skins
    
    MATCH HISTORY
    - Add some kind of tracker to record the battle history (this should be viewable by both players after a match has ended)
    - Create a 'battle simulator' that will allow a player to 'playback' a match
        - This will also be useful to test and simulate battles for debugging
    - Will need functions to calculate damage and ? save it into a config file ?
    
*/
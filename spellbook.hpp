#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP
#include <vector>

class Spellbook {
public: 
    enum class Element {Fire, Water, Air, Earth, Ice};
    // enum class Spell {IceArmor, FireArmor};
    // enum class Buff {IceRes, FireRes, };
    // enum class Debuff {Wet, Burn, Bleed, Frozen, Stunned};

private:
    std::vector <Element> Spells{}; 

public:
    
};

#endif // SPELLBOOK_HPP


// ? multiple-turn based battle system where user & opponent have to plan out their battle in advanced ?
// ? allow for unused spells to transfer over to the next turn ?
// ? do we need to make Element-type a class ?
// How will we implement Buffs / Debuffs (Should these be player object attributes?)
// ? Use the term 'Conjure' to indicate combined elemental spells ?
// ? when battle commences, each player's actions should be played out simultaneously ?
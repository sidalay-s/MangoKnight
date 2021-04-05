#ifndef ELEMENT_HPP
#define ELEMENT_HPP

class Element {
public:
    enum class Raw {Fire, Water, Air, Earth, Ice};
    // enum class Spell {IceArmor, FireArmor};
    // enum class Buff {IceRes, FireRes, };
    // enum class Debuff {Wet, Burn, Bleed, Frozen, Stunned};
private:
    Raw Type{};
    int RawDamage{};
    
public:

}; 

#endif // ELEMENT_HPP
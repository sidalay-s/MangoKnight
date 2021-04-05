#include "element.hpp"
#include <iostream>

Element::Element(Raw Type) 
    : Type{Type}, RawDamage{[Type] {
        int Damage{};
        switch (Type) {
            case Raw::Fire: 
                Damage = 10;
                break;
            case Raw::Water:
                Damage = 7;
                break;
            case Raw::Air:
                Damage = 6;
                break;
            case Raw::Earth:
                Damage = 9;
                break;
            case Raw::Ice:
                Damage = 8;
                break;
        }
    return Damage;
    }()} {
    std::cout << this->RawDamage << '\n';
}
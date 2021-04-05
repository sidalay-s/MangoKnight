#include "element.hpp"
#include <iostream>
#include <stdexcept>

Element::Element(Raw Type)
    : Type{Type}, RawDamage{[Type] {
        switch (Type) {
            case Raw::Fire: 
                return 10;
            case Raw::Water:
                return 7;
            case Raw::Air:
                return 6;
            case Raw::Earth:
                return 9;
            case Raw::Ice:
                return 8;
            default:
                throw std::runtime_error{"Something went wrong with Element class constructor. Raw type was not defined."};
                return 0;
        }
    }()} {
    std::cout << this->RawDamage << '\n';
}

Element::Raw Element::GetType() const {
    return this->Type;
}

int Element::GetRawDamage() const {
    return this->RawDamage;
}
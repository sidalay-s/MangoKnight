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

Element Element::operator+(const Element& rhs) {

    if (this->Type == Element::Raw::Fire) {

        if (rhs.Type == Element::Raw::Fire) {

        }
        else if (rhs.Type == Element::Raw::Ice) {

        }
        else if (rhs.Type == Element::Raw::Water) {

        }
        else if (rhs.Type == Element::Raw::Air) {

        }
        else if (rhs.Type == Element::Raw::Earth) {

        }
    }

    else if (this->Type == Element::Raw::Ice) {

        if (rhs.Type == Element::Raw::Fire) {

        }
        else if (rhs.Type == Element::Raw::Ice) {

        }
        else if (rhs.Type == Element::Raw::Water) {

        }
        else if (rhs.Type == Element::Raw::Air) {

        }
        else if (rhs.Type == Element::Raw::Earth) {

        }
    }

    else if (this->Type == Element::Raw::Water) {

        if (rhs.Type == Element::Raw::Fire) {

        }
        else if (rhs.Type == Element::Raw::Ice) {

        }
        else if (rhs.Type == Element::Raw::Water) {

        }
        else if (rhs.Type == Element::Raw::Air) {

        }
        else if (rhs.Type == Element::Raw::Earth) {

        }
    }

    else if (this->Type == Element::Raw::Air) {

        if (rhs.Type == Element::Raw::Fire) {

        }
        else if (rhs.Type == Element::Raw::Ice) {

        }
        else if (rhs.Type == Element::Raw::Water) {

        }
        else if (rhs.Type == Element::Raw::Air) {

        }
        else if (rhs.Type == Element::Raw::Earth) {

        }
    }

    else if (this->Type == Element::Raw::Earth) {

        if (rhs.Type == Element::Raw::Fire) {

        }
        else if (rhs.Type == Element::Raw::Ice) {

        }
        else if (rhs.Type == Element::Raw::Water) {

        }
        else if (rhs.Type == Element::Raw::Air) {

        }
        else if (rhs.Type == Element::Raw::Earth) {

        }
    }
}

// All different combinations

/*      Singles

    - Fire
    - Ice
    - Water
    - Earth
    - Air

*/

/*      Doubles      

    - Fire + Fire   = Fire+ (Direct)
    - Fire + Ice    = Water
    - Fire + Water  = Steam
    - Fire + Earth  = Fireball (Direct)
    - Fire + Air    = 

    - Ice + Ice     = Ice+
    - Ice + Fire    =
    - Ice + Water   =
    - Ice + Earth   =
    - Ice + Air     =

    - Water + Water
    - Water + Fire
    - Water + Ice
    - Water + Earth
    - Water + Air

    - Earth + Earth
    - Earth + Fire
    - Earth + Ice
    - Earth + Water
    - Earth + Air

    - Air + Air
    - Air + Fire
    - Air + Ice
    - Air + Water 
    - Air + Earth

*/

/*      Triples

    - Fire + Fire + Fire
    - Fire + Ice + Ice      = 
    - Fire + Ice + Water    =
    - Fire + Ice + Earth    =
    - Fire + Ice + Air      =
    - Fire + Water + Water  = 
    - Fire + Water + Ice
    - Fire + Water + Earth
    - Fire + Water + Air
    - Fire + Earth + Earth
    - Fire + Earth + Ice
    - Fire + Earth + Water
    - Fire + Earth + Air
    - Fire + Air + Air
    - Fire + Air + Ice
    - Fire + Air + Water
    - Fire + Air + Earth

*/
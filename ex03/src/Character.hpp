#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
 private:
    static const int kMaxSize = 4;
    AMateria slot[kMaxSize];

 public:
    Character(void);

    virtual void equip(AMateria *m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};

#endif

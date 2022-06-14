#ifndef ICE_HPP
# define ICE_HPP

#include <string>
#include "AMateria.hpp"

class Ice : public AMateria {
 public:
    Ice(void);
    Ice(const Ice& other);
    ~Ice(void);
    Ice& operator=(const Ice& other);

    virtual AMateria* clone(void) const;
    virtual void use(const ICharacter& target);
};

#endif

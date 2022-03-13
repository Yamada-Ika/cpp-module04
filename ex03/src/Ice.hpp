#ifndef ICE_HPP
# define ICE_HPP

#include <string>
#include "AMateria.hpp"

class Ice : public AMateria {
 public:
    explicit Ice(void);
    ~Ice(void);
    virtual AMateria* clone(void) const;
    virtual void use(const ICharacter& target);
};

#endif

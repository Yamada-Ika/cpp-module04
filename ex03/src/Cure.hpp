#ifndef CURE_HPP
# define CURE_HPP

#include <string>
#include "AMateria.hpp"

class Cure : public AMateria {
 public:
    explicit Cure(void);
    ~Cure(void);
    virtual AMateria* clone(void) const;
    virtual void use(const ICharacter& target);
};

#endif

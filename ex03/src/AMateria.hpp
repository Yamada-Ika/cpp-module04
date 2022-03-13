#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include "Character.hpp"

class AMateria : public ICharacter {
 protected:
    std::string type_;

 public:
    explicit AMateria(std::string const & type);
    virtual ~AMateria(void);
    std::string const & getType(void) const;
    virtual AMateria* clone(void) const = 0;
    virtual void use(const ICharacter& target);
};

#endif

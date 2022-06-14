#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include "Character.hpp"

class AMateria {
 protected:
    std::string type_;

 public:
    AMateria(void);
    AMateria(std::string const & type);
    AMateria(const AMateria& other);
    virtual ~AMateria(void);
    AMateria& operator=(const AMateria& other);

    std::string const & getType(void) const;
    void setType(std::string const& type);

    virtual AMateria* clone(void) const = 0;
    virtual void use(const ICharacter& target);
};

#endif

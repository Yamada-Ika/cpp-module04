#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
 private:
    static const int kMaxSize = 4;
    AMateria materias_[kMaxSize];

 public:
    MateriaSource(void);
    MateriaSource(const MateriaSource& other);
    ~MateriaSource(void);
    MateriaSource &operator=(const MateriaSource& other);

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};

#endif

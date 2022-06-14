#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {}

MateriaSource::MateriaSource(const MateriaSource& other) {
    *this = other;
}

MateriaSource::~MateriaSource(void) {}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
    return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
    if (m == NULL) return;

    
}

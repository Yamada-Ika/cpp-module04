#include "MateriaSource.hpp"

#include <string>

MateriaSource::MateriaSource(void) {
    for (int i = 0; i < kMaxSize; ++i) {
        materias_[i] = NULL;
    }
}

// MateriaSource::MateriaSource(const MateriaSource& other) {
//     *this = other;
// }

MateriaSource::~MateriaSource(void) {
    for (int i = 0; i < kMaxSize; ++i) {
        delete materias_[i];
    }
}

// MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
//     return *this;
// }

void MateriaSource::learnMateria(AMateria* m) {
    if (m == NULL) return;

    for (int i = 0; i < kMaxSize; ++i) {
        if (materias_[i] == NULL) {
            materias_[i] = m;
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < kMaxSize; ++i) {
        if (materias_[i] == NULL) {
            continue;
        }
        if (materias_[i]->getType() == type) {
            // return new AMateria(type);
            return materias_[i];
        }
    }
    return NULL;
}

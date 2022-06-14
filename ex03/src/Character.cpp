#include "Character.hpp"

Character::Character(void) {
    for (int i = 0; i < kMaxSize; ++i) {
        slot[i].setType("");
    }
}

// TODO(iyamada) typeが空のmが入ったとき、最初から空かどうかの判定ができない
void Character::equip(AMateria *m) {
    if (m == NULL) return;

    for (int i = 0; i < kMaxSize; ++i) {
        if (slot[i].getType().empty()) {
            slot[i] = *m;
            return;
        }
    }
}

// TODO(iyamada) The unequip() member function must NOT delete the Materia! とあるので空にするしかなさそう
void Character::unequip(int idx) {
    if (idx < 0 || kMaxSize < idx) return;

    if (slot[idx].getType().empty()) return;

    slot[idx].setType("");
}

void Character::use(int idx, ICharacter& target) {
    if (idx < 0 || kMaxSize < idx) return;

    slot[idx].use(target);
}

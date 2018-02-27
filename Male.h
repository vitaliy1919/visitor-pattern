#ifndef MALE_H_INCLUDED
#define MALE_H_INCLUDED

#include "Person.h"

class Male : public Person {
public:
    Male();
    Male(size_t, size_t);
    void grow_up(size_t);
    void loose_weight(size_t);
    void gain_weight(size_t);
    void accept(Visitor*);
};

#endif // MALE_H_INCLUDED

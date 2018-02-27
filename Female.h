#ifndef FEMALE_H_INCLUDED
#define FEMALE_H_INCLUDED

#include "Person.h"

class Female : public Person {
public:
    Female();
    Female(size_t, size_t);
    void grow_up(size_t);
    void loose_weight(size_t);
    void gain_weight(size_t);
    void accept(Visitor*);
};

#endif // FEMALE_H_INCLUDED

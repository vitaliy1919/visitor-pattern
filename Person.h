#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <cstdio>

class Visitor;

class Person {
    friend class Statistician;
protected:
    size_t weight;
    size_t height;
public:
    Person();
    Person(size_t, size_t);
    virtual void grow_up(size_t);
    virtual void gain_weight(size_t);
    virtual void loose_weight(size_t);
    virtual void accept(Visitor*);
};

#include "Visitor.h"

#endif // PERSON_H_INCLUDED

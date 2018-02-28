#include "Male.h"
#include "Visitor.h"
Male::Male() : Person() {
}

Male::Male(size_t w, size_t h) : Person(w, h) {
}

void Male::grow_up(size_t)
{
}

void Male::loose_weight(size_t)
{
}

void Male::gain_weight(size_t)
{
}

void Male::accept(Visitor * v) {
    v->visit_male(this);
}

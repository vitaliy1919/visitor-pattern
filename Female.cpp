#include "Female.h"
#include "Visitor.h"
Female::Female() : Person() {
}

Female::Female(size_t w, size_t h) : Person(w, h) {
}

void Female::grow_up(size_t)
{
}

void Female::loose_weight(size_t)
{
}

void Female::gain_weight(size_t)
{
}

void Female::accept(Visitor * v) {
    v->visit_female(this);
}

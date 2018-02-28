#include "Person.h"

Person::Person() : weight(0), height(0) {
}

Person::Person(size_t w, size_t h) : weight(w), height(h) {
}

void Person::grow_up(size_t)
{
}

void Person::gain_weight(size_t)
{
}

void Person::loose_weight(size_t)
{
}

void Person::accept(Visitor *)
{
}

#include "Male.h"

Male::Male() : Person() {
}

Male::Male(size_t w, size_t h) : Person(w, h) {
}

void Male::accept(Visitor * v) {
    v->visit_male(this);
}

#include "Female.h"

Female::Female() : Person() {
}

Female::Female(size_t w, size_t h) : Person(w, h) {
}

void Female::accept(Visitor * v) {
    v->visit_female(this);
}

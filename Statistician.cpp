#include "Statistician.h"
#include "Male.h"
#include "Female.h"

Statistician::Statistician() : femaleCount(0), maleCount(0), femaleWeightSum(0), maleWeightSum(0) {
}

void Statistician::visit_female(Female * f) {
    femaleWeightSum+=f->weight;
    ++femaleCount;
}

void Statistician::visit_male(Male * m) {
    maleWeightSum+=m->weight;
    ++maleCount;
}

size_t Statistician::female_weight_average() {
    return femaleWeightSum/femaleCount;
}

size_t Statistician::male_weight_average() {
    return maleWeightSum/maleCount;
}

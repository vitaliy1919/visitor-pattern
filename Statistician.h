#ifndef STATISTICIAN_H_INCLUDED
#define STATISTICIAN_H_INCLUDED

#include "Visitor.h"

class Statistician : public Visitor {
private:
    size_t femaleCount;
    size_t maleCount;
    size_t femaleWeightSum;
    size_t maleWeightSum;
public:
    Statistician();
    void visit_male(Male*);
    void visit_female(Female*);
    size_t female_weight_average();
    size_t male_weight_average();
};

#endif // STATISTICIAN_H_INCLUDED

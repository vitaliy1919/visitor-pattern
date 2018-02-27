#ifndef POPULATION_H_INCLUDED
#define POPULATION_H_INCLUDED

#include "Person.h"
#include "Statistician.h"
#include "bits/stdc++.h"

using namespace std;

class Population {
private:
    vector<Person*> people;
public:
    void create_population();
    void get_statictics();
};

#endif // POPULATION_H_INCLUDED

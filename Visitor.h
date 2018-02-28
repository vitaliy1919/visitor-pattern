#ifndef VISITOR_H_INCLUDED
#define VISITOR_H_INCLUDED

#include <cstdio>
class Female;
class Male;

class Visitor {
public:
    virtual void visit_male(Male*) = 0;
    virtual void visit_female(Female*) = 0;
};


#endif // VISITOR_H_INCLUDED
